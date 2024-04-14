#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include <vector>
using namespace std;

class List
{
protected:
	string Content, DueDate, Status;
	int CurrentDay, CurrentMonth, CurrentYear;
	int DueDay, DueMonth, DueYear;
	bool isDone;
	void setCurrentDate();
	void splitDueDate();
	bool isValidTime();
	void checkStatus();

public:
	List();
	List(string, string);
	void setContent(string);
	void setDueDate(string);
	void complete();
	void display();
	void Delete();
	string getContent() const;
	string getDueDate() const;
	string getStatus();
	int getDueDay();
};

