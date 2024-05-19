#pragma once
#include <iostream>
#include <vector>
#include "Course.h"
using namespace std;

class Schedule
{
private:
	string DayArr[6];
	vector<Course*> Courses;
public:
	Schedule(vector <Course*>);
	void dispaly();
};

