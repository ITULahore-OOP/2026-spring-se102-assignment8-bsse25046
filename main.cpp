#include <iostream>
#include "UniversityMember.h"
#include "AccessCard.h"
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"
#include "Department.h"

using namespace std;

int main()
{
    // make cards
    AccessCard c1("bsse25046", 1);
    AccessCard c2("bsse22007", 2);

    // make people
    Staff staff1("A", 1, 345.999, c1);
    Student student1("B", 2, 3.5);
    TeachingAssistant Ta1("C", 3, 3.8, 234.999, c2, 6);

    // make sessions
    TutoringSession sess1(123, 59.9, &Ta1, &student1);
    TutoringSession sess2(321, 29.9, &Ta1, &student1);

    // make department
    Department d1("Engineering");

    // poly pointers
    UniversityMember *ptr1 = &staff1;
    UniversityMember *ptr2 = &student1;
    UniversityMember *ptr3 = &Ta1;

    cout << "\n\t----Aggregation in Department----\n";
    cout << "Storing all university members in members array of department object....\n";

    // add to department
    d1.addMember(&staff1);
    d1.addMember(&student1);
    d1.addMember(&Ta1);

    cout << "\n\t----Displaying roles in department----\n";
    d1.displayAllRoles();

    cout << "\n\t----Run Time Polymorphism----\n";
    // call virtual functions
    ptr1->displayRole();
    ptr2->displayRole();
    ptr3->displayRole();

    cout << "\n\t----Compile Time Polymorphism----\n";
    // call overloads
    Ta1.gradeAssignment("A-");
    Ta1.gradeAssignment(92);

    cout << "\n\t----Operator Overloading (TutoringSession)----\n";
    cout << "First Tutoring Session time: " << sess1.getDuration() << endl;
    cout << "Second Tutoring Session time: " << sess2.getDuration() << endl;

    // test plus operator
    cout << "Combined Time (Adding both sessions): " << (sess1 + sess2).getDuration() << endl;

    cout << "\n\t----Non Member Operator Overloading----\n";
    cout << "Condition checking: session1 > session2 ?\n";

    // test > operator
    if (sess1 > sess2)
        cout << "True\n";
    else
        cout << "False\n";

    cout << "\n\t----End of main()----\n";
    return 0;
}