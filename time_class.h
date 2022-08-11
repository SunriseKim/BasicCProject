//
// Created by Admin on 2022/4/7.
//

#ifndef TIME_CLASS_H
#define TIME_CLASS_H

int timeFunc();
void func(void); //全局变量
int typeFun();   //数据类型的大小
int buildTwoDimensionArray();   //创建二维数组
int strg(); //字符串
int cpointer(); //指针
int cpointerArray(); //指向数组的指针
int pointCom(); //指针问题的比较
void getSeconds(unsigned long *par); //传递指针给函数
double getAverage(int *arr, int size); //指针作为参数的函数，接受数组作为参数。
int * getRandom(); //获取随机数数组，采用指针返回
int useCite(); //使用引用
int citeFunc(); //引用调用函数
int swap(int& x, int& y); //交换x,y的值
int citeRetFunc();
double& setValue(int i);
int structFunc();
void printBook( struct Books *book);
void charFunc();

#endif //TIME_CLASS_H
