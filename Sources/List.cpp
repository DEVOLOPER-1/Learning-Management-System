#pragma warning(disable : 4996)
#include "List.h"

//Constructors
List::List() : List("\0", "0/0/0") {} // Delegating constructor

List::List(string Content, string DueDate) : isDone{ false }, isDeleted{ false }, Content{ Content }, DueDate{ Content }
{
    CurrentDay = 0; CurrentMonth = 0; CurrentYear = 0;
    DueDay = 0; DueMonth = 0; DueYear = 0;
}

//PROTECTED BEHAVIOURS:
void List::setCurrentDate()
{
    time_t t = time(0);                  // get current time
    tm* CurrentTimePtr = localtime(&t);
    CurrentDay = CurrentTimePtr->tm_mday;
    CurrentMonth = (CurrentTimePtr->tm_mon + 1);
    CurrentYear = (CurrentTimePtr->tm_year + 1900);
}

void List::splitDueDate()
{
    int CharIndex = 0;                    // An Iterator that will have the index of each Characher in the original string (DueDate string)
    vector<string> DueDateComponentsVctr; // A vector that stores the due date components resulted from spliting
    string TempString;                    // A temporary string used to split the string

    while  (DueDate[CharIndex] != '\0') {
        if (DueDate[CharIndex] != '/')  {
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
    DueDay   = stoi(DueDateComponentsVctr.at(0));
    DueMonth = stoi(DueDateComponentsVctr.at(1));
    DueYear = stoi(DueDateComponentsVctr.at(2));

    // Clearig due date components vector
    DueDateComponentsVctr.clear();
}

bool List::isValidTime()
{
    setCurrentDate();

    if (CurrentYear < DueYear)
        return true;

    else if ((CurrentYear = DueYear) && (CurrentMonth < DueMonth))
        return true;

    else if ((CurrentMonth = DueMonth) && (CurrentDay <= DueDay))
        return true;

    return false;
}

void List::checkStatus()
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
void List::setContent(string Content) { this->Content = Content; }

void List::setDueDate(string DueDate) { this->DueDate = DueDate; splitDueDate(); }

//Getters
string List::getContent() const { return Content; }

string List::getDueDate() const { return DueDate; }

string List::getStatus() { checkStatus(); return Status; }

//Other public behaviours
void List::complete() { isDone = true; }

void List::display()
{
    if (isDeleted)
        return;

    checkStatus();

    cout << "Todo: " << getContent() << "\n"
         << "Status: " << getDueDate() << "\n";

    if (!isDone)
        cout << "Due date: " << getDueDate << "\n";
}

void List::Delete()
{
    isDeleted = true;
    cout << "task deleted succesfully\n";
}

