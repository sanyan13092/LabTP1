#include "keeper.hpp"
#include "baseAbstractClass.hpp"
#include "Child1.hpp"
#include "Child2.hpp"
#include "Child3.hpp"
#include <iostream>
#include <iomanip>
#include <exception>
using namespace std;


//Конструктор

Keeper::Keeper() {

}

//Добавить

void Keeper::add(int n) {
    this->loadFromFile(n);
    switch (n) {
    case 1: {



        STUDENT S(1);

        studArr[sizeS] = S;
        sizeS++;
        cout << "\n\n\n";
        studArr[sizeS].showOne();
        cout << "\n\n\n";
        this->saveInFile(1);
        this->showAll(1);
        break;
    }
    case 2: {



        TEACHER T(1);

        teachArr[sizeT] = T;
        sizeT++;
        cout << "\n\n\n";
        teachArr[sizeT].showOne();
        cout << "\n\n\n";
        this->saveInFile(2);
        this->showAll(2);
        break;
    }

    case 3: {



        ADMIN A(1);

        adArr[sizeA] = A;
        sizeA++;
        cout << "\n\n\n";
        adArr[sizeA].showOne();
        cout << "\n\n\n";
        this->saveInFile(3);
        this->showAll(3);
        break;
    }
    default:
        break;
    }

}

//Удалить
template <typename T>
void Keeper::pull(int size, T* arr, int n) {
    int n1;
    
    cout << "Input number:\n->";
    cin >> n1;
    for (int i = n1; i < size; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    this->saveInFile(n);
    this->showAll(n);
};




void Keeper::editOne(int n) {
    switch (n) {

    case 1: {
        this->Edit(sizeS + 1, studArr, 1);
        break;
    }
    case 2: {
        this->Edit(sizeT + 1, teachArr, 2);

        break;
    }
    case 3: {
        this->Edit(sizeA + 1, adArr, 3);
        break;
    }
    }

}



template <typename T>
void Keeper::Edit(int size, T* arr, int n) {
    int n1;
    
    cout << "Input number:\n->";
    cin >> n1;

    this->loadFromFile(n);
    switch (n) {
    case 1: {

        STUDENT S(1);
        studArr[n1] = S;
        break;
    }
    case 2: {

        TEACHER T1(1);

        teachArr[n1] = T1;
        break;
    }
    case 3: {

        ADMIN A(1);

        adArr[n1] = A;
        break;
    }
    default:
        break;
    }

    this->saveInFile(n);
    this->showAll(n);

}


void Keeper::pullBack(int n) {
    this->loadFromFile(n);
    switch (n) {
    case 1: {
        sizeS--;
        this->pull(sizeS + 1, studArr, 1);
        break;
    }
    case 2: {
        sizeT--;
        this->pull(sizeT + 1, teachArr, 2);

        break;
    }
    case 3: {
        sizeA--;
        this->pull(sizeA + 1, adArr, 3);
        break;
    }
    }

}

//полное сохранение себя в файле
void Keeper::saveInFile(int n) {
    switch (n) {
    case 1: {
        ofstream file("STUDENT.txt", ofstream::trunc);
        for (int i = 0; i < sizeS; i++) {
            file << studArr[i].name << "\t\t" << studArr[i].surname << "\t\t" << studArr[i].fathername << "\t\t" << studArr[i].group << "\t\t" << studArr[i].speciality << "\t\t" << studArr[i].course << "\t\t" << studArr[i].averagScore << "\n";
        }
        
        cout << "Data was saved in file\n";
        file.close();
        break;

    }
    case 2: {
        ofstream file1("TEACHER.txt", ofstream::trunc);
        for (int i = 0; i < sizeT; i++) {
            file1 << teachArr[i].name << "\t\t" << teachArr[i].surname << "\t\t" << teachArr[i].fathername << "\t\t" << teachArr[i].group << "\t\t" << teachArr[i].predmet << "\n";
        }
        
        cout << "Data was saved in file\n";
        file1.close();
        break;
    }

    case 3: {
        ofstream file1("ADMIN.txt", ofstream::trunc);
        for (int i = 0; i < sizeA; i++) {
            file1 << adArr[i].name << "\t\t" << adArr[i].surname << "\t\t" << adArr[i].fathername << "\t\t" << adArr[i].dolgnost << "\t\t" << adArr[i].number << "\t" << adArr[i].oblast << "\n";
        }
        
        cout << "Data was saved in file\n";
        file1.close();
        break;
    }

    }

}

//восстановление себя из файла.
void Keeper::loadFromFile(int n) {


    switch (n) {
    case 1: {
        //Вспомогательные переменные

        std::string name1;
        std::string surname1;
        std::string fathername1;
        std::string group1;
        std::string course1;
        std::string averagScore1;
        std::string speciality1;
        ifstream file("STUDENT.txt");
        for (int i = 0; i < sizeS; i++) {
            file >> name1 >> surname1 >> fathername1 >> group1 >> speciality1 >> course1 >> averagScore1;
            STUDENT S(name1, surname1, fathername1, group1, speciality1, course1, averagScore1);
            studArr[i] = S;
        }

        file.close();

        break;

    }

    case 2: {
        //Вспомогательные переменные

        std::string name1;
        std::string surname1;
        std::string fathername1;
        std::string group1;
        std::string predmet1;
        ifstream file("TEACHER.txt");
        for (int i = 0; i < sizeT; i++) {
            file >> name1 >> surname1 >> fathername1 >> group1 >> predmet1;
            TEACHER T(name1, surname1, fathername1, group1, predmet1);
            teachArr[i] = T;
        }

        file.close();


        break;

    }

    case 3: {
        //Вспомогательные переменные

        std::string name1;
        std::string surname1;
        std::string fathername1;
        std::string dolgnost1;
        std::string oblast1;
        std::string  number1;
        ifstream file2("ADMIN.txt");
        for (int i = 0; i < sizeA; i++) {
            file2 >> name1 >> surname1 >> fathername1 >> dolgnost1 >> number1 >> oblast1;
            ADMIN A(name1, surname1, fathername1, dolgnost1, number1, oblast1);
            adArr[i] = A;
        }

        file2.close();

        break;

    }


    default:
        break;
    }

    //this->showAll();
}


void fromFileToFile(string inputFile, string outputFile) {
    std::string line;
    fstream file(inputFile);
    ofstream file1(outputFile);
    while (getline(file, line)) { // Читаем строки из входного файла
        file1 << line << std::endl;    // Записываем строки в выходной файл
        cout << line << endl;
    }

    file.close();
    file1.close();
}


//полное восстановление себя из файла.
void Keeper::loadFromResFile(int n) {
    string inputFile = "";
    string outputFile = "";

    switch (n) {
    case 1: {
        string inputFile = "STUDENT_res.txt";
        string outputFile = "STUDENT.txt";

        fromFileToFile(inputFile, outputFile);

        this->size(n);
        break;
    }

    case 2: {

        string inputFile = "TEACHER_res.txt";
        string outputFile = "TEACHER.txt";

        fromFileToFile(inputFile, outputFile);

        this->size(n);
        break;

    }

    case 3: {
        string inputFile = "ADMIN_res.txt";
        string outputFile = "ADMIN.txt";

        fromFileToFile(inputFile, outputFile);

        this->size(n);
        break;

    }


    }


}


template <typename T>
void Keeper::show(int size, T* arr, int n) {
    switch (n)
    {
    case 1:
        cout << "____________________________________________________________________________________________________________________________" << "\n";
        cout << setw(65) << right << "STUDENT" << "\n";
        cout << "____________________________________________________________________________________________________________________________" << "\n";
        cout << "#" << "\t" << setw(18) << left << "SURNAME" << setw(18) << left << "NAME" << setw(18) << left << "PATRONYMIC" << setw(10) << left << "GROUP" << setw(21) << left << "SPECIALIZATION" << setw(14) << left << "COURCE" << setw(14) << left << "AVERAGE SCORE" << "\n";
        cout << "____________________________________________________________________________________________________________________________" << "\n";
        break;
    case 2:
        cout << "____________________________________________________________________________________________________________________________" << "\n";
        cout << setw(65) << right << "TEACHER" << "\n";
        cout << "____________________________________________________________________________________________________________________________" << "\n";
        cout << "#" << "\t" << setw(18) << left << "SURNAME" << setw(18) << left << "NAME" << setw(18) << left << "PATRONYMIC" << setw(10) << left << "GROUP" << setw(21) << left << "SUBJECT" << "\n";
        cout << "____________________________________________________________________________________________________________________________" << "\n";
        break;
    case 3:
        cout << "____________________________________________________________________________________________________________________________" << "\n";
        cout << setw(65) << right << "ADMINISTRATION" << "\n";
        cout << "____________________________________________________________________________________________________________________________" << "\n";
        cout << "#" << "\t" << setw(18) << left << "SURNAME" << setw(18) << left << "NAME" << setw(18) << left << "PATRONYMIC" << setw(21) << left << "POSITION" << setw(18) << left << "NUMBER" << setw(25) << left << "AREA OF RESPONSIBILITY" << "\n";
        cout << "____________________________________________________________________________________________________________________________" << "\n";

        break;
    }
    for (int i = 0; i < size; i++) {
        cout << i << "\t";
        arr[i].showOne();
    }
    cout << "____________________________________________________________________________________________________________________________" << "\n";
    cout <<"\n" << "\n" << "\n" << "\n";
}


void Keeper::showAll(int n) {
    this->loadFromFile(n);
    switch (n) {
    case 1:
        this->show(sizeS, studArr, 1);
        break;
    case 2:
        this->show(sizeT, teachArr, 2);
        break;
    case 3:
        this->show(sizeA, adArr, 3);
        break;
    default:
        break;
    }
}


int GetFileSize(const std::string& filename) {
    std::ifstream file(filename);  // Открываем файл для чтения
    std::string line;
    int size = 0;

    if (file.is_open()) {  // Проверяем, удалось ли открыть файл
        while (std::getline(file, line)) {
            size++;  // Увеличиваем счетчик для каждой строки
        }
        file.close();  // Закрываем файл
    }
    else {
        std::exception(error);
        
        std::cout << "Can not open file\n";
        throw error;
    }

    return size;
}

int Keeper::size(int n) {

    switch (n) {
    case 1: {
        return GetFileSize("STUDENT.txt");
    }
    case 2: {

        return GetFileSize("TEACHER.txt");
    }
    case 3: {
        return GetFileSize("ADMIN.txt");
    }
    case 4: {
        return GetFileSize("STUDENT_res.txt");
    }
    case 5: {
        return GetFileSize("TEACHER_res.txt");
    }
    case 6: {
        return GetFileSize("ADMIN_res.txt");
    }
    default:
        return 0;
    }
}