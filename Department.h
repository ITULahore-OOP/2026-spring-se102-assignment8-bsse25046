#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include "UniversityMember.h"

// department has members
class Department
{
    string departmentName;
    // pointer array
    UniversityMember *members[50];
    int memberCount;

public:
    // make dep
    Department(string departmentName);
    // put member in dep
    void addMember(UniversityMember *member);
    void displayAllRoles();
};

#endif