#include<iostream>
using namespace std;


class base
{
	int d1;
	public:
	int d2;
	void setdata();
	int getd1();
	int getd2();
};

void base::setdata()
{
	d1=10;
	d2=20;
}

int base::getd1()
{
	return d1;
}
 
int base::getd2()
{
	return d2;
}


class derived : public base
{
	int d3;
	public:
	void process();
	void display();
	
};

void derived::process()
{
	d3=d2*getd1();
}

void derived::display()
{
	cout<<"Value of data 1 is "<<getd1()<<endl;
	cout<<"Value of data 2 is "<<d2<<endl;
	cout<<"Value of data 3 is "<<d3<<endl;
}

int main()
{
	derived d;
	d.setdata();
	d.process();
	d.display();
	return 0;
}

/*
1. if we make derived class as private then we can't call the member function of base class directly in the int main(){...}.
2. we can run bas class's member function in the derived class's member function.
3. Changes will be as shown below:
void derived::process()
{
	setdata();
	d3=d2*getd1();
}

and....
int main()
{
	derived d;
	d.process();
	d.display();
	return 0;
}*/

