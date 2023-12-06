#include "Child2.hpp"

#include <iostream>
#include <iomanip>
using namespace std;

TEACHER::TEACHER()
{
  
}

TEACHER::TEACHER(int n)
{
    cout << "Input SURNAME, NAME, PATRONYMIC\n->";
    cin >> name;
    cin >> surname;
    cin >> fathername;
    cout << "Input GROUP, SUBJECT\n->";
    cin >> group;
    cin >> predmet;
    
}


TEACHER:: TEACHER(std:: string name1,std:: string surname1, std:: string fathername1,std :: string group1,std :: string predmet1)
{
    
    name = name1;
    surname = surname1;
    fathername = fathername1;
    group = group1;
    predmet = predmet1;
    
}
void TEACHER::showOne ()
{
    cout << setw(18) << left << name << setw(18) << left << surname << setw(18) << left << fathername << setw(10) << left << group << setw(21) << left <<predmet << "\n";
}


