#include "Comment.h"
#include <ctime>
#include <string>
// Constructors


// Seters


void Comment::setDate()
{
    string CurrentDay, CurrentMonth, CurrentYear, CurrentDate;
    time_t t = time(0);                 // get current time
    tm* CurrentTimePtr = localtime(&t);
    CurrentDay = CurrentTimePtr->tm_mday;
    CurrentMonth = (CurrentTimePtr->tm_mon + 1) + "/";
    CurrentYear = (CurrentTimePtr->tm_year + 1900) + "/";
    CurrentDate = CurrentDay + CurrentMonth + CurrentYear;
}

void Comment::CheckPrivate()
{
}

void Comment::setContent(string Content)
{
	this->Content = Content;
}

void Comment::reply(Comment)
{
}

vector<Comment> Comment::getReplies()
{
	return vector<Comment>();
}

// Geters
string Comment::getContent() const {return Content;}
string Comment::getDate() const{return Date;}
void Comment::display(Student*, Instructor*, int, int) const
{
}
vector<Comment> Comment::getReplies() const {return Replies;}
// Other

