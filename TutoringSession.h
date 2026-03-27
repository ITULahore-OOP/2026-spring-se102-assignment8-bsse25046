#ifndef TUTORINGSESSION_H
#define TUTORINGSESSION_H
#include "Student.h"
#include "TeachingAssistant.h"

// session class
class TutoringSession
{
    int sessionID;
    double durationMinutes;
    // pointers
    TeachingAssistant *ta;
    Student *student;

public:
    // start session
    TutoringSession(int sessionID, double durationMinutes, TeachingAssistant *ta, Student *student);
    double getDuration();
    void displaySession();
    // add sessions
    TutoringSession operator+(const TutoringSession &other);
};

// compare sessions
bool operator>(TutoringSession s1, TutoringSession s2);

#endif