#include<iostream>
using namespace std;

class Time
{
	int hour,min,sec;
	public:
		void setTime()
		{
			time_t now=time(0);
			tm* ab = localtime(&now);
			cout<<"Current time = "<<ab->tm_hour<<" : "<<ab->tm_min<<" : "<<ab->tm_sec<<endl;
			hour=ab->tm_hour;
			
			min=ab->tm_min;
			
			sec=ab->tm_sec;
			
		}
		Time getTime()
		{
			Time temp;
			cout<<"Hours = "<<hour<<endl;
			cout<<"Minutes = "<<min<<endl;
			cout<<"Seconds = "<<sec<<endl;
			return temp;
		}
		Time sleepTime(Time sleep,Time wakeup)
		{
			Time temp;
			temp.hour=wakeup.hour-sleep.hour;
			cout<<temp.hour<<endl;
			return temp;
		}
};
	

int main()
{
	Time t;
	t.setTime();
	t.getTime();
	t.sleepTime((3 : 0 : 0),(10 : 0 : 0));
	return 0;
}
