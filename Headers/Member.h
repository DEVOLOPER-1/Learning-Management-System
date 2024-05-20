#pragma once
#include <iostream>
#include "Petition.h"

using namespace std;

// long int Member::Counter = 0;
class Member
{
private:
	// Variables..............................................
	string Name, NationalID, Uni_ID, Mail, Role;
	char Sex;
	short int Age;
	static long int Counter;

	// Private Functions......................................
	void generateUni_ID();
	void calcAge();
	void generateMail();
	
public:
	// Constructors
	Member();
	Member(string,char,string, string);
	// Seters................................................
	void setName(string);
	void setSex(char);
	void setNational_ID(string);
	void setRole(string );
	void setName(string);

	// Geters................................................
	string getName() const;
	string getMail() const;
	string getNational_ID() const;
	string getRole() const;
	string getUni_ID() const;
	char getSex() const;
	short int getAge() const;
    void display() const;
    
    
};
