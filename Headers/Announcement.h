#pragma once
#include <iostream>
#include <vector>
#include <ctime>
#include "Comment.h"
#include "Message.h"

class Announcement :public Message
{
private:
	vector<Comment*> Comments;
public:
	void display();
	void addComment(Comment* Comment);
	void removeComment(Comment* comment);
	void setComments(vector<Comment*> Comments);
	vector<Comment*> getComments();
};