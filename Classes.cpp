#include <iostream>
using namespace std;

class ClockType
{
	private:
		int hr;
		int min;
		int sec;
	public:
		void setTime(int, int, int);
		void getTime(int&, int&, int&) const;
		void printTime() const;
		void incrementHours();
		void incrementMinutes();
		void incrementSeconds();
		bool equalTime(const ClockType&) const;
};

void ClockType::setTime(int hours, int minutes, int seconds) //mutator function
{
	if (0 <= hours && hours < 24)
		hr = hours;
	else
		hr = 0;
		
	if (0 <= minutes && minutes < 60)
		min = minutes;
	else
		min = 0;
		
	if (0 <= seconds && minutes < 60)
		sec = seconds;
	else 
		sec = 0;
}

void ClockType::getTime(int& hours, int& minutes, int& seconds) const //accessor function
{
	hours = hr;
	minutes = min;
	seconds = sec;
}

void ClockType::printTime() const //accessor function
{
	if (hr < 10)
		cout << "0";
	cout << hr << ": ";	
	
	if (min < 10)
		cout << "0";
	cout << min << ": ";
	
	if (sec < 10)
		cout << "0";
	cout << sec;
}

void ClockType::incrementHours()//mutator function
{
	hr++;
	if (hr > 23)
		hr = 0;
}

void ClockType::incrementMinutes() //mutator function
{
	min++;
	if (min > 59)
	{
		min = 0;
		incrementHours();
	}
}

void ClockType::incrementSeconds() //mututor function
{
	sec++;
	if (sec > 59)
	{
		sec = 0;
		incrementMinutes();
	}		
}

bool ClockType::equalTime(const ClockType& otherClock) const //accessor function
{
	return (hr == otherClock.hr 
			&& min == otherClock.min
			&& sec == otherClock.sec);
}

int main()
{
	//creating objects of ClockType
	ClockType myClock;
	ClockType yourClock;
	
	int hours, minutes, seconds;
	
	//set the time for myClock
	
	cout << "Line 9: myClock: ";
	myClock.printTime(); //print the time of myClock
	cout << endl;
	
	cout << "Line 12: yourClock: ";
	yourClock.printTime(); //print the time of yourClock
	cout << endl;
	
	//Set the time of yourClock
	yourClock.setTime(5, 45, 16);
	
	cout << "Line 16: After setting yourClock: ";
	yourClock.printTime();
	cout << endl;
	
	//Compare myClock and yourClock
	if (myClock.equalTime(yourClock))
	{
		cout << "Line 20: Both times are equal.";
		cout << endl;
	} else
		cout << "Line 22: Both times are not equal." << endl;
		
	cout << "Line 23: Enter the hours, minutes and seconds: ";
	cin  >> hours >> minutes >> seconds;
	cout << endl;
	
	//Set the time of myClock using the value of the variables hours, minutes, and seconds
	myClock.setTime(hours, minutes, seconds);
	
	cout << "Line 27: New myClock: ";
	myClock.printTime(); //print the time of myClock
	cout << endl;
	
	//Increment the time of myClock by one second
	myClock.incrementSeconds();
	
	cout << "Line 31: After incrementing myClock by one second, myClock: ";
	myClock.printTime(); //print the time of myClock
	cout << endl;
	
	//Retrieve the hours, minutes, and seconds of the object myClock
	myClock.getTime(hours, minutes, seconds);
	
	//Output the value of hours, minutes, and seconds
	cout << "Line 35: hours = " << hours
		 << ", minutes = " << minutes
		 << ", seconds = " << seconds << endl;
	return 0;
} //end of main 

**OUPUT OF THE PROGRAM**
Line 9: myClock: 00: 00: 386310432
Line 12: yourClock: 22068: 1578611248: 32766
Line 16: After setting yourClock: 05: 45: 16
Line 22: Both times are not equal.
Line 23: Enter the hours, minutes and seconds: 12:20:16
Line 27: New myClock: 12: 00: 22068
Line 31: After incrementing myClock by one second, myClock: 12: 01: 00
Line 35: hours = 12, minutes = 1, seconds = 0



