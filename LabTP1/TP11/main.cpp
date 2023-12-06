//Разработать класс Keeper, который реализует контейнер для хранения и обработки объектов. Класс Keeper должен обеспечивать следующие функции: ▪ добавление и удаление производных объектов абстрактного класса Base (базовый класс определяется согласно варианту задания); ▪ полное сохранение себя в файле; ▪ полное восстановление себя из файла.
//Класс ВУЗ хранит данные по студентам, преподавателям и административному персоналу. Для каждого студента определено: ФИО, группа, наименование специальности, текущий курс, средний балл. Для каждого преподавателя определено: ФИО; перечислены группы, которые ведет; предметы, которые преподает. Для административного персонала определено: ФИО, должность, телефон, область ответственности.

#include <iostream>
#include <iomanip>
#include <string>
#include "baseAbstractClass.hpp"
#include "Child1.hpp"
#include "keeper.hpp"

using namespace std;


int main()
{
    std::cout << std::setw(10);

    setlocale(LC_ALL, "russian");

    std :: string s1 = "\n\n1) Show data base\n2) Add\n3) Delete\n4) Recover from file\n6) Back\n->";
    std :: string s2 = "1) Student\n2) Teacher\n3) Administration\n->";
    
    Keeper K;
    int choose;
    cout << s1;
    cin >> choose;
    int choose1;
    while(true)
    {
        switch (choose) 
        {
            case 1:
                
                
                K.showAll(1);
                K.showAll(2);
                K.showAll(3);
                
                
                cout << s1;
                cin >> choose;
                
                break;
                
            case 2:
             
                cout << s2 ;
                cin >> choose1;
                K.add(choose1);
                
                cout << s1;
                cin >> choose;
                break;
            case 3:
                cout << s2 ;
                cin >> choose1;
                K.pullBack(choose1);
                
                cout << s1;
                cin >> choose;
                break;
            case 4:
                cout << s2 ;
                cin >> choose1;
                K.loadFromResFile(choose1);
                
                cout << s1;
                cin >> choose;
                break;
            case 6:
            {
                ofstream f("STUDENT.txt");
                ofstream f1("TEACHER.txt");
                ofstream f2("ADMIN.txt");
                f.close();
                f1.close();
                f2.close();
                break;
                break;
            }
            default:
                break;
        }
    }
}

