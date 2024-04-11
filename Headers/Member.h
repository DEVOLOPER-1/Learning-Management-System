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
	// Constructors
	Member();
	// Seters................................................
	void setName(string N);
	void setSex(char s);
	void setNational_ID(string id);
	void setMail(string email, string Match);
	void setRole(string role);

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