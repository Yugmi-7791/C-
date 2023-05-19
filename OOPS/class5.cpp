#include<iostream>
using namespace std;

class complex
{
	int a;
	int b;
	public:
		void setdata()
		{
			cout<<"Enter number 1 : ";
			cin>>a;
			cout<<"Enter number 2 : ";
			cin>>b;
			
		}
		void sum(complex o1,complex o2)
		{
			a=o1.a+o2.a;
			b=o1.b+o2.b;
		}
	
		void print()
		{
			cout<<"Sum of complex number is : "<<a<<"+"<<b<<"i"<<endl;
		}
};
	
int main()
{
	complex num1,num2,num3;
	num1.setdata();
	num1.print();
	num2.setdata();
	num2.print();
	num3.sum(num1,num2);
	num3.print();
	return 0;
}
