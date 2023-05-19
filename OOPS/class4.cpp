/*#include<iostream>
using namespace std;

class Student
{
	int id;
	int count=1;
	public:
	void setdata(void)
	{
		cout<<"Enter you id "<<endl;
		cin>>id;
		
	}
	void getdata(void)
	{
		cout<<"Student "<<count<<" Id is : "<<id<<endl;
	}
};
	
int main()
{

	Student shubham,mahesh;
	shubham.setdata();
	shubham.getdata();
	mahesh.setdata();
	mahesh.getdata();
	//The output here will not increase the count because there is more than 1 members.
	//to overcome this problem, we have to introduce static data member.
	return 0;
}

// Now count will also be incremented between two members.

#include<iostream>
using namespace std;

class Student
{
	int id;
	static int count;//.......**CHANGE**.......
	public:
	void setdata(void)
	{
		cout<<"Enter you id "<<endl;
		cin>>id;
		count++;//.......**CHANGE**.......
	}
	void getdata(void)
	{
		cout<<"Student "<<count<<" Id is : "<<id<<endl;
	}
};

//here we can assign a number from where we want to start counting.....	
int Student::count;//.......**CHANGE**.......
	
int main()
{

	Student shubham,mahesh;
	shubham.setdata();
	shubham.getdata();
	mahesh.setdata();
	mahesh.getdata();
	return 0;
}*/

#include<iostream>
using namespace std;

class Student
{
	int id;
	static int count;//.......**CHANGE**.......
	public:
	void setdata(void)
	{
		cout<<"Enter you id "<<endl;
		cin>>id;
		count++;//.......**CHANGE**.......
	}
	void getdata(void)
	{
		cout<<"Student "<<count<<" Id is : "<<id<<endl;
	}
};

//here we can assign a number from where we want to start counting.....	
int Student::count;//.......**CHANGE**.......
	
int main()
{
	//To enter and store data of more than 1 person through loops
	Student arr[5];
	for(int i=0;i<5;i++)
	{
		arr[i].setdata();
		arr[i].getdata();
	}
	return 0;
}
