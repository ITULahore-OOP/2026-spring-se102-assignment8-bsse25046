#ifndef STUDENT_H
#define STUDENT_H
#include "UniversityMember.h"

// student inherit virtual
class Student : virtual public UniversityMember
{
    double cgpa;

public:
    // make student
    Student(string name, int memberID, double cgpa);
    double getCGPA();
    // change cgpa
    void updateCGPA(double newCGPA);
    void displayRole() override;
};

#endif