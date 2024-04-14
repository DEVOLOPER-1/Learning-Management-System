#pragma once
#include <iostream>
#include <vector>
#include "Student.h"

class Comment
{
private:
	string Content;
	string Date;
	vector <Comment> Replies;
	bool isPrivate;
	void setDate();
	void CheckPrivate();
public:
	void setContent(string);
	void reply(Comment);
	vector <Comment> getReplies();
	string getContent() const;
	string getDate() const;
	void display(Student*, Instructor*, int, int) const;
};

