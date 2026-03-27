#include "TutoringSession.h"

// make session
TutoringSession::TutoringSession(int sessionID, double durationMinutes, TeachingAssistant *ta, Student *student) : sessionID(sessionID), durationMinutes(durationMinutes), ta(ta), student(student) {}

// get time
double TutoringSession::getDuration() { return durationMinutes; }

// print session details
void TutoringSession::displaySession()
{
    cout << "\t---Tutoring Session Info---\n";
    cout << "TA: " << ta->getName() << endl
         << student->getName() << endl;
}

// plus operator overload
TutoringSession TutoringSession::operator+(const TutoringSession &other)
{
    // make temp session
    TutoringSession combined(999, this->durationMinutes + other.durationMinutes, this->ta, this->student);
    return combined;
}

// check which is big
bool operator>(TutoringSession s1, TutoringSession s2) { return s1.getDuration() > s2.getDuration(); }