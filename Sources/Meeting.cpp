#include <iostream>
#include <vector>
#include<string>
#include "Student.h"
#include "Meeting.h"
using namespace std;

//Constructor_____________________________________________________________________________

Meeting::Meeting() : No_Of_Team_Members(0) {
	
}




//Setters________________________________________________________________________________
void Meeting::createTeam(unsigned int members) {
	
	if (members<1)
	{
		No_Of_Team_Members = members;
	}
	
}


//Getters_________________________________________________________________________________

unsigned int Meeting::getNo_Of_Team_Members() { return No_Of_Team_Members; }	