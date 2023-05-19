//Code to implement if=else ladder.
//Program to show which grade you got depending on your entered marks.
#include<iostream>
using namespace std;
int main()
{
    int i,n,marks;
    
    //else if ladder
    cout<<"Enter marks you got from 100 : "<<endl;
    cin>>marks;     
    if(marks>=75)
    {
        cout<<"Congratulations.!! You got A-grade"<<endl;
    }
    else if(marks<75 && marks>=60)
    {
        cout<<"Very good.!! You got B-grade"<<endl;
    }
    else if(marks<60 && marks>=35)
    {
        cout<<"Good, Practice more.!! You got C-grade"<<endl;
    }
    else
    {
    	cout<<"Poor, need improvement... You got D-grade... You are fail"<<endl;
    }
    return 0;
}
