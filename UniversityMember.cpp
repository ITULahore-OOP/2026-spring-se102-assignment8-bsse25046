#include "UniversityMember.h"

// set name and id
UniversityMember::UniversityMember(string name, int memberID) : name(name), memberID(memberID) {}

// tell when deleted
UniversityMember ::~UniversityMember() { cout << "Destructor for University Member: " << name << " called." << endl; }

// give name
string UniversityMember::getName() { return name; }
// give id
int UniversityMember::getMemberID() { return memberID; }