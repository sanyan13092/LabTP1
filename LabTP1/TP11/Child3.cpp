#include "Child3.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

ADMIN::ADMIN()
{
  
}

ADMIN::ADMIN(int n)
{
    cout << "Input SURNAME, NAME, PATRONYMIC\n->";
    cin >> name;
    cin >> surname;
    cin >> fathername;
    cout << "Input POSITION, NUMBER, AREA OF RESPONSIBILITY\n->";
    cin >> dolgnost;
    cin >> number;
    cin >> oblast;
    
}


ADMIN:: ADMIN(std:: string name1,std:: string surname1, std:: string fathername1,std :: string dolgnost1,std :: string number1, std :: string oblast1)
{
    
    name = name1;
    surname = surname1;
    fathername = fathername1;
    dolgnost = dolgnost1;
    oblast = oblast1;
    number = number1;
    
}
void ADMIN::showOne ()
{
    cout << setw(18) << left << name << setw(18) << left << surname << setw(18) << left << fathername << setw(21) << left << dolgnost << setw(18) << left <<number << setw(25) << left <<oblast << "\n";
}


