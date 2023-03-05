#include <iostream>
using namespace std;

class duration
{
	public:
		int days;
		int hours;
		int minutes;
		int seconds;
	duration ()
	{
		days=0;
		hours=0;
		minutes=0;
		seconds=0;
	}
	duration (int days, int hours, int minutes, int seconds)
	{
		this -> days = days;
		this -> hours = hours;
		this -> minutes = minutes;
		this -> seconds = seconds;
	}
	duration (int sec)
	{
		days = sec / 86400;
		sec -= days * 86400;
		hours = sec / 3600;
		sec -= hours * 3600;
		minutes = sec / 60;
		sec -= minutes * 60;
		seconds = sec;
	}
	void showfn () {
		cout << "Total Time Duration is: " << days << " days or "  << hours << " hours or " << minutes << " minutes & " << seconds << " seconds" << endl;
	}
};

int main ()
{
	int sec;
	cout<<"Enter the value in seconds : ";
	cin>>sec;
	
	duration dr(sec);
	dr.showfn();
	
	return 0;
}