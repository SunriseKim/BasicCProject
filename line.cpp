//
// Created by Admin on 2022/4/10.
//
#include <iostream>
#include "line.h"
using namespace std;

line::line(int len)
{
    cout << "Object is being created" << endl;
    length = len;
    ptr = new int;
    *ptr = len;
}

line::~line()
{
    cout << "Object is being deleted" << endl;
    if (ptr != NULL){
        delete ptr;
        ptr = NULL;
    }
}

line::line(const line &obj)
{
    cout << "调用拷贝构造函数并为指针ptr分配内存" << endl;
    ptr = new int;
    *ptr = *obj.ptr;
}

void line::setLength(double len)
{
    *ptr = len;
}

double line::getLength()
{
    return *ptr;
}

void display(line line){
    cout << "line的大小：" << line.getLength() << endl;
}