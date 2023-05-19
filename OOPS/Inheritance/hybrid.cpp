#include<iostream>
using namespace std;

class animal
{
	public:
	animal()
	{
		cout<<"I am an animal"<<endl;
	}
};

class herbi : public animal
{
	public:
	herbi()
	{
		cout<<"I am a herbivores animal"<<endl;
	}
};

class carni
{
	public:
	carni()
	{
		cout<<"I am carnivores animal"<<endl;
	}
};

class omni : public herbi, public carni
{
	public:
	omni()
	{
		cout<<"I am a combination of herbivores and carnivores animal"<<endl;
		cout<<"I am an omnivores animal"<<endl;
	}
};

int main()
{
	omni o;
	return 0;
}


