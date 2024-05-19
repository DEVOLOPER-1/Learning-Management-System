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
void Student::setpetitionptr(Petition  &petition){
    petition_ptr = &petition;
}

Petition *Student::getpetitionptr() { return petition_ptr; }
