#include<iostream>
using namespace std;

template <typename T>
void swap(T *a, T *b)
{
	T *temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	int i = 10, j = 20;
	double d1 = 1.1, d2 = 2.2;
	string s1 = "abc", s2 = "xyz";
	cout << "Before swap: "<<i<<" "<<j <<endl;
	swap(i, j); 
	cout << "After swap: "<<i<<" "<<j <<endl;
	cout << "Before swap: "<<d1<<" "<<d2 <<endl;
	swap(d1, d2); 
	cout << "After swap: "<<d1<<" "<<d2 <<endl;
	cout << "Before swap: "<<s1<<" "<<s2 <<endl;
	swap(s1, s2); 
	cout << "After swap: "<<s1<<" "<<s2 <<endl;
	return 0;
}

/*#include<iostream>
using namespace std;

template <class t>
t num1(t n1)
{
	cout<<"You entered : "<<n1<<endl;
	return n1;
}

int main()
{
	num1(2);
	num1(1.2);
	num1("A");
	num1("Hello");
	return 0;
}*/




