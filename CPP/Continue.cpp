//Continue statement.

#include<iostream>
using namespace std;

int main()
{
    int i=0;
    //...Continue statement...
    cout<<"Here continue statement is used at number 2"<<endl;
    for(i=0;i<10;i++)
    {
    	if(i==2)
    	{
    	    continue;
    	}
    	cout<<i<<endl;
    }
    return 0;
}
