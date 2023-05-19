//Calculator using class and objects.

#include<iostream>
using namespace std;
static int a,b;//Defining variable as static so that the value of variable can't be changed.
class calculator
{
	string s; //private member of class calculator
	public: 
	void read();
	void check();
	void add(int a,int b);
	void sub(int a,int b);
	void div(int a,int b);
	void mul(int a,int b);
};

void calculator::read()  //::->scope resolution operator
{
	cout<<"Choose operation from : \n1)Addition \n2)Substraction \n3)Multiplication 			\n4)Division"<<endl;
	cout<<"which operation you want to perform? Enter number : "<<endl;
	cin>>s;
	cout<<"Enter number 1 : "<<endl;
	cin>>a;
	cout<<"Enter number 2 : "<<endl;
	cin>>b;
}

void calculator::check()
{
	if (s=="1")
	add(a,b);
	if (s=="2")
	sub(a,b);
	if (s=="3")
	mul(a,b);
	if (s=="4")
	div(a,b);
}

void calculator::add(int a,int b)
{
	cout<<"Addition of "<<a<<" and "<<b<<" is : "<<(a+b)<<endl;
}

void calculator::sub(int a,int b)
{
	cout<<"Substraction of "<<a<<" and "<<b<<" is : "<<(a-b)<<endl;
}

void calculator::mul(int a,int b)
{
	cout<<"Multiplication of "<<a<<" and "<<b<<" is : "<<(a*b)<<endl;
}

void calculator::div(int a,int b)
{
	cout<<"Division of "<<a<<" and "<<b<<" is : "<<(a/b)<<endl;
}
	
int main()
{
	calculator c;
	c.read();
	c.check();
	return 0;
}
	
