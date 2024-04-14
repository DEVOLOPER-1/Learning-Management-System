#pragma once
#include <iostream>
#include <vector>
#include <ctime>
#include "Comment.h"

class Announcement
{
private:
	string Content;
	string Date;
	vector<Comment> Comments;
	void setDate(time_t time);
public:
	void setContent(string);
	void publish();
	string getContent();
	time_t getDate();
	void display();
	void deleteAnnouncement();
};