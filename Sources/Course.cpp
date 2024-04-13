#include "Course.h"
#include <iostream>
using namespace std;
#include <string>

//Constructors








//Setters
void Course::setTitle(string title){
    int len_title = title.length();
    int iterator{0};
    numofspaces{0};
    if(len_title == 0){cout<<"Please Enter Title Correctly !!"}
    for (; iterator < len_title; iterator++){
        if (Titl[iterator] == " ") {
            numofspaces+=1
        }}
    if (numofspaces < 1) {
        cout<<"Please Enter 2 words at least for the Title !!"}
    
    else {Title = Titl}
}

void Course::setInstructor(string Instructor_name){
    int len_name = Instructor_name.length();
    int iterator = 0;
    int num_of_spaces = 0;
    if (len_name == 0) {
        cout<<"Invalid , Enter the name correctly "
    }
    for (; iterator<len_name; iterator++) {
        if(Instructor_name[iterator] == " "){
            num_of_spaces + = 1
        }}
        if (num_of_spaces < 1) {
            cout<<"Please Enter The first and second name at least !!"}
        else{instructor = Instructor_name ;}
    }

void Course::setCode(vector course_code){
    unsigned int num_of_courses{0};
    cout<<"Enter No. of Course codes you will enter"; cin>>num_of_courses;
    
    
    
}



//Getters
string getTitle(return Title;)
