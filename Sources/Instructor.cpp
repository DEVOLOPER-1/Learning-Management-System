#include "Instructor.h"
#include "Assignment.h"

void Instructor::setCourses(vector<Course> cs) {Courses = cs;}

vector<Course> Instructor::getCourses()
{
	return Courses;
}

void Instructor::assign(Classroom& cr)
{
	string title, due, describtion; float maxi;
	cout << "Enter Title: "; getline(cin, title);
	cout << "You should enter the following format with respect to spaces" << endl;
	cout << "Should be like: day/month (integers), hours:mins\nEnter Due Date: "; getline(cin, due);
	cout << "Enter Describtion: "; getline(cin, describtion);
	cout << "Enter the max grade for the assignment: "; cin >> maxi;
	Assignment A(title, due, describtion, maxi);

	vector<Student> stds = cr.getStudents();
	for(int s=0; s<size(stds); s++)
	{
		vector<Assignment> assVec = stds[s].getStudentAssignments();
		assVec.push_back(A);
	}
}

void Instructor::grade(Classroom& cr, string assTitle)
{
	vector<Student> stds = cr.getStudents();
	for(int s; s<size(stds); s++)
	{
		vector<Assignment> assVec = stds[s].getStudentAssignments();
		for(int a = size(assVec) - 1; a>=0; a++)
		{
			Assignment ass = assVec[a];
			if (ass.getTitle() == assTitle)
			{
				Student st = stds[s];
				st.display();
				cout << "Student Submission: "<< ass.getSubmission()<<endl;
			
				float g;
				cout << "Grade from " << ass.getMaxGrade()<< ": "; cin >> g;
				ass.setGrade(g);
			}
		}
	}
}

void Instructor::material(Classroom& cr)
{
	string link;
	cout << "Enter the GoogleDocs link of the material to publish: "; cin>>link;
	vector<string> clasM = cr.getMaterial();
	if(link.starts_with("https://"))
		clasM.push_back(link);
	else
		cout << "Sorry! enter a valid link starting with 'https://'." << endl;
}

Comment Instructor::comment(Classroom& cr)
{
	string com;
	cout << "Enter a comment: "; getline(cin, com);
	Comment c(com);
	return c;
}
