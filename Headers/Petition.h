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
  string Title, Content, isApproved, status;
  void setStatus(bool seen);
  void checkSatus();
  
public:
  // Setters______________________________________________________________________
  void setDean(Dean & dean);
  void setStudent(Student & student);

  void setTitle(string);
  void setContent(string);
  void request();
  // void display(Dean, Student);

  // Getters______________________________________________________________________
  string getTitle();
  string getContent();
  Dean* getDean();
  Student* getStudent();

  // Friends.........................................
  friend class Member; // The friend relationship is made by youssef and it's to
                       // access the the role string and if it's a dean the
                       // petition status will be changed upon it.
};
