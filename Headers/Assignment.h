#pragma once
#include <iostream>
#include <vector>
#include "Announcement.h"
#include <ctime>

class Assignment: public Announcement
{
private:
	string Title;
	struct tm DueDate;
	bool isDone;
	float Grade;
	string Submission;
	string Status;
	void checkStatus();
public:
	void setTitle(string);
	void setDueDate(string);
	void setGrade(float, float);
	void setSubmission(string);
	string getTitle();
	struct tm getDueDate();
	float getGrade();
	string getStatus();
	string getSubmission();
	void display();
};

