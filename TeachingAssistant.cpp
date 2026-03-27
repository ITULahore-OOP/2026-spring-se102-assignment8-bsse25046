#include "TeachingAssistant.h"

// set all ta stuff
TeachingAssistant::TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours) : Student(name, memberID, cgpa), Staff(name, memberID, salary, card), UniversityMember(name, memberID), workingHours(workingHours) {}

// show ta role
void TeachingAssistant::displayRole() { cout << "Role: Teaching Assistant\n"; }

// give number marks
void TeachingAssistant::gradeAssignment(int score) { cout << "Function overloading -> Assignment graded with numeric score: " << score << "/100\n"; }

// give letter marks
void TeachingAssistant::gradeAssignment(string letterGrade) { cout << "Function overloading -> Assignment graded with letter grade: " << letterGrade << endl; }