#ifndef Child1_hpp
#define Child1_hpp

#include <stdio.h>
#include <string>
#include "baseAbstractClass.hpp"


class STUDENT : public BASE
{
public:
    STUDENT();//Конструктор пустой
    STUDENT(std:: string name1,std:: string surname1, std:: string fathername1, std::string group1,std:: string speciality1, std::string course1, std::string averagScore1);
    STUDENT(int n);//Конструктор 
    
    void showOne() override;
public:
    std :: string name;
    std :: string surname;
    std :: string fathername;
    std::string group;
    std::string course;
    std::string averagScore;
    std :: string speciality;
};
#endif /* Child1_hpp */
