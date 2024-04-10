#include <iostream>
#include <iomanip>
using namespace std;
#include "Member.h"

short int Member::getAge() const
{
    cout << setw(15) << "Age:" << Age;
}

string Member::getMail() const
{
    cout << setw(15) << "Mail:" << Mail;
}

string Member::getName() const
{
    cout << setw(15) << "Name:" << Name;
}

string Member::getNational_ID() const
{
    cout << setw(15) << "National ID:" << NationalID;
}

string Member::getRole() const
{
    cout << setw(15) << "Role:" << Role;
}

char Member::getSex() const
{
    cout << setw(15) << "Gender:" << Sex;
}

string Member::getUni_ID() const
{
    cout << setw(15) << "Universty ID:" << Uni_ID;
}
