#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H
#include <iostream>
#include <string>

using namespace std;

// base class for members
class UniversityMember
{
    string name;
    int memberID;

public:
    // make member
    UniversityMember(string name, int memberID);
    // virtual delete
    virtual ~UniversityMember();
    string getName();
    int getMemberID();
    // pure virtual for poly
    virtual void displayRole() = 0;
};

#endif