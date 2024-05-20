#pragma once
#include <string>
#include "Date.h"
using namespace std;
class Message
{
private:
	string Massage_Author, content;

protected:
	Date* date;

public:
	Message(string Massage_Author, string content);
	void setContent(string content);
	string getContent();
	string getAuthor();
	virtual void display();
	~Message();
};

