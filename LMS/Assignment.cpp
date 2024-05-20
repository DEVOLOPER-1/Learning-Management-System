#include "Assignment.h"

// Constructors & Destructor
Assignment::Assignment() : Title(""), isDone(0), Grade(0), maxGrade(0), Submission(""), Status("assigned"){}

Assignment::Assignment(string t, string due, string desc, float maxi) : Assignment()
{
    setTitle(t);
    setDueDate(due);
    setContent(desc);
    setMaxGrade(maxi);
}

Assignment::~Assignment () {checkStatus();}
// Seters 
void Assignment::setTitle(string t)
{
    Title = t;
}

#include <cstdlib>
#include <ctime>
void Assignment::setDueDate(string due)
{
    // the string entered here should be dd / mm , {hours}:{mins}
    int j = due.find(',');
    string date = due.substr(0, j);
    string time = due.substr(j+2, size(due)-j-1);

    int i = date.find('/');
    string sub1 = date.substr(0, i);
    int d = atoi(&sub1[0]);
    string sub2 = date.substr(i+1, size(date)-i-1);
    int mnth = atoi(&sub2[0]);
    
    i = time.find(':');

    sub1 = time.substr(0, i);
    int h = atoi(&sub1[0]);
    sub2 = time.substr(i+1, size(time)-i-1);
    int m = atoi(&sub2[0]);
// intializing the struct of the object
    DueDate.tm_year = 2024-1900;
    DueDate.tm_mon = mnth;
    DueDate.tm_hour = h;
    DueDate.tm_min = m;
    DueDate.tm_sec = 0;
}

void Assignment::setGrade(float grade)
{
    if(grade <= maxGrade) {Grade = grade;}
    else {cout << "Error! the grade must be less than or equal the max grade." <<endl;}
}

void Assignment::setMaxGrade(float maxi) {maxGrade = maxi;}

void Assignment::setSubmission(string link) // the submission of student
{
    if(link.starts_with("https://")) {
        Submission = link;
        isDone = true;
        Status = "completed";
    }
    else {cout << "Error! please enter a working URL." <<endl;}
}

// Geters
string Assignment::getTitle(){return Title;}
struct tm Assignment::getDueDate(){return DueDate;}
float Assignment::getGrade(){return Grade;}
float Assignment::getMaxGrade() {return maxGrade;}
string Assignment::getStatus() {return Status;}
string Assignment::getSubmission() {return Submission;}

// Other
void Assignment::checkStatus()
{
    time_t now;
    time(&now);
    struct tm* curr = localtime(&now);

    if (curr->tm_mday >= DueDate.tm_mday && curr->tm_mon >= DueDate.tm_mon && curr->tm_hour>DueDate.tm_hour)
    {
        if (isDone)
            Status = "done late";
        else   
            Status = "missing";
    }

    //hendeling the case of 11:59
    else if (curr->tm_mday > DueDate.tm_mday && curr->tm_mon >= DueDate.tm_mon) 
    {
        if (isDone)
            Status = "done late";
        else   
            Status = "missing";
    }
    
    else if (isDone){Status = "done early";}
    else if (!isDone) {Status = "assigned";}
}