//Program to find out the entered number by user is even or odd.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Let's find out whether the number is Even or Odd"<<endl;
    cout<<"Enter any number : ";
    cin>>n;
    if(n%2==0)
    {
        cout<<"Number "<<n<<" is even."<<endl;
    }
    else
    {
    	cout<<"Number "<< n <<" is odd."<<endl;
    }
    return 0;
}


