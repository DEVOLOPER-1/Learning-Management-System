#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student()
{
	Name = "";
	ID = "";
}

Student::Student(string Name, string ID)
{
	this->Name = Name;
	this->ID = ID;
}

Student::Student(string Name, string ID, vector<Task*> Tasks) : Student(Name, ID)
{
	this->Tasks = Tasks;
}

void Student::setName(string Name) { this->Name = Name; }

void Student::setID(string ID) { this->ID = ID; }

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
	cout << "Student: " << Name << " (" << ID << ")" << endl;
	cout << "Tasks:\n";
	for (int i = 0; i < Tasks.size(); i++)
	{
		cout << i + 1 << ". ";
		Tasks.at(i)->display();
		cout << endl;
	}
}

string Student::getName() const { return Name; }

string Student::getID() const { return ID; }

vector<Task*> Student::getTasks() const { return Tasks; }

Student::~Student()
{
	for (int i = 0; i < Tasks.size(); i++)
		delete Tasks.at(i);
}