#include "Petition.h"
#include "Member.h"
#include <iostream>
#include <string>
using namespace std;

// Constructor

// Setter Methods

void Petition::setStatus(bool seen) {
  string statu_array[]{"Pending", "Done"};
  // bool seen{false};
  if (seen == false) {
    string status = statu_array[0];
  }
  if (seen == true) {
    string status = statu_array[1];
  }
}

void Petition::checkSatus() {
  string approve[]{"Yes", "No"};
  if (isApproved == approve[0]) {
    cout << isApproved << endl;
  }
  if (isApproved == approve[1]) {
    cout << isApproved << endl;
  }

  else {
    cout << "Neither 'Approved' nor 'Not Approved' ";
  }
}

void Petition::setTitle(string Titl) {
  int len_title = Titl.length(); // Titl.length; => Titl.length();
  int iterator{0};
  int numofspaces{0};
  if (len_title == 0) {
    cout << "Please Enter Title Correctly !!";
  }
  for (; iterator < len_title; iterator++) {
    if (Titl[iterator] == ' ') {
      numofspaces += 1;
    }
  }
  if (numofspaces < 2) {
    cout << "Please Enter 3 words at least for the Title !!";
  }

  else {
    Title = Titl;
  }
}

void Petition::setContent(string Conten) {
  int len_content = Conten.length();
  int iterator{0};
  int numofspaces{0};
  if (len_content == 0) {
    cout << "Please Enter Content Correctly !!";
  }
  for (; iterator < len_content; iterator++) {
    if (Conten[iterator] == ' ') {
      numofspaces += 1;
    }
  }
  if (numofspaces < 9) {
    cout << "Please Enter 10 words at least for the Content don't describe it "
            "briefly !!";
  }

  else {
    Content = Conten;
  }
}

void Petition::decide(Member &check_member_role) {
  bool seen;
  if (check_member_role.Role == "dean") {
    setStatus(seen == true);
    // bool seen == true;
  }
}

// Getter Methods
string Petition::getTitle() { return Title; }
string Petition::getContent() { return Content; }

/* Content Sample Petition
This petition is for discussing the various changes in the syllabus of various
courses without any declaration for the students
*/
