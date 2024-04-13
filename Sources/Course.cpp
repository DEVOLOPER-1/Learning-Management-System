#include "Course.h"
#include <iostream>
using namespace std;
#include <string>
#include <vector>
//Constructors


//Control + shift + P





//Setters
void Course::setTitle(string title){
    int len_title = title.length();
    int iterator{0};
    int numofspaces{0};
    if(len_title == 0){cout<<"Please Enter Title Correctly !!";}
    for (; iterator < len_title; iterator++){
        if (title[iterator] == ' ' ) {
            numofspaces+=1;
        }}
    if (numofspaces < 1) {
        cout<<"Please Enter 2 words at least for the Title !!";}
    
    else {Title = title;}
}

void Course::setInstructor(string Instructor_name){
    int len_name = Instructor_name.length();
    int iterator = 0;
    int num_of_spaces = 0;
    if (len_name == 0) {
        cout<<"Invalid , Enter the name correctly ";
    }
    for (; iterator<len_name; iterator++) {
        if(Instructor_name[iterator] == ' ' ){
            num_of_spaces += 1;
        }}
        if (num_of_spaces < 1) {
            cout<<"Please Enter The first and second name at least !!";}
        else{instructor = Instructor_name ;}
    }

void Course::setCode(vector<string>course_code){
    unsigned int num_of_courses{0};
    string temp_course_code;
    cout<<"Enter No. of Course codes you will enter"; cin>>num_of_courses;
    for(int iterator{0}; iterator<num_of_courses;iterator++){
        cout<<"Enter Course Code : "; cin>>temp_course_code;
        course_code.push_back(temp_course_code);
    } vector<string> Code = course_code;
    }
void Course::setPrerequisete(vector<string>prerequisetes,vector<string> Code){
    int prerequisete_length = Code.size();
    string temp_prerequisete;
    for(int iterator{0}; iterator<prerequisete_length;iterator++){
        cout<<"Enter Prerequisete : if there's no prerequisete enter 'nan'\n"; cout<<Code[iterator]<<" "; cin>>temp_prerequisete;
        prerequisetes.push_back(temp_prerequisete);
    }Prerequisete = prerequisetes;
    }
void Course::CreditHours(int CreditHours,vector<string> Code){
    int *array{ new int[Code.size()]};
    for(int iterator{0}; iterator<Code.size();iterator++){
        cout<<"Enter Credit Hours : ";  cout<<Code[iterator]<<" "; cin>>array[iterator]; }
}

//Getters
string getTitle(return  Title);
