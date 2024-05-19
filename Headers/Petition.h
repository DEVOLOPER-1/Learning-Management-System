#pragma once
#include "Dean.h"
#include "Member.h"
#include "Student.h"
#include <iostream>
using namespace std;

/*
- Title: string
- Content: string
- isApproved: string
- Status: string
+ setTitle(petition_title: string)
+ setContent(petition_content: string)
- setStatus()
+ request()
+ getTitle(): string
+ getContent: string
- checkStatus()
+ display(dean: Dean, student: Student)
+ decide()
*/

class Petition {
private:
  Dean* dean_ptr = nullptr;
  Student* student_ptr = nullptr;
  Department* department_ptr = nullptr;
  string Title, Content, isApproved, status;
  bool seeen;

  
public:
  Petition();
  Petition(string, string, string, string );
  // Setters______________________________________________________________________
  void setDean(Dean & dean);
  void setStudent(Student & student);
  void setDepartment(Department & department);
  void setTitle(string);
  void setContent(string);
  void setStatus(bool seen);
  bool checkSatus(bool seen);
  void request();
  // void display(Dean, Student);

  // Getters______________________________________________________________________
  string getTitle();
  string getContent();
  Dean* getDean();
  Student* getStudent();
  Department* getDepartment();
  // Friends.........................................
   // The friend relationship is made by youssef and it's to
                       // access the the role string and if it's a dean the
                       // petition status will be changed upon it.
};
