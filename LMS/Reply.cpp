#include "Reply.h"
#include <iostream>

Reply::Reply(string Reply_Author, string content) : Message(Reply_Author, content) {}

void Reply::display()
{
	cout << "|\n|\n" << "+->";
	cout << getAuthor() << " replied: " << getContent() << endl;
	cout << "| Date: " << date->getDate() << endl;
}