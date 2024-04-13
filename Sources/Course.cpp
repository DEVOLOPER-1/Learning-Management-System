#include "Course.h"
#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <iomanip>
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

void Course::setInstructor(string Instructor_name,vector<string> Code){
    int len_name = Instructor_name.length();
    int iterator = 0;
    int num_of_spaces = 0;
    vector <string> instructor_names;
    if (len_name == 0) {
        cout<<"Invalid , Enter the name correctly ";
    }
    for (; iterator<len_name; iterator++) {
        if(Instructor_name[iterator] == ' ' ){
            num_of_spaces += 1;
        }}
        if (num_of_spaces < 1) {
            cout<<"Please Enter The first and second name at least !!";}
        else{for(int iterator1{0}; iterator1<Code.size();iterator1++){
            cout<<"Enter the Instructor of "<<Code[iterator1]<<"  "; cin>>Instructor_name; instructor_names.push_back(Instructor_name); }}
            vector <string> instructor = instructor_names;
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
void Course::setCreditHours(unsigned int CreditHours,vector<string> Code){
    int *array{ new int[Code.size()]};
    for(int iterator{0}; iterator<Code.size();iterator++){
        cout<<"Enter Credit Hours :  ";  cout<<Code.at(iterator)<<"  "; cin>>array[iterator]; }
}
void Course::setSection(vector <int> sectionvector,vector<string> Code){
    //int *section_array = new int[Code.size()];
    int num_of_courses = Code.size();
    int temp_num_of_section {0};
    for(int iterator{0}; iterator<num_of_courses;iterator++){
        cout<<"Enter Section :  "; cout<<Code.at(iterator)<<"  "<<"Section"; cin>>temp_num_of_section; sectionvector.push_back(temp_num_of_section);
        if (temp_num_of_section == 0)
        { cout<<"Invalid Entry you can't enter 0"; break;}
        }
    vector<int>Section = sectionvector;
    //int Section[num_of_courses];   
    /*
    for (int iterator1{0}; iterator1 <num_of_courses; iterator1++)
     {int Section[iterator1] = section_array[iterator1];}*/}

void Course::setPlace(vector <string> Placevector,vector<string> Code){
    int num_of_courses = Code.size();
    string temp_place;
    for(int iterator{0}; iterator<num_of_courses;iterator++){
        cout<<"Enter Place :  "; cout<<Code.at(iterator)<<"  "; cin>>temp_place; Placevector.push_back(temp_place);
        }
    vector<string> Place = Placevector;}

void Course::setDay(vector<string> Dayvector , vector<string> Code){
    int num_of_courses = Code.size();
    string temp_day;
    for(int iterator{0}; iterator<num_of_courses;iterator++){
        cout<<"Enter Day :  "; cout<<Code.at(iterator)<<"  "; cin>>temp_day; Dayvector.push_back(temp_day);
        if (temp_day == "nan" || temp_day == " " or temp_day  == "")
        { cout<<"Invalid Entry"; break;} }
    vector<string> Day = Dayvector;}

















//Getters
string getTitle(return  Title);
