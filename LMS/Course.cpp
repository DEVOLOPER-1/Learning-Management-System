#include "Course.h"
#include <iostream>
using namespace std;
#include <iomanip>
#include <string>
#include <vector>
// Constructors___________________________________________________________________-
// Control + shift + P

	Course::Course(string Title="", string instructor="",
	 string Code="", string Prerequisete="",
	 vector <string> CreditHours = {}, 
	  vector<string> Section = {}, string TimeSlot ="",
	 string Day = "", string Place = "") : Title(Title), instructor(instructor), Code(Code), 
	 Prerequisete(Prerequisete), CreditHours(CreditHours), Section(Section), 
	 TimeSlot(TimeSlot), Day(Day), Place(Place) {};

// Setters____________________________________________________________________
void Course::setTitle(string title) {
  int len_title = title.length();
  int iterator{0};
  int numofspaces{0};
  if (len_title == 0) {
    cout << "Please Enter Title Correctly !!";
  }
  for (; iterator < len_title; iterator++) {
    if (title[iterator] == ' ') {
      numofspaces += 1;
    }
  }
  if (numofspaces < 1) {
    cout << "Please Enter 2 words at least for the Title !!";
  }

  else {
    Title = title;
  }
}

void Course::setInstructor(string Instructor_name) {
  int len_name = Instructor_name.length();
  int iterator = 0;
  int num_of_spaces = 0;
  vector<string> instructor_names;
  if (len_name == 0) {
    cout << "Invalid , Enter the name correctly ";
  }
  for (; iterator < len_name; iterator++) {
    if (Instructor_name[iterator] == ' ') {
      num_of_spaces += 1;
    }
  }
  if (num_of_spaces < 1) {
    cout << "Please Enter The first and second name at least !!";
  } else {
    instructor = Instructor_name;
  }
}

void Course::setCode(string course_code) {

  string Code = course_code;
}
void Course::setPrerequisete(string prerequisetes) {

  Prerequisete = prerequisetes;
}
void Course::setCreditHoursandsection(vector<string> section, vector<string> hours) {

    for ( int elementsiterator =0; elementsiterator <  hours.size()-1 ; elementsiterator++) {
      CreditHours.push_back(hours[elementsiterator]);
      Section.push_back(section[elementsiterator]);
    }
}






void Course::setPlace(string Placevector) {
Place = Placevector;
}

void Course::setDay(string temp_day) {
  // int num_of_courses = Code.size();
  string temp_day;
  /*
  for(int iterator{0}; iterator<num_of_courses;iterator++){
      cout<<"Enter Day :  "; cout<<Code.at(iterator)<<"  "; cin>>temp_day;
  Dayvector.push_back(temp_day); */
  if (temp_day != "nan" || temp_day != " " or temp_day != "" ||
      temp_day != "/0") {
    Day = temp_day;
  }
}

void Course::setTime(string time) {
  // int len_of_classes_vector = Code.size();
  if (time[0] != '0' and time[1] != '0') {
    if (time[2] == ':' or time[2] == '.') {
      if (time[5] == 'p' || 'a' || 'P' || 'A') {
        if (time[6] == 'm' || 'M') {
          TimeSlot = time;
        }
      }
    }
  }
//Throw Error should be implemented here
  else {
    cout << "Invalid\n Enter time again";
    cin >> time;
    setTime(time);
  }

}

void Course::display() {
  cout << setw(10) << Title << setw(10) << '\n\n' << endl;
  cout << setw(10) << instructor << setw(10) << endl;
  cout << setw(10) << Code << setw(10) << endl;
  cout << setw(10) << Prerequisete << setw(10) << endl;
  cout << setw(10) << " Credit Hours  & Sections" << setw(10) << endl;
  for (int i = 0; i < CreditHours.size()-1; i++)
  {
    cout << setw(10) << CreditHours[i] << setw(10) << " Section : " << Section[i+1] << endl;
  }
  cout << setw(10) << TimeSlot << setw(10) << endl;
  cout << setw(10) << Day << setw(10) << endl;
  cout << setw(10) << Place << setw(10) << endl;
}

void Course::Delete() {
  Title = '/0'; // special character for null value in string
  instructor = '/0';
  Code = '/0';
  Prerequisete = '/0';
  CreditHours = {};
  Section = {};
  TimeSlot = '/0';
  Day = '/0';
  Place = '/0';
}

// Getters______________________________________________________________________________
string Course::getTitle() { return Title; }

string Course::getInstructor(){return instructor;} 
// Errrorrr

string Course::getCode() { return Code; }

string Course::getPrerequisete() { return Prerequisete; }

vector<string> Course::getCreditHoursandsection() { return CreditHours , Section; }


string Course::getPlace() { return Place; }

string Course::getDay() { return Day; }

string Course::getTime() { return TimeSlot; }

// Time Data Entry in main
/*

string time_sample {"12.00PM"};
cout<<"You will have to enter 7 slots to express the time from left to right
like the following  "<<time_sample<<endl;


for (int time_index{0}; time_index < 7; time_index++){
    cout<<time[time_index]<<time[time_index+1]<<endl;
    cout<<"Enter slot with index "<<time_index+1<<" "; cin>>time[time_index];}




*/