#include "Department.h"
#include "Dean.h"
#include "Instructor.h"
#include <string>
#include <vector>
using namespace std;

// Constructors____________________________________________________________________
Department::Department(string name, string dean_name = "", vector<string> majors = {}) : Name(name), Dean_Name(dean_name), Majors(majors) {};
// Setters____________________________________________________________________________

void Department::createDean() {

  //Creating  a new Dean object
  Dean* newDean = new Dean();
  //Associating new dean with department object
  dean_ptr = newDean;
}
void Department::settingDean(Dean &dean) {

  dean_ptr = &dean;
}
void Department::setName(string name) {
  for (int iterator = 0; iterator < name.size() - 1; iterator++) {
    if (name[iterator] == ' ') {
      Name = name;
    }
  }
}

// Add Majors
void Department::addMajor(string major_entry_by_user) {
  if (major_entry_by_user != "\0" || major_entry_by_user != " ") {
    vector<string> majors;
    majors.push_back(major_entry_by_user);
    Majors = majors;
  }
}

void Department::addToStuff(Instructor)
{
}

void Department::display()
{
}

// Getters________________________________________________________________________

string Department::getName() { return Name; }

 Dean* Department::getDean() 
 {
   return dean_ptr;
}

vector<string> Department::getMajors() { return Majors; }
