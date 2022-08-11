//
// Created by Admin on 2022/4/13.
//

#ifndef PERSON_H
#define PERSON_H

/*关于构造函数、析构函数以及拷贝构造函数的调用规则
 * 1.C++编译器会自动给程序生成以下三种函数
 * （1）构造函数（无参）
 * （2）析构函数（无参）
 * （3）拷贝构造函数（值拷贝）
 * 2.若程序只创建了有参的构造函数，则编译器不会自动创建无参的构造函数，但是仍会创建无参的析构函数和值拷贝的拷贝构造函数
 * 3.若程序只创建了拷贝构造函数，则编译器不会自动创建构造函数和析构函数
 * */
class Person
{
public:
    Person();
    Person(int age);
    ~Person();
    Person(const Person &obj);
    int m_age;
};
void doWork(Person p);
Person doWork2();
#endif //PERSON_H
