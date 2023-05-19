#include<iostream>
using namespace std;

class animal
{
	public:
	void an()
	{
		cout<<"I am an animal"<<endl;
	}
};
class herbivores : public animal
{
	public:
	void herbi()
	{
		cout<<"I am a herbivores animal"<<endl;
	}
};

class carnivores : public animal
{
	public:
	void carni()
	{
		cout<<"I am carnivores animal"<<endl;
	}
};

class omnivores : public animal
{
	public:
	void omni()
	{
		cout<<"I am an omnivores animal"<<endl;
	}
};

int main()
{
	herbivores cow;
	cout<<"Herbivores class : Cow"<<endl;
	cow.an();
	cow.herbi();
	carnivores lion;
	cout<<"Carnivores class : Lion"<<endl;
	lion.an();
	lion.carni();
	omnivores dog;
	cout<<"omnivores class : Dog"<<endl;
	dog.an();
	dog.omni();
	return 0;
}
	
	
	
	
	
