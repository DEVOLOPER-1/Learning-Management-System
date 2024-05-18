#include "Comment.h"
#include <iostream>
#include <string>
using namespace std;

Comment::Comment(string Comment_Author, string content, vector<Reply*> replies) : Message(Comment_Author, content), replies(replies) {}

void Comment::addReply(Reply* reply) { replies.push_back(reply); }

void Comment::removeReply(Reply* reply)
{
	for (int i = 0; i < replies.size(); i++)
	{
		if (replies.at(i) == reply)
		{
			replies.erase(replies.begin() + i);
			break;
		}
	}
}

void Comment::setReplies(vector<Reply*> replies) { this->replies = replies; }

vector<Reply*> Comment::getReplies() { return replies; }

void Comment::display()
{
	cout << getAuthor() << " commented: " << getContent() << endl;
	cout << "| Date: " << date->getDate() << endl;
	for (int i = 0; i < replies.size(); i++)
	{
		replies.at(i)->display();
	}
	cout << "--------------------------------\n\n";
}

Comment::~Comment()
{
	for (int i = 0; i < replies.size(); i++)
	{
		delete replies.at(i);
	}
}