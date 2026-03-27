#include "Student.h"

// set student data
Student::Student(string name, int memberID, double cgpa) : UniversityMember(name, memberID), cgpa(cgpa) {}

// get cgpa
double Student::getCGPA() { return cgpa; }

// update marks
void Student::updateCGPA(double newCGPA)
{
    // check negative
    if (newCGPA < 0)
    {
        cout << "Error! CGPA cannot be negative\n";
        return;
    }
    cgpa = newCGPA;
}

// show role
void Student::displayRole() { cout << "Role: Student\n"; }