#include "Classroom.h"

void Classroom::setID(string id) {course_ID = id;}

void Classroom::setMaterials(vector<string> arr_mat) {materials = arr_mat;}

void Classroom::setStudents(vector<Student*> arr_std) {students = arr_std;}

void Classroom::addAssignment(Assignment* a)
{
	assignments.push_back(a);
}

void Classroom::addAnnouncement(Announcement* a)
{
	announcements.push_back(a);
}

string Classroom::getCourseID() {return course_ID;}

vector<string> Classroom::getMaterials() {return materials;}

vector<Student*> Classroom::getStudents() {return students;}

vector<Assignment*> Classroom::getAssignments() {return assignments;}

void Classroom::display() {}  // Acorrding to the GUI 
