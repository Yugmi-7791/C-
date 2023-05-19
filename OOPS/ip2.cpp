#include<iostream>
#include<math.h>

using namespace std;

class demo
{
	int num,fact,count=0;
	public:
		demo()
		{
			readno();
		}
		void factorial();
		void reverse();
		void ispalindrom();
		void isarmstrong();
		
	private:
		void readno()
		{
			cout<<"Enter any number : ";
			cin>>num;
		}	
};

void demo::factorial()
{
	int a=num;
	int i=1;
	while(a>0)
	{
		i=i*a;
		a--;
		fact++;
	}
	cout<<"Factorial of entered number is : "<<i<<endl;
}
		
void demo::reverse()
{
	int a=num;
	int rev=0;
	while(a>0)
	{
		rev=rev*10+a%10;
		a/=10;
	}
	cout<<"Reverse number of entered number is : "<<rev<<endl;
}

void demo::ispalindrom()
{
	int a=num;
	int rev=0;
	while(a>0)
	{
		rev=rev*10+a%10;
		a/=10;
	}
	if(rev==num)
	{
		cout<<"yes!!.Entered number is a Palindrom number."<<endl;
	}
	else
	{
		cout<<"No!!.Entered number is not a palindrom number."<<endl;
	}
}

void demo::isarmstrong()
{
	int a=num;
	int n=num;
	int rem=0,rs=0,i=1;
	while(a>0)
	{
		a/=10;
		count++;
	}
	while(n>0)
	{
		rem=n%10;
		rs+=pow(rem,count);
		n/=10;
	}
	if(rs==num)
	{
		cout<<"Yes!!.Entered number is an Armstrong number."<<endl;
	}
	else
	{
		cout<<"No!!.Entered number is not an Armstrong number."<<endl;
	}
}

int main()
{
	demo n1=demo();
	n1.factorial();
	n1.reverse();
	n1.ispalindrom();
	n1.isarmstrong();
	return 0;
}
