#pragma 
#include <string>
#include <vector>
#include "Task.h"
using namespace std;

class Student
{
private:
	string Name, ID;
	vector<Task*> Tasks;
	Task* getTask(int position);
	void removeTask(int position);
public:
	Student();
	Student(string Name, string ID);
	Student(string Name, string ID, vector<Task*> Tasks);
	void setName(string Name);
	void setID(string ID);
	void setTasks(vector<Task*> Tasks);
	void addTask(Task* task);
	void updateTask(int position, int action);
	void displayTasks();
	string getName() const;
	string getID() const;
	vector<Task*> getTasks() const;
	~Student();
};