#pragma once
#include <iostream>
#include <vector>
#include "Announcement.h"

class Assignment: public Announcement
{
private:
	string Title;
	string DueDate;
	bool isDone;
	float Grade;
	string Submission;
	string status;
	void getStatus();
	void checkStatus();
public:
	void setTitle(string);
	void setDueDate(string);
	void setGrade(float);
	void setSubmission(string);
	string getTitle();
	string getDueDate();
	float getGrade();
	void display();
};

