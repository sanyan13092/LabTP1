#include <iomanip>
#include <iostream>
#include <string>
#include "baseAbstractClass.hpp"
#include "Child1.hpp"
#include "keeper.hpp"

using namespace std;


int main() {


    std::string s1 = "\n\n1) Show data base\n2) Add\n3) Delete\n4) Recover from file\n5) Edit\n6) Back\n->";
    std::string s2 = "1) Student\n2) Teacher\n3) Administration\n->";

    Keeper K;
    int choose;
    cout << s1;
    cin >> choose;
    int choose1;
    while (true) {
        switch (choose) {
        case 1:


            K.showAll(1);
            K.showAll(2);
            K.showAll(3);


            cout << s1;
            cin >> choose;

            break;

        case 2:

            cout << s2;
            cin >> choose1;
            K.add(choose1);

            cout << s1;
            cin >> choose;
            break;
        case 3:
            cout << s2;
            cin >> choose1;
            K.pullBack(choose1);

            cout << s1;
            cin >> choose;
            break;
        case 4:
            cout << s2;
            cin >> choose1;
            K.loadFromResFile(choose1);

            cout << s1;
            cin >> choose;
            break;

        case 5:
            cout << s2;
            cin >> choose1;
            K.editOne(choose1);

            cout << s1;
            cin >> choose;
            break;

        case 6: {
            exit(0);
            break;}
        default:
            break;
        }
    }
}

