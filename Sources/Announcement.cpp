#include <iostream>
#include <vector>
#include<string>
#include <ctime>
#include "Announcement.h"
using namespace std;

void Announcement::setDate(time_t time) {
	Date = time;
}
void Announcement::setContent(string ann_content) {
	Content = ann_content;
}
void Announcement::publish() {
	cout << "New Announcement" << endl;
}
string Announcement::getContent() {
    return Content;
}
time_t Announcement::getDate() {
    time_t t = time(0);                  
    tm* CurrentTimePtr = localtime(&t);
    CurrentDay = CurrentTimePtr->tm_mday;
    CurrentMonth = (CurrentTimePtr->tm_mon + 1);
    CurrentYear = (CurrentTimePtr->tm_year + 1900);
}
void Announcement::display() {
    cout << "Content: " << Content << endl;
    cout << "Date: " << Date << endl;
}
void Announcement::deleteAnnouncement() {
    Content = "";
    Date = "";
}
