#include "Child1.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

STUDENT::STUDENT()
{
  
}

STUDENT::STUDENT(int n)
{
    cout << "Input SURNAME, NAME, PATRONYMIC\n->" ;
    cin >> name;
    cin >> surname;
    cin >> fathername;
    cout << "Input GROUP, SPECIALIZATION, COURCE and AVERAGE SCORE\n->";
    cin >> group;
    cin >> speciality;
    cin >> course;
    cin >> averagScore;
}


STUDENT::STUDENT(std:: string name1,std:: string surname1, std:: string fathername1, std::string group1,std:: string speciality1, std::string course1, std::string averagScore1)
{
    
    name = name1;
    surname = surname1;
    fathername = fathername1;
    group = group1;
    speciality = speciality1;
    course = course1;
    averagScore = averagScore1;
    
}
void STUDENT::showOne ()
{
    cout << setw(18) << left << name << setw(18) << left << surname << setw(18) << left << fathername << setw(10) << left << group << setw(21) << left <<speciality << setw(14) << left <<course << setw(14) << left << averagScore << "\n";
}


