#pragma once
#include <iostream>
#include "Instructor.h"
class Course
{
private:
	string Title; 
	vector<string> instructor; //setting courses codes wil be before setting course setting instructors as it will depend on the length of courses codes
	vector<string> Code;
	vector<string> Prerequisete;
	int CreditHours;
	vector<int> Section;
	vector <string> TimeSlot;
	string Day;
	vector<string> Place;
public:
	void setTitle(string);
	void setInstructor(string,vector<string> Code);
	void setCode(vector <string>);
    //void CreditHours(unsigned int CreditHours, vector<string> Code);
    void Course::setPrerequisete(vector<string>prerequisetes,vector<string> Code);
    void setCreditHours(unsigned int section,vector<string> Code);
	void setSection(vector <int> section,vector<string> Code);
	void setPlace(vector <string> Placevector,vector<string> Code);
	void setTime(vector<string> Timevector , vector <string> Code);
	void setDay(vector<string> Dayvector , vector<string> Code);
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
