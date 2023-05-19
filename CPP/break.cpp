//Program to implement break statement.

#include<iostream>
using namespace std;

int main()
{
    int i=0;
    
    //...Break statement...
    cout<<"Here break statement is used at number 2"<<endl;
    for(i=0;i<10;i++)
    {
    	if(i==2)
    	{
    	    break;
    	}
    	cout<<i<<endl;
    }
    return 0;
}
