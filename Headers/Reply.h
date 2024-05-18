#pragma once
#include "Message.h"

class Reply : public Message
{
public:
	Reply(string Reply_Author, string content);
	void display();
};

