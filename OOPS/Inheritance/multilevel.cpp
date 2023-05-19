#include<iostream>
using namespace std;

class students
{
	protected:
	int roll_num;
	public:
	void setno(int a);
	void getno();
	
};

void students::setno(int a)
{
	roll_num=a;
}

void students::getno()
{
	cout<<"Roll_no of student is "<<roll_num<<endl;
}

class exam : public students
{
	protected:
		float maths;
		float physics;
	public:
		
		void set_marks(float m1,float m2);
		void get_marks(void);
};

void exam::set_marks(float m1,float m2)
{
	maths=m1;
	physics=m2;
}

void exam::get_marks()
{

	cout<<"Student got "<<maths<<" marks in maths."<<endl;
	cout<<"Student got "<<physics<<" marks in physics."<<endl;
}

class result : public exam
{
	float percentage;
	public:
		void display()
		{
			getno();
			get_marks();
			cout<<"Student got "<<(maths+physics)/2<<" percentage."<<endl;
		}
};


int main()
{
	result s;
	s.setno(12);
	s.set_marks(76.0,89.7);
	s.display();
	return 0;
}
