#include "Department.h"
#include "Dean.h"
#include "Instructor.h"
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

// Constructors____________________________________________________________________
Department::Department(string name, string dean_name = "", vector<string> majors = {}) : Name(name), Dean_Name(dean_name), Majors(majors){};
// Setters____________________________________________________________________________

void Department::createDean()
{

  // Creating  a new Dean object
  Dean *newDean = new Dean();
  // Associating new dean with department object
  dean_ptr = newDean;
}
void Department::settingDean(Dean &dean)
{
  dean_ptr = &dean;
}

void Department::settinginstructor(Instructor &instructor){
instructor_ptr = &instructor;
}

void Department::setDeanName(Dean &dean)
{
  Dean_Name = dean_ptr->getName();
}


void Department::setName(string name)
{
  for (int iterator = 0; iterator < name.size() - 1; iterator++)
  {
    if (name[iterator] == ' ')
    {
      Name = name;
    }
  }
}

// Add Majors
void Department::addMajor(string major_entry_by_user)
{
  if (major_entry_by_user != "\0" || major_entry_by_user != " ")
  {
    vector<string> majors;
    majors.push_back(major_entry_by_user);
    Majors = majors;
  }
}

void Department::addToStuff( Instructor &instructor){

  Staff.push_back(instructor);
}

void Department::display()
{
  cout << setw(10) << Name << setw(10) << '\n\n' << endl;
  cout << setw(10) << Dean_Name << setw(10) << endl;
  cout << setw(10) <<" ~ " << "Majors"<< " ~ "<< setw(10) << endl;
  for (auto new_major : Majors)
  {
    cout << setw(10) << new_major << setw(10) << " ";
  }
    cout << endl;
    cout << setw(10) <<" ~ " << "Instructors"<< " ~ "<< setw(10) << endl;


}

// Getters________________________________________________________________________

string Department::getName() { return Name; }

Dean *Department::getDean()
{
  return dean_ptr;
}

vector<string> Department::getMajors() { return Majors; }


Instructor* Department::getInstructor() { return instructor_ptr; }