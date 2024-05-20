#include <iostream>
#include <iomanip>
using namespace std;
#include "Member.h"

long int Member::Counter = 0;
// constructor
Member::Member() 
{
    Counter += 1;
    Name = "";
    Sex = NULL;
    Role = "";
    NationalID = "";
    Uni_ID = "";
    Age = 0;
    Mail = "";
}
Member::Member(string name, char s, string role, string nationalID) :/*initilizing to handle the errors in the seters functions*/ Member() 
{
    setName(name);
    setRole(role);
    setNational_ID(nationalID);
    // calcAge();                 // done inside the setNational_ID to avoid stale data
    // generateUni_ID();
    // generateMail();
}

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

void Member::generateMail()
{
    string mail = "";
    mail+=Uni_ID;
    mail+="@zewailcity.edu.eg";
    Mail = mail;
}

void Member::setNational_ID(string id)
{
    if (size(id) == 15 && (id[0] == 3 || id[0] == 2) ){
        NationalID = id;
        generateUni_ID();          // avoiding stale data 
        generateMail();
        calcAge();
    }
    else{
        cout << "Invalid ID number! Please recheck your input. " <<endl;
    }
}

#include <cctype>
void Member::setRole(string role)
{
    string roles[4] = {"instructor", "ta", "student", "dean"};
    // lowering the input
    for (int i; i < size(role); i++)
    {
        role[i] = /* cctype function*/tolower(role[i]);
    }                                                 
    
    for (string r: roles)
    {
        if (r == role){                  
            Role = role;
            generateMail();
            generateUni_ID();
            return;
        }
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

// Other functions
#include <ctime>
#include <cstdlib>
void Member::calcAge()
{
    time_t current;
    
    time(&current);
    struct tm* tmStruct = localtime(&current);

    int currYear = (tmStruct -> tm_year) + 1900;
    
    string idChar = NationalID.substr(1, 2);
    
    int brthYear{0};
    
    if (NationalID[0] == '3')
    {
        if (idChar[0] == '0')
        {brthYear = 2000 + idChar[1] - '0' ;}
        else
        {brthYear = 2000 + atoi(&idChar[0]);}        //couldn't cast two charcters integer from scratch
    }

    else
    {
        if (idChar[0] == '0')
        {brthYear = 1900 + idChar[1] - '0' ;}
        else
        {brthYear = 1900 + atoi(&idChar[0]);}        //couldn't cast two charcters integer from scratch
    }

    Age = currYear - brthYear;
}

#include <string.h>
void Member::generateUni_ID()
{
    string id;
    if (Role == "student")
    {
        id += "std";
    }
    else if (Role == "instructor")
    {
        id += "ins";
    }
    else if (Role == "ta")
    {
        id += "ta";
    }
    else
    {
        id += "den";
    }
    id += Counter;
    Uni_ID = id;
}
