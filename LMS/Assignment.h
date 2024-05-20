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
	float maxGrade;
	string Submission;
	string Status;
	void checkStatus();
public:
	Assignment();
	Assignment(string, string, string, float);
	~Assignment();

	void setTitle(string);
	void setDueDate(string);
	void setGrade(float);
	void setMaxGrade(float);
	void setSubmission(string);
	string getTitle();
	struct tm getDueDate();
	float getGrade();
	float getMaxGrade();
	string getStatus();
	string getSubmission();
	void display();
};

