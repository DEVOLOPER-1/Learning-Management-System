#include "Student.h"

void Student::addTask(Task task)
{
	ToDoList.push_back(task);
}

void Student::removeTask(int index)
{
	ToDoList.erase(ToDoList.begin() + index);
	cout << "removed successfully\n";
}

void Student::displayToDolist()
{
	for (int TaskIndex{0}; TaskIndex < ToDoList.size(); TaskIndex++) {
		cout << "TASK #" << (TaskIndex + 1) << " ---------------\n";
		ToDoList.at(TaskIndex).display();
		cout << "\n";
	}
}

void Student::chooseTask(int index)
{
	ToDoList.at(index).display();
}
