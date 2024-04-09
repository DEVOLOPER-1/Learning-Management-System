#pragma once
#include <iostream>
#include <vector>
#include "Comment.h"
#include "Student.h"

class Comment
{
private:
	string comment;
	string Date;
	vector <Comment> Replies;
	bool isPrivate;
	void CheckPrivate();
public:
	void setContext(string);
	void reply(Comment);
	vector <Comment> getReplies();
	string getMessage();
	string getDate();
	void display(Student*, Instructor*, int, int);
};

