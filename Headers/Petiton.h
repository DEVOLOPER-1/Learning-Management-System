#pragma once
#include <iostream>
#include "Student.h"
#include "Dean.h"
using namespace std;

/*
- Title: string
- Content: string
- isApproved: string
- Status: string
+ setTitle(petition_title: string)
+ setContent(petition_content: string)
- setStatus()
+ request()
+ getTitle(): string
+ getContent: string
- checkStatus()
+ display(dean: Dean, student: Student)
+ decide()
*/

class Petiton
{
private:
	string Title, Content, isApproved, status;
	void setStatus();
	void checkSatus();

public:
	void setTitle(string);
	void setContent(string);
	void request();
	string getTitle();
	string getContent();
	void display(Dean, Student);
	void decide
};

