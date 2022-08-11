//
// Created by Admin on 2022/4/10.
//

#ifndef LINE_H
#define LINE_H

class line
{
    public:
        void setLength(double len);
        double getLength();
        line(int len);  //这是构造函数
        ~line(void); //析构函数
        line(const line &obj); //拷贝构造函数，一般的（即默认）拷贝构造函数，完成的是值拷贝（浅拷贝）
                                //如果含有指针指向的值，仅通过值拷贝，当拷贝的对象释放堆空间时，原本的对象释放堆空间时会再次释放指针指向的空间，出现重复释放空间的现象，出现错误。
                                //需要通过创建拷贝构造函数进行深拷贝，即对指针指向的对象在堆中分配一个新的地址空间去存储，即可以解决该问题

    private:
        double length;
        int *ptr;  //指针指向的对象需要new出来，会在堆空间分配
};

// void display(const line &line);
void display(line line);
#endif //LINE_H
