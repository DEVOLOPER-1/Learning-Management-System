#include "List.h"

//PROTECTED BEHAVIOURS:
void List::setCurrentDate()
{
	time_t t = time(0);                  // get current time
	tm* CurrentTimePtr = localtime(&t);
	CurrentDay   = CurrentTimePtr->tm_mday;
	CurrentMonth = (CurrentTimePtr->tm_mon + 1);
	CurrentYear  = (CurrentTimePtr->tm_year + 1900);
}

void List::splitDueDate()
{
    int CharIndex = 0;                    //an Iterator that will have the index of each Characher in the original string (DueDate string)
    vector<string> DueDateComponentsVctr; // A vector that stores the due date components resulted from spliting
    string TempString;                    // A temporary string used to split the string

    while (DueDate[CharIndex] != '\0') {
        if (DueDate[CharIndex] != '/') {
            TempString += DueDate[CharIndex];
        }
        else {
            DueDateComponentsVctr.push_back(TempString);
            TempString.clear();
        }
        CharIndex++;
    }
    // Adding the last date component stored in the string
    DueDateComponentsVctr.push_back(TempString);
    TempString.clear();

    DueDay   = stoi(DueDateComponentsVctr.at(0));
    DueMonth = stoi(DueDateComponentsVctr.at(1));
    DueYear  = stoi(DueDateComponentsVctr.at(2));

    DueDateComponentsVctr.clear();
}

bool List::isValidTime()
{
    if (CurrentYear < DueYear)
        return true;

    else if ( (CurrentYear = DueYear) && (CurrentMonth < DueMonth) )
        return true;

    else if ((CurrentMonth = DueMonth) && (CurrentDay <= DueDay))
        return true;

	return false;
}

void List::checkStatus()
{
    if (isDone)
           Status = "Done";

    else if (isValidTime)
           Status = "In progress";

    else { Status = "Missed"; }
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

