#include<iostream>
using namespace std;

class employee_id
{
	protected:
	int id;
	public:
	void set_id(int a);
	void get_id();
};

void employee_id::set_id(int a)
{
	id=a;
}

void employee_id::get_id()
{
	cout<<"Employee id : "<<id<<endl;
}

class employee_salary
{
	protected:
	int salary;
	public: 
	void set_salary(int a);
	void get_salary();
};

void employee_salary::set_salary(int a)
{
	salary=a;
}

void employee_salary::get_salary()
{
	cout<<"Basic salary of employees is : "<<salary<<endl;
}

class employee : public employee_id,public employee_salary
{
	
	public:
	
	void display()
	{
		get_id();
		get_salary();
		cout<<"Final inhand salary of employee - "<<id<<" is : "<<(salary)+5000<<endl;
	}
};

int main()
{
	employee e1;
	e1.set_id(1234);
	e1.set_salary(12000);	
	e1.display();
	return 0;
}
	
