#pragma once
#include <iostream>
using namespace std;

class Member
{
private:
	// Variables..............................................
	string Name, NationalID, Uni_ID, Mail, Role;
	char Sex;
	short int Age;
	static int Counter;

	// Private Functions......................................
	void generateUni_ID();
	void calcAge();

public:
	// Seters................................................
	void setName(string);
	void setSex(char);
	void setNational_ID(string);
	void setMail(string);
	void setRole(string);

	// Geters................................................
	string getName() const;
	string getMail() const;
	string getNational_ID() const;
	string getRole() const;
	string getUni_ID() const;
	char getSex() const;
	short int getAge() const;
};