#include "AccessCard.h"

// save card info
AccessCard::AccessCard(string cardID, int accessLevel) : cardID(cardID), accessLevel(accessLevel) {}

// return id
string AccessCard::getCardID() { return cardID; }
// return level
int AccessCard::getAccessLevel() { return accessLevel; }

// print card
void AccessCard::displayCardInfo()
{
    cout << "Card ID: " << cardID << endl;
    cout << "Access Level: " << accessLevel << endl;
}