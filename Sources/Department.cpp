#include<iostream>
#include <vector>
#include "Instructor.h"
#include "Dean.h"
#include "Department.h"
<<<<<<< HEAD

void Department::setDean(Dean) {

}
void Department::setName(string) {

}
void Department::addMajor(string) {

}
void Department::addToStuff(Instructor) {

}
void Department::display() {

}
=======
#include "Instructor.h"
#include <string>
#include <vector>
using namespace std;

//Constructors____________________________________________________________________







//Setters____________________________________________________________________________
void Department::setName(string name) {
  for (int iterator = 0; iterator < name.size() - 1; iterator++) {
    if (name[iterator] == ' ') {
      Name = name;
    }
  }
}


void Department::setDean(string dean_name){

  for (int iterator = 0; iterator < dean_name.size() - 1; iterator++) {
    if (dean_name[iterator] == ' ') {
      Dean_Name = dean_name;
    }
  }
}


void Department::













//Getters________________________________________________________________________
>>>>>>> 78070ff (Department Class under construction)
