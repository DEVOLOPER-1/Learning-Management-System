#pragma once
#include <iostream>
#include "Instructor.h"

class Course
{
private:
	string Title;
	string instructor;
	string Code;
	string Prerequisete;
	int CreditHours;
	int Section;
	string TimeSlot;
	string Day;
	string Place;
public:
	void setTitle(string);
	void setInstructor(string);
	void setCode(string);
	void setPrerequisete(string);
	void setCreditHours(int);
	void setSection(int);
	void setPlace(string);
	void setTime(string);
	void setDay(string);
	string getTitle();
	Instructor getInstructor();
	string getCode();
	string getPrerequisete();
	int getCreditHours();
	int getSection();
	string getTime();
	string getDay();
	void display();
	void Delete();
};
