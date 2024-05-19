#include "Dean.h"
#include "Member.h"

// Delegate Constructor
Dean::Dean():Dean(string name = "", char s = '\0',
		   string role = "", string nationalID = "",
		   vector<Course> courses = {}) : Member(name, s, role, nationalID),
										  courses(courses),
										  department_ptr(nullptr){};

string Dean::call_getName()
{
	Member::getName();
}
void Dean::setDepartment(Department &department)
{
	department_ptr = &department;
	// department_ptr pointer in the Dean object now points to the memory location of the
	// Department object that was passed as a reference to the setDepartment method
}

void Dean::setPetition(Petition &petition)
{
	petition_ptr = &petition;
}

void Dean::setCourse(Course &course){
	course_ptr = &course;
}
void Dean::addCourse(Course)
{

}

void Dean::displayCourses(Course &course )
{
	course_ptr->display();
}

void Dean::deleteCourse(Course)
{

}

Department *Dean::getDepartment()
{
	return department_ptr;
}

Petition *Dean::getPetition()
{
	return petition_ptr;
}
void Dean::showDepartment(Department &department)
{
	department_ptr->display();
}
Course *Dean::getCourse()
{
	return course_ptr;
}
void Dean::showPetition(Petition &petition)
{
	petition_ptr->getContent();
}
