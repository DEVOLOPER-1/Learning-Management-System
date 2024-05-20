#include <iostream>
#include <vector>
#include<string>
#include "Schedule.h"
#include"Course.h"
using namespace std;

Schedule::Schedule(vector <Course*> Courses) : Courses(Courses) {
    DayArr[0] = "Saturday";
    DayArr[1] = "Sunday";
    DayArr[2] = "Monday";
    DayArr[3] = "Tuesday";
    DayArr[4] = "Wednesday";
    DayArr[5] = "Thursday";
    DayArr[6] = "Friday";
}

void Schedule::dispaly() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < Courses.size(); j++) {
            if (Courses[j]->getDay() == DayArr[i]) {
                cout << "Day: " << DayArr[i] << endl;
                cout << "Course: " << Courses[j]->getTitle() << "place: " << Courses[j]->getPlace();

            }
        }
    }
}

