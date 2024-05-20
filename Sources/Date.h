#pragma once
#include <string>
#include <ctime>
using namespace std;
class Date
{
private:
	int CurrentDay, CurrentMonth, CurrentYear;
	time_t Current;
	tm* CurrentTimePtr;
	void setCurrentDate();
public:
	Date();
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	string getDate() const;
	~Date();

};

