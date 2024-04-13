#pragma once
#include <iostream>
#include "Instructor.h"
class Course
{
private:
	string Title; 
	string instructor; //setting courses codes wil be before setting course setting instructors as it will depend on the length of courses codes
	string Code;
	string Prerequisete;
	unsigned int CreditHours;
	unsigned int Section;
	string TimeSlot;
	string Day;
	string Place;
public:
	void setTitle(string title);
	void setInstructor(string Instructor_name);
	void setCode(string course_code);
    //void CreditHours(unsigned int CreditHours, vector<string> Code);
    void Course::setPrerequisete(string prerequisetes);
    void setCreditHours(unsigned int section,vector<string> Code);
	void setSection(unsigned int sectionvector);
	void setPlace(string Placevector);
	void setTime(string time);
	void setDay(string temp_day);
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
