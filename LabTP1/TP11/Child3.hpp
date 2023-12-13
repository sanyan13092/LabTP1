
#ifndef Child3_hpp
#define Child3_hpp

#include <stdio.h>
#include <string>
#include "baseAbstractClass.hpp"

class ADMIN : public BASE {
public:
    ADMIN();//Конструктор пустой
    ADMIN(std::string name1, std::string surname1, std::string fathername1, std::string dolgnost1, std::string  number1, std::string olast1);
    ADMIN(int n);//Конструктор

    void showOne() override;
public:
    std::string name;
    std::string surname;
    std::string fathername;
    std::string dolgnost;
    std::string oblast;
    std::string  number;
};
#endif /* Child3_hpp */
