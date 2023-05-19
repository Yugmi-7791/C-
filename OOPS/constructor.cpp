/*
//Constructor
#include<iostream>
using namespace std;

class complex
{
	int a,b;
	public:
	complex();
	void print()
	{
		cout<<"numbers : "<<a<<" + "<<b<<"i"<<endl;
	}
};

complex::complex()
{
	a=10;
	b=20;
}	

int main()
{
	complex c;
	c.print();
	return 0;
} 

//Parameterized constructor:
#include<iostream>
using namespace std;

class complex
{
	int a,b;
	public:
	complex(int x,int y)
	{
		a=x;
		b=y;
	}
		
	void print()
	{
		cout<<"numbers : "<<a<<" + "<<b<<"i"<<endl;
	}
};	

int main()
{
	complex c1(2,5);
	complex c2(4,6);
	
	c1.print();
	c2.print();
	return 0;
} 

//Constructor overloading
#include<iostream>
using namespace std;

class complex
{
	int a,b;
	public:
	complex(int x,int y)
	{
		a=x;
		b=y;
	}
	complex(int x)
	{
		a=x;
		b=0;
	}
	complex()
	{
		a=0;
		b=0;
	}
	void print()
	{
		cout<<"numbers : "<<a<<" + "<<b<<"i"<<endl;
	}
};	

int main()
{
	complex c1(2,5);
	complex c2(4);
	complex c3;
	c1.print();
	c2.print();
	c3.print();
	return 0;
} */

//Giving dafault arguments
#include<iostream>
using namespace std;

class complex
{
	int a,b,c;
	public:
	complex(int x,int z,int y=9)//**Place the default argument to variable at lastposition
	{
		a=x;
		b=y;
		c=z;
	}
	
	
	void print()
	{
		cout<<"Numbers to be printed are : "<<a<<" and "<<b<< " and "<<c<<endl;
	}
};	

int main()
{
	complex c1(2,5);
	complex c2(3,4);
	c1.print();
	c2.print();
	return 0;
} 




