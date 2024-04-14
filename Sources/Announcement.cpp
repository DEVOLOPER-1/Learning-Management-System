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
    
}
void Announcement::display() {
    cout << "Content: " << Content << endl;
    cout << "Date: " << Date << endl;
}
void Announcement::deleteAnnouncement() {
    Content = "";
    Date = "";
}
