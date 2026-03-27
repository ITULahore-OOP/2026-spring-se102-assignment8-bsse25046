#ifndef TEACHINGASSISTANT_H
#define TEACHINGASSISTANT_H
#include "Student.h"
#include "Staff.h"

// ta is student and staff both
class TeachingAssistant : public Student, public Staff
{
    int workingHours;

public:
    // make ta
    TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours);
    void displayRole() override;
    // grade with number
    void gradeAssignment(int score);
    // grade with letter
    void gradeAssignment(string letterGrade);
};

#endif