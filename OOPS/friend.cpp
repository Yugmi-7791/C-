#include<iostream>
using namespace std;

//making individual function as friends
class complex
{
	int a;
	int b;
	public:
		void setdata(int x,int y)
		{
			a=x;
			b=y;
		}
		
		friend complex sum(complex o1,complex o2);
		void print()
		{
			cout<<"Complex number is : "<<a<<" + "<<b<<"i"<<endl;
		}
};

complex sum(complex o1,complex o2)
{
	complex o3;
	o3.setdata((o1.a+o2.a),(o1.b+o2.b));
	return o3;
}
	
int main()
{
	complex c1,c2,c3;
	c1.setdata(1,4);
	c1.print();
	c2.setdata(6,9);
	c2.print();
	c3=sum(c1,c2);
	c3.print();
	//c1.sum()==invalid
	//friend can be declared inside public or private object
	//Friend can not access members of the class directly by their name, they need obj_name.mem_name 
	return 0;
}
