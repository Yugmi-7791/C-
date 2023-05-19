#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string st;
	
	//To read from a file
	ifstream in("f1.txt");

	//it will print only one word, white space and newline are not included.
	in>>st;
	cout<<st;
	
	cout<<endl;
	
	//To print one line:
	cout<<"Using getline() to print a line:"<<endl;
	getline(in,st);
	cout<<st;
	cout<<endl;
    return 0;
}
    
