#include "Comment.h"


// Constructors
Comment::Comment() : Comment("", "", false) {}

Comment::Comment(string content, string date, bool isPrivate) : content(content), date(date), replies(replies), isPrivate(isPrivate)
{
}

// Seters
void Comment::setContent(string)
{
}

// Geters
string Comment::getContent() const
{
}

string Comment::getDate() const
{
	return string();
}


// reply
void Comment::reply(Comment)
{
}

vector<Comment> Comment::getReplies()
{
	return vector<Comment>();
}

//others
void Comment::display(Student*, Instructor*, int, int) const
{
}

void Comment::CheckPrivate()
{
}