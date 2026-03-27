#include "Department.h"

// set dep name
Department::Department(string departmentName) : departmentName(departmentName), memberCount(0) {}

// add person
void Department::addMember(UniversityMember *member)
{
    // check if full
    if (memberCount >= 50)
    {
        cout << "Member count full! Cannot add more.\n";
        return;
    }
    // save in array
    members[memberCount] = member;
    memberCount++;
}

// loop and show all
void Department::displayAllRoles()
{
    for (int i = 0; i < memberCount; i++)
        members[i]->displayRole();
}