#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string st;
	//To write multiple line in a file:
    ofstream out("f1.txt");
    out<<"Hello my name is \n";
    out<<"Hello my name is \n";
    out<<"Hello my name is \n";
    out<<"Hello my name is \n";
    out.close();
    
    //To read all the data from the file.
    ifstream in("f1.txt");
	while(in.eof()==0)
	{
		getline(in,st);
		cout<<st<<endl;
	}
	in.close();
	return 0;
}
