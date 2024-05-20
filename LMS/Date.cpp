#include "Date.h"
#include <ctime>

Date::Date() : CurrentTimePtr{ new tm() } { setCurrentDate(); }


void Date::setCurrentDate()
{
	time(&Current);
	localtime_s(CurrentTimePtr, &Current);
	CurrentDay = CurrentTimePtr->tm_mday;
	CurrentMonth = (CurrentTimePtr->tm_mon + 1);
	CurrentYear = (CurrentTimePtr->tm_year + 1900);
}

int Date::getDay() const { return CurrentDay; }

int Date::getMonth() const { return CurrentMonth; }

int Date::getYear() const { return CurrentYear; }

string Date::getDate() const
{
	string Date = to_string(CurrentDay) + "/" + to_string(CurrentMonth) + "/" + to_string(CurrentYear);
	return Date;
}

Date::~Date()
{
	delete CurrentTimePtr;
}