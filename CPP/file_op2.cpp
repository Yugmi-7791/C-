#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string st,st1;
	//......using open to open a file.......

	//To write data to a file:
	ofstream out;
	out.open("f1.txt");
	out<<"HI this is me\n";
	out<<"Guess my name...\n";
	out.close();
	
	//To read content of a file:
	ifstream in;
	in.open("f1.txt");
	in>>st;
	cout<<st;
	
	//printing lines:
	getline(in,st);
	getline(in,st1);
	cout<<st<<endl;
	cout<<st1<<endl;
	
	/*//We can use loop to print all the data of a file.
	//printing all the data using loop.
	//This code will give same output as above.

	while(in.eof()==0)
	{
		getline(in,st);
		cout<<st<<endl;
	}*/
	return 0;
}
	
