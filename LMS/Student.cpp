#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student() : Student("", ' ', "", "", {}, {}, {}, {}) {}

Student::Student(string name, char s, string role, string nationalID, vector<Task*> Tasks, vector<Course*> Courses, vector<Assignment*> assignments, vector<Classroom*> classrooms) : Member(name, s, role, nationalID), Tasks(Tasks), Courses(Courses), assignments(assignments), classrooms(classrooms) {
	this->schedule = Schedule(Courses);
}

void Student::setTasks(vector<Task*> Tasks) { this->Tasks = Tasks; }

void Student::addTask(Task* task) { Tasks.push_back(task); }

Task* Student::getTask(int position) { return Tasks.at(position - 1); }

void Student::removeTask(int position) { Tasks.erase(Tasks.begin() + position - 1); }

void Student::updateTask(int position, int action)
{
	if (action == 1)
	{
		getTask(position)->complete();
	}
	else if (action == 2)
	{
		string content;
		cout << "Enter new content: ";
		getline(cin, content);

		getTask(position)->setContent(content);
	}
	else if (action == 3)
	{
		string dueDate;
		cout << "Enter new due date: ";
		cin >> dueDate;
		getTask(position)->setDueDate(dueDate);
	}
	else if (action == 4)
	{
		removeTask(position);
	}
	if (action == 1 || action == 2 || action == 3) {
		cout << "Task " << position << " has been updated successfully.\n\n";
		getTask(position)->display();
	}
	else
		cout << "Task " << position << " has been deleted successfully.\n\n";
}

void Student::displayTasks()
{
	cout << "Student: " << getName() << "\t" << "ID: " << getUni_ID() << endl;
	cout << "Tasks:\n";
	for (int i = 0; i < Tasks.size(); i++)
	{
		cout << i + 1 << ". ";
		Tasks.at(i)->display();
		cout << endl;
	}
}


vector<Task*> Student::getTasks() const { return Tasks; }

void Student::setCourse(vector<Course*> Courses) { this->Courses = Courses; }

void Student::setSchedule(Schedule schedule) { this->schedule = schedule; }

vector<Course*> Student::getCourses() { return Courses; }

Schedule Student::getSchedule() { return schedule; }

vector<Assignment*> Student::getStudentAssignments() { return assignments; }

void Student::setClassrooms(vector<Classroom*> classrooms) { this->classrooms = classrooms; }

vector<Classroom*> Student::getClassrooms() { return classrooms; }

Student::~Student()
{
	for (int i = 0; i < Tasks.size(); i++)
		delete Tasks.at(i);
}