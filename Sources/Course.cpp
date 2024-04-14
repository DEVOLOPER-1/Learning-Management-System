#include "Course.h"
#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <iomanip>
//Constructors
//Control + shift + P


Course::Course(){Title = '/0'; //special character for null value in string
    instructor = '/0';
    Code = '/0';
    Prerequisete = '/0';
    CreditHours = '/0';
    Section = '/0';
    TimeSlot = '/0';
    Day = '/0';
    Place = '/0';}


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
        else{instructor = Instructor_name;}}

void Course::setCode(string course_code){
    /*
    unsigned int num_of_courses{0};
    string temp_course_code;
    cout<<"Enter No. of Course codes you will enter"; cin>>num_of_courses;
    for(int iterator{0}; iterator<num_of_courses;iterator++){
        cout<<"Enter Course Code : "; cin>>temp_course_code;
        course_code.push_back(temp_course_code);
    }*/ string Code = course_code;
    }
void Course::setPrerequisete(string prerequisetes){
    /*
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
        cout<<"Enter Credit Hours :  ";  cout<<Code.at(iterator)<<"  "; cin>>array[iterator]; } */
Prerequisete = prerequisetes;
}
void Course::setSection(unsigned int sectionvector){
    //int *section_array = new int[Code.size()];
    /*
    int num_of_courses = Code.size();
    int temp_num_of_section {0};
    for(int iterator{0}; iterator<num_of_courses;iterator++){
        cout<<"Enter Section :  "; cout<<Code.at(iterator)<<"  "<<"Section"; cin>>temp_num_of_section; sectionvector.push_back(temp_num_of_section);*/
        if (sectionvector == 0)
        { cout<<"Invalid Entry you can't enter 0";}
        Section = sectionvector;
        }
    
    //int Section[num_of_courses];   
    /*
    for (int iterator1{0}; iterator1 <num_of_courses; iterator1++)
     {int Section[iterator1] = section_array[iterator1];}*/

void Course::setPlace(string Placevector){
    /*
    int num_of_courses = Code.size();
    string temp_place;
    for(int iterator{0}; iterator<num_of_courses;iterator++){
        cout<<"Enter Place :  "; cout<<Code.at(iterator)<<"  "; cin>>temp_place; Placevector.push_back(temp_place);
        }*/
     Place = Placevector;}

void Course::setDay(string temp_day){
    //int num_of_courses = Code.size();
    string temp_day;
    /*
    for(int iterator{0}; iterator<num_of_courses;iterator++){
        cout<<"Enter Day :  "; cout<<Code.at(iterator)<<"  "; cin>>temp_day; Dayvector.push_back(temp_day); */
        if (temp_day == "nan" || temp_day == " " or temp_day  == "")
        { cout<<"Invalid Entry";} 
        Day = temp_day;}

void Course::setTime(string time){
//int len_of_classes_vector = Code.size();
string time[7]{"12.00PM"};
string time_sample {"12.00PM"};
cout<<"You will have to enter 7 slots to express the time from left to right like the following  "<<time_sample<<endl;
/*
 for (int iterator0 = 0; iterator0 < len_of_classes_vector; iterator0++){
        for (int time_index{0}; time_index < 7; time_index++){
    cout<<time[time_index]<<time[time_index+1]<<endl;
    cout<<"Enter slot with index "<<time_index+1<<" "; cin>>time[time_index];} 
    Timevector.push_back(time[iterator0]);
} */
for (int time_index{0}; time_index < 7; time_index++){
    cout<<time[time_index]<<time[time_index+1]<<endl;
    cout<<"Enter slot with index "<<time_index+1<<" "; cin>>time[time_index];} 
     
    TimeSlot = time;
} //This Method is not mature yet!!!


void Course::display(){
    cout<<Title<<endl;
    cout<<instructor<<endl;
    cout<<Code<<endl;
    cout<<Prerequisete<<endl;
    cout<<CreditHours<<endl;
    cout<<Section<<endl;
    cout<<TimeSlot<<endl;
    cout<<Day<<endl;
    cout<<Place<<endl;
}

void Course::Delete(){
    Title = '/0'; //special character for null value in string
    instructor = '/0';
    Code = '/0';
    Prerequisete = '/0';
    CreditHours = '/0';
    Section = '/0';
    TimeSlot = '/0';
    Day = '/0';
    Place = '/0';}











//Getters
string Course::getTitle(){return Title;}

//Instructor::getInstructor(){return instructor;} //Instructor getInstructor() Errrorrr

string Course::getCode(){return Code;}

string Course::getPrerequisete(){return Prerequisete;}

unsigned int Course::getCreditHours(){return CreditHours;}

unsigned int Course::getSection(){return Section;}

string Course::getPlace(){return Place;}

string Course::getDay(){return Day;}

string Course::getTime(){return TimeSlot;}


