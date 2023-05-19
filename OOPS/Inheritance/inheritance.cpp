#include<iostream>
using namespace std;

class employee
{
	public:
	int id;
	float salary;
	employee(int inid)
	{
		id=inid;
		salary=12.9;
	}
	employee()
	{}
};

class programmer : employee
{
	public:
	programmer(int inid)
	{
		id=inid;
	}
	int langcode=9;
	void getdata()
	{
		cout<<id<<endl;
	}
};

int main()
{
	employee a(1),b(2);
	cout<<a.salary<<endl;
	cout<<b.salary<<endl;
	programmer p(1);
	cout<<p.langcode<<endl;	//cout<<p.id<<endl;  ...We have 			inherited programmer class privately from base class 		so we can't print it like this...it will throw an 			error.... 
	
	//if we give visibility mode of class programmer as public 		then, we can print the id directly as above...
	//syntax: class programmer : public employee
	//{.....}
	
	p.getdata();	// this is how we can print the id by calling a 			function.
	
	return 0;
}

