#include <iostream>
#include <cstdio>
#include "time_class.h"
#include "box.h"
#include "line.h"
#include "Person.h"

using namespace std;

int main()
{
    // typeFun();
    // cout << "Hello, World!" << "\n";
    // return 0;

    // while(count1--)
    // {
    //     func();
    // }

    // buildTwoDimensionArray();

    // strg();

    // cpointer();

    // cpointerArray();

    // pointCom();

    // unsigned long sec;
    // getSeconds(&sec);
    // cout << "Number of seconds: " << sec << endl;

    // int balance[5] = {1000, 2, 3, 17, 50};
    // double avg = getAverage(balance, 5);
    // cout << "数组的平均值为：" << avg << endl;

    // int *p;
    // p = getRandom();
    // for (int i = 0; i < 10; ++i)
    // {
    //     cout << "*(p+" << i << "): ";
    //     cout << *(p+i) << endl;
    // }

    // useCite();

    // citeFunc();

    // citeRetFunc();

    // timeFunc();

    // structFunc();

    // makeBox();

    //拷贝构造函数
    // line line1(10);
    // line1.setLength(12);
    // cout << "Length of line: " << line1.getLength() << endl;
    // display(line1);



    // 通过使用另一个同类型的对象来初始化新创建的对象。
    // Person p1(20);
    // Person p2(p1);
    // cout << "p2的年龄：" << p2.m_age << endl;
    // 复制对象把它作为参数传递给函数。
    // doWork(p1);
    // 复制对象，并从函数返回这个对象。
    // Person p3 = doWork2();
    // cout << "p3的年龄：" << p3.m_age << endl;


    //友元函数
    // box box;
    // box.setSize(10.5);
    // printBoxSize(box);  //友元函数
    // big_box bigBox;
    // bigBox.print(12.4, box);  //友元类

    //this指针
    box box1(10,20,30);
    box box2(20,5,25);
    cout << "总的对象数：" << box::sumObj << endl;

    box* ptrbox;
    ptrbox = &box1;
    cout << "box1的体积：" << ptrbox->volume() << endl;
    ptrbox = &box2;
    cout << "box2的体积：" << ptrbox->volume() << endl;

    if (box1.compare(box2)){
        cout << "box1 体积大于 box2" << endl;
    }
    else{
        cout << "box1 体积小于 box2" << endl;
    }
    return 0;
}


