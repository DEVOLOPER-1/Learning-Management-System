#include "Student.h"

Classroom Student::openClassroom(Classroom)
{
    return Classroom();
}

void Student::openDashboard(Dashboard)
{
}

void Student::registerCourse(Course)
{
}

vector<Assignment> Student::getStudentAssignments()
{
	return assignments;
}
