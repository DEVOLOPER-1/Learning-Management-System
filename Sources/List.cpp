#include "List.h"

/*
	string Content, DueDate, Status;
	bool isDone;
	void changeStatus();
*/

//PROTECTED BEHAVIOURS:
void List::changeStatus()
{
	if (isDone)
		Status = "Done";
	else {

	}
}

//PUBLIC BEHAVIOURS:
//Setters
void List::setContent(string Content) { this->Content = Content; }

void List::setDueDate(string DueDate) { this->DueDate = DueDate; }

//Getters
string List::getContent() const { return Content; }

string List::getDueDate() const { return DueDate; }

string List::getStatus() const { return Status; }

//Other public behaviours
void List::complete() { isDone = true; }

void List::display()
{
}

void List::Delete()
{
}

