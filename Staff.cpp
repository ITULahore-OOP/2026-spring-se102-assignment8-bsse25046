#include "Staff.h"

// set staff details
Staff::Staff(string name, int memberID, double salary, AccessCard card) : UniversityMember(name, memberID), salary(salary), card(card) {}

// get money
double Staff::getSalary() { return salary; }

// show role
void Staff::displayRole() { cout << "Role: Staff\n"; }

// show card
void Staff::displayCard() { card.displayCardInfo(); }