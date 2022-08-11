//
// Created by Admin on 2022/4/8.
//
#ifndef BOX_H
#define BOX_H


class box
{
    double size;
    public:
        double length;
        double breadth;
        double height;
        static int sumObj;

        box();
        box(double l, double b, double h);
        friend void printBoxSize(box b);
        void setSize(double si);
        friend class big_box;
        double volume(void);
        void set(double len, double bre, double hei);
        int compare(box box);
};

class big_box
{
public:
    void print(double size, box &box);
};

void makeBox();
#endif //BOX_H
