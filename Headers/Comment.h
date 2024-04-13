#pragma once
#include <iostream>
#include <vector>
#include "Comment.h"
#include "Student.h"

class Comment
{
private:
	string Comment;
	string Date;
	vector <Comment> Replies;
	bool isPrivate;
	void CheckPrivate();
public:
	void setComment(string);
	void reply(Comment);
	vector <Comment> getReplies();
	string getComment() const;
	string getDate() const;
	void display(Student*, Instructor*, int, int) const;
};

