#ifndef STAFF_H
#define STAFF_H
#include "UniversityMember.h"
#include "AccessCard.h"

// staff inherit virtual
class Staff : virtual public UniversityMember
{
    double salary;
    // has a card
    AccessCard card;

public:
    // make staff
    Staff(string name, int memberID, double salary, AccessCard card);
    double getSalary();
    void displayRole() override;
    void displayCard();
};

#endif