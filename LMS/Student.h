#pragma once
#include <string>
#include <vector>
#include "Task.h"
#include "Course.h"
#include "Schedule.h"
#include "Member.h"
#include "Assignment.h"
#include "Classroom.h"
//#include "Petition"
using namespace std;

class Student : public Member
{
private:
	vector<Task*> Tasks;
	Task* getTask(int position);
	void removeTask(int position);
	vector<Course*> Courses;
	Schedule schedule;
	vector<Assignment*> assignments;
	vector<Classroom*> classrooms;
public:
	Student();
	Student(string name, char s, string role, string nationalID, vector<Task*> Tasks, vector<Course*> Courses, vector<Assignment*> assignments, vector<Classroom*> classrooms);
	void setTasks(vector<Task*> Tasks);
	void addTask(Task* task);
	void updateTask(int position, int action);
	void displayTasks();
	vector<Task*> getTasks() const;
	void setCourse(vector<Course*> Courses);
	void setSchedule(Schedule schedule);
	vector<Course*> getCourses();
	Schedule getSchedule();
	vector<Assignment*> getStudentAssignments();
	void setClassrooms(vector<Classroom*> classrooms);
	vector<Classroom*> getClassrooms();
	~Student();
};