#pragma once
#include <iostream>

#include "Instructor.h"
class Course
{
private:
	string Title;
	string instructor; // setting courses codes wil be before setting course
					   // setting instructors as it will depend on the length of
					   // courses codes
	string Code;
	string Prerequisete;
	vector <string> CreditHours;
	vector <string> Section;
	string TimeSlot;
	string Day;
	string Place;

public:
	// Constructors________________________________________________________________
	Course();
	Course(string Title, string instructor,
	 string Code, string Prerequisete,
	 vector <string> CreditHours , 
	  vector<string> Section, string TimeSlot ,
	 string Day , string Place ) ;

	// Setters________________________________________________________________
	void setTitle(string title);
	void setInstructor(string Instructor_name);
	void setCode(string course_code);
	// void CreditHours(unsigned int CreditHours, vector<string> Code);
	void setPrerequisete(string prerequisetes);
	void setCreditHoursandsection(vector<string> section, vector<string> hours);
	void setPlace(string Placevector);
	void setTime(string time);
	void setDay(string temp_day);
	void display();
	void Delete();

	// Getters__________________________________________________________________
	string getTitle();
	string getInstructor();
	string getCode();
	string getPrerequisete();
	string getPlace();
	vector <string> getCreditHoursandsection();
	unsigned int getSection();
	string getTime();
	string getDay();
};
