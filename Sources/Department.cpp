#include "Department.h"
#include "Dean.h"
#include "Instructor.h"
#include <string>
#include <vector>
using namespace std;

// Constructors____________________________________________________________________
vector<string> initializer_vector(0); // The vector has Zero Strings
Department::Department()
    : Name("\0"), Dean_Name("\0"), Majors(initializer_vector) {}

// Setters____________________________________________________________________________
void Department::setName(string name) {
  for (int iterator = 0; iterator < name.size() - 1; iterator++) {
    if (name[iterator] == ' ') {
      Name = name;
    }
  }
}

void Department::setDean(string dean_name) {

  for (int iterator = 0; iterator < dean_name.size() - 1; iterator++) {
    if (dean_name[iterator] == ' ') {
      Dean_Name = dean_name;
    }
  }
}

void Department::addMajor(string major_entry_by_user) {
  if (major_entry_by_user != "\0" || major_entry_by_user != " ") {
    vector<string> majors;
    majors.push_back(major_entry_by_user);
    Majors = majors;
  }
}

// Getters________________________________________________________________________

string Department::getName() { return Name; }

string Department::getDean_Name() { return Dean_Name; }

vector<string> Department::getMajors() { return Majors; }
