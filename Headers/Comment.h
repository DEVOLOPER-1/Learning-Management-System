#pragma once
#include "Message.h"
#include "Reply.h"
#include <vector>
#include <string>
using namespace std;

class Comment : public Message
{
private:
	vector<Reply*> replies;
public:
	Comment(string Comment_Author, string content, vector<Reply*> replies);
	void addReply(Reply* reply);
	void removeReply(Reply* reply);
	void setReplies(vector<Reply*> replies);
	vector<Reply*> getReplies();
	void display();
	~Comment();
};

