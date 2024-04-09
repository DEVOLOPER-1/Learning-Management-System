#pragma once
#include <iostream>
using namespace std;

class Member
{
private:
	string Name;
	char Sex;
	string NationalID;
	short int Age;
	string Mail;
	string Role;
	static int counter;
	void generateUniID();
	int calcAge();

public:
	void setName(string);
	void setSex(char);
	void setNational_ID(string);
	void setMail(string);
	void setRole(string);
	string getName();
	char getSex();
	string getMail();
	string getNationalID();
	string getRole();
	string get_uniID();
	string roleAssignment();
};

