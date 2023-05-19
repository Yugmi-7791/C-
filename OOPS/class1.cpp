#include<iostream>
using namespace std;

class fruits
{
	private:
	int a,b;
	public:
	int c,d;
	void setdata(int a1,int b1);
	void getdata()
	{
		cout<<"The value at a is : "<<a<<endl;
		cout<<"The value at b is : "<<b<<endl;
		cout<<"The value at c is : "<<c<<endl;
		cout<<"The value at d is : "<<d<<endl;
	}
};

void fruits::setdata(int a1,int b1)
{
	a=a1;
	b=b1;
}

int main()
{
	fruits mango;
	mango.c=33;
	mango.d=44;
	mango.setdata(11,22);
	mango.getdata();
	return 0;
}
