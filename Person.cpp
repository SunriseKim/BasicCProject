//
// Created by Admin on 2022/4/13.
//
#include <iostream>
#include "Person.h"

using namespace std;

Person::Person()
{
    cout << "Person默认构造函数调用" << endl;
}
Person::Person(int age)
{
    cout << "Person有参构造函数调用" << endl;
    m_age = age;
}
Person::~Person()
{
    cout << "Person析构函数调用" << endl;
}
Person::Person(const Person &obj)
{
    cout << "Person拷贝构造函数调用" << endl;
    m_age = obj.m_age;
}
void doWork(Person p){
    cout << "p的传递" << endl;
}

Person doWork2(){
    Person p(18);
    return p;
}