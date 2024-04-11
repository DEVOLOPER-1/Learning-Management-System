#include <iostream>
#include <iomanip>
using namespace std;
#include "Member.h"

// constructor


// Seteres
void Member::setName(string N)
{
    int countSpaces;
    for (int c : N)
    {
        if (c == ' ')
            ++countSpaces;
    }
    if (countSpaces == 3) {Name = N;}
    else {cout << "Sorry! Enter your quadratic name " << endl;}
}

void Member::setMail(string email, string match = "zewailcity")
{
    const string Match = "zewailcity";
    int ind = email.find('@');
    
    string dom = email.substr(ind+1, size(match));
    if (dom == match)
        Mail = email;
    else 
        cout << "Invalid E-mail! Please enter your universty mail. ";
}

void Member::setNational_ID(string id)
{
    if (size(id) == 15)
        NationalID = id;
}

void Member::setRole(string role)
{
    string roles[4] = {"Instructor", "TA", "Student", "Dean"};
    for (string r: roles)
    {
        if (r == role)                 // seasrch for capitalize and lower 
            Role = role;
            return;
    }
    cout << "Please enter one of the following values:\n" << "'Instructor', 'TA', 'Student', 'Dean'";
    cout <<endl;
}

void Member::setSex(char s)
{
    char genders[2] = {'m', 'f'};
    for (char g: genders)
    {
        if (g == s)
            Sex = s;
            return;
    }
   cout << "Please enter one of the following values:\n" << "'m', 'f'" <<endl; 
}


// Geters & Display
short int Member::getAge() const { return Age; }

char Member::getSex() const { return Sex; }

string Member::getMail() const { return Mail; }

string Member::getName() const { return Name; }

string Member::getNational_ID() const { return NationalID; }

string Member::getRole() const { return Role; }

string Member::getUni_ID() const { return Uni_ID; }

void Member::display() const
{
    cout << setw(40) << Name << "Role:" << Role << endl;
    cout << setw(15) << "Universty ID:" << Uni_ID << endl;

    cout << string(80, '_') << endl
         << endl;

    cout << setw(15) << "Mail:" << Mail << endl;
    cout << setw(15) << "National ID:" << NationalID << endl;
    cout << setw(15) << "Age:" << Age << endl;
    cout << setw(15) << "Gender:" << Sex << endl;

    cout << string(80, '_') << endl
         << endl;
}
