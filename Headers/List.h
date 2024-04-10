#pragma once
#include <iostream>
using namespace std;

class List
{
private:
	string Content, DueDate, Status;
	bool isDone;

protected:
	void changeStatus();

public:
	void setContent(string);
	void setDueDate(string);
	void complete();
	void display();
	void Delete();
	string getContent();
	string getStatus();
};

