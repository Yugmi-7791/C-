#include<iostream>
using namespace std;

class A
{
	int a;
	int b;
	public:
	//A(int i,int j):a(i),b(j)
	//A(int i,int j):a(i),b(i+j)
	//A(int i,int j):a(i),b(2*j)
	A(int i,int j):a(i),b(a+j)//a and b can also be declared 						in function...
	{
		cout<<"a is : "<<a<<endl;
		cout<<"b is : "<<b<<endl;
	}
};

int main()
{
	A(2,3);
	return 0;
}
