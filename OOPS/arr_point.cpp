//Printing id and price entered by user using array pointer.

#include<iostream>
using namespace std;

class items
{
	int id;
	float price;
	public:
	void setdata(int a,float b)
	{
		id=a;
		price=b;
	}
	void getdata()
	{
		cout<<"Id of item is : "<<id<<endl;
		cout<<"Price of item is : "<<price<<endl;
	}
	
};

int main()
{
	int p,i;
	float q;
	items *ptr=new items [4];
	items *ptr_temp=ptr;
	for (i=0;i<4;i++)
	{
		cout<<"Enter Id(int) and Price(float) of item "<<i+1<<endl;
		cin>>p>>q;
		ptr->setdata(p,q);
		ptr++;
	}
	for(i=0;i<4;i++)
	{
		cout<<"Item number: "<<i+1<<endl;
		ptr_temp->getdata();
		ptr_temp++;
	}
	return 0;
}
