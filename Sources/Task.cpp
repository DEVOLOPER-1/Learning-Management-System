#include "Task.h"
#include <iostream>
#include <ctime>
#include <string>
#include <vector>


//Constructors
Task::Task() : Task("\0", "0/0/0") {} // Delegating constructor

Task::Task(string Content, string DueDate) : isDone{ false }, isDeleted{ false }, Content{ Content }, DueDate{ DueDate }, date{ Date() }
{
    splitDueDate();
}

//PROTECTED BEHAVIOURS:
void Task::splitDueDate()
{
    int CharIndex = 0;                    // An Iterator that will have the index of each Characher in the original string (DueDate string)
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

    // Converting due date components to integer and assign them to the equivelent attributes
    DueDay = stoi(DueDateComponentsVctr.at(0));
    DueMonth = stoi(DueDateComponentsVctr.at(1));
    DueYear = stoi(DueDateComponentsVctr.at(2));

    // Clearig due date components vector
    DueDateComponentsVctr.clear();
}

bool Task::isValidTime()
{
    if (date.getYear() < DueYear)
        return true;

    else if ((date.getYear() == DueYear) && (date.getMonth() < DueMonth))
        return true;

    else if ((date.getMonth() == DueMonth) && (date.getDay() <= DueDay))
        return true;

    return false;
}

void Task::checkStatus()
{
    //bool isValidTimeReturnContainer = isValidTime();
    if (isDone)
        Status = "Done";

    else if (isValidTime())
        Status = "In progress";

    else { Status = "Missed"; }
}


//PUBLIC BEHAVIOURS:
//Setters
void Task::setContent(string Content) { this->Content = Content; }

void Task::setDueDate(string DueDate) { this->DueDate = DueDate; splitDueDate(); }

//Getters
string Task::getContent() const { return Content; }

string Task::getDueDate() const { return DueDate; }

string Task::getStatus() { checkStatus(); return Status; }

//Other public behaviours
void Task::complete() { isDone = true; }

void Task::display()
{
    if (isDeleted)
        return;

    checkStatus();

    cout << "Todo: " << getContent() << "\n"
        << "Status: " << getStatus() << "\n";

    if (!isDone)
        cout << "Due date: " << getDueDate() << "\n";
}

void Task::Delete()
{
    isDeleted = true;
    cout << "task deleted succesfully\n";
}

