#include <iostream>
#include <vector>
#include<string>
#include <ctime>
#include "Announcement.h"
using namespace std;


void Announcement::display() {
	cout << "Author: " << getAuthor() << endl;
	cout << "Content: " << getContent() << endl;
	cout << "Date: " << date->getDate() << endl;
	for (int i = 0; i < Comments.size(); i++)
	{
		Comments.at(i)->display();
	}
	cout << "--------------------------------\n\n";
}

void Announcement::addComment(Comment* Comment) { Comments.push_back(Comment); }
void Announcement::removeComment(Comment* Comment)
{
	for (int i = 0; i < Comments.size(); i++)
	{
		if (Comments.at(i) == Comment)
		{
			Comments.erase(Comments.begin() + i);
			break;
		}
	}
}

void Announcement::setComments(vector<Comment*> Comments) { this->Comments = Comments; }

vector<Comment*> Announcement::getComments() { return Comments; }