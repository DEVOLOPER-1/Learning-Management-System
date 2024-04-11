#pragma once
#include <iostream>
#include <vector>
#include "Course.h"
using namespace std;

class Schedule
{
private:
	const string DayArr[7];
	vector <string> CourseName, Time, Place;

public:
	Schedule();
	Schedule(vector <Course>);
	void dispaly();
};

