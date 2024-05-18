#include "Message.h"
#include <iostream>
using namespace std;

Message::Message(string Massage_Author, string content) : Massage_Author(Massage_Author), content(content), date(new Date()) {}

void Message::setContent(string content)
{
	this->content = content;
}

string Message::getContent()
{
	return content;
}

string Message::getAuthor()
{
	return Massage_Author;
}

void Message::display()
{
	cout << Message::Massage_Author << " says: " << Message::content << endl;
}

Message::~Message()
{
	delete date;
}