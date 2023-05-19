//CPP basic syntax, Input and output methods:

#include<iostream>
using namespace std;
//or we can use "std::cout<<" on behalf of "using namespace std;"
int main()
{
int n1,n2;
cout<<"Printing Hello world\n";  //Here in the place of \n we can also use endl;
cout<<"\nEnter first number : ";
cin>>n1;
cout<<"First number : "<<n1;
cout<<"\n";
cout<<"\nEnter second number : ";
cin>>n2;
cout<<"Second number : "<<n2;
cout<<"\n\nSum of numbers is : "<< n1+n2;
cout<<"\n";
return 0;
}
