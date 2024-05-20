#pragma once
#include <string>
#include "Date.h"
using namespace std;

class Task
{
protected:
	string Content, DueDate, Status;
	Date date;
	int DueDay, DueMonth, DueYear;
	bool isDone, isDeleted;
	void splitDueDate();
	bool isValidTime();
	void checkStatus();

public:
	Task();
	Task(string, string);
	void setContent(string);
	void setDueDate(string);
	void complete();
	void display();
	void Delete();
	string getContent() const;
	string getDueDate() const;
	string getStatus();
};

