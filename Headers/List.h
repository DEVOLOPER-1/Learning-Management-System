#pragma once
#include <iostream>
using namespace std;

class List
{
protected:
	string Content, DueDate, Status;
	bool isDone;
	void changeStatus();

public:
	void setContent(string);
	void setDueDate(string);
	void complete();
	void display();
	void Delete();
	string getContent() const;
	string getDueDate() const;
	string getStatus() const;
};

