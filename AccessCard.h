#ifndef ACCESSCARD_H
#define ACCESSCARD_H
#include <iostream>
#include <string>

using namespace std;

// card for staff
class AccessCard
{
    string cardID;
    int accessLevel;

public:
    // make card
    AccessCard(string cardID, int accessLevel);
    string getCardID();
    int getAccessLevel();
    // show card details
    void displayCardInfo();
};

#endif