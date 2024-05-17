#include "Comment.h"


// Constructors
Comment::Comment() : Comment("", "", false) {}

Comment::Comment(string content, string date, bool isPrivate) : content(content), date(date), replies(replies), isPrivate(isPrivate)
{
}

// Seters
void Comment::setContent(string content) { this->content = content; }

// Geters
string Comment::getContent() const { return content; }

string Comment::getDate() const { return date; }


// reply
void Comment::reply(Comment r) { replies.push_back(r); }

vector<Comment> Comment::getReplies() { return replies; }

//others
void Comment::display(Student*, Instructor*, int, int) const
{
}

void Comment::CheckPrivate()
{

}