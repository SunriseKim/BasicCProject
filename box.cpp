//
// Created by Admin on 2022/4/8.
//
#include <iostream>
#include "box.h"
using namespace std;

//初始化类 box 的静态成员
int box::sumObj = 0;

box::box()
{

}
box::box(double l, double b, double h)
{
    length = l;
    breadth = b;
    height = h;
    sumObj++;
}
double box::volume()
{
    return length * breadth * height;
}

void box::setSize(double si)
{
    size = si;
}

void box::set(double len, double bre, double hei)
{
    length = len;
    breadth = bre;
    height = hei;
}

void makebox(){
    box box1;
    box box2;
    box box3;
    double volume = 0;

    box1.length = 12.0;
    box1.height = 5.0;
    box1.breadth = 8.0;

    box2.length = 16.0;
    box2.height = 4.0;
    box2.breadth = 7.0;

    volume = box1.length * box1.height * box1.breadth;
    cout << "box1的体积：" << volume << endl;

    volume = box2.length * box2.height * box2.breadth;
    cout << "box2的体积：" << volume << endl;

    box3.set(4.0,5.0,12.0);
    volume = box3.volume();
    cout << "box3的体积：" << volume << endl;
}
void printBoxSize(box b){
    cout << "盒子的大小" << b.size << endl;
}

int box::compare(box box){
    return this->volume() > box.volume();
}

void big_box::print(double size, box &box)
{
    box.setSize(size);
    cout << "box的大小：" << box.size << endl;
}