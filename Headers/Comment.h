#pragma once
#include <iostream>
#include <vector>
#include "Comment.h"
#include "Student.h"

class Comment
{
private:
	string content;
	string date;
	vector <Comment> replies;
	bool isPrivate;
	void CheckPrivate();
public:
	Comment();
	Comment(string, string, bool);
	void setContent(string);
	void reply(Comment);
	vector <Comment> getReplies();
	string getContent() const;
	string getDate() const;
	void display(Student*, Instructor*, int, int) const;
};

