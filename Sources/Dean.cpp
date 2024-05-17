#include "Dean.h"
#include "Member.h"

// Delegate Constructor
Dean::Dean(string name = "", char s = '\0',
		   string role = "", string nationalID = "",
		   vector<Course> courses = {}) : Member(name, s, role, nationalID),
										  courses(courses),
										  department_ptr(nullptr){};

void Dean::createDepartment()
{
	// Creating  a new Department object
	Department *newDepartment = new Department();
	// Associating new department with dean object
	department_ptr = newDepartment;

	// department_ptr->setDean(call_getName());
}

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

void Dean::addCourse(Course)
{
}

void Dean::displayCourses(vector<Course>)
{
}

void Dean::deleteCourse(Course)
{
}

Department *Dean::getDepartment()
{
	return department_ptr;
}

void Dean::showDepartment()
{
	department_ptr->display();
}
