#include<iostream>
using namespace std;

class employee
{
	int id;
	char name;
	static int count;
	private:
		void getinfo()
		{
		
			cout<<"Enter your name "<<endl;
			cin>>name;
			cout<<"Enter your id "<<endl;
			cin>>id;
			count++;
		}
	public:
		void displayinfo()
		{
			cout<<"Employee "<<count<<" name : " <<name<<endl<<"Employee "<<count<<" id : "<<id<<endl;
		}
		employee()
		{
			getinfo();
		}
};
			
int employee::count;
			
int main()
{
	employee e1=employee();
	e1.displayinfo();
	

	return 0;
}
