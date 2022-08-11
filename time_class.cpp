//
// Created by Admin on 2022/4/7.
//
#include "time_class.h"
#include <cstdio>
#include <ctime>
#include <iostream>
#include <limits>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int timeFunc()
{
    // time_t seconds;
    // seconds = time(NULL);
    // printf("自 1970-01-01 起的小时数 = %ld\n", seconds);

    time_t now = time(0); //传入 0 或 NULL一样的效果
    //把now转换为字符串形式
    char* dt = ctime(&now);

    cout <<"本地日期和时间" << dt << endl;

    //把now转换为 tm 结构
    tm* gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC 日期和时间：" << dt << endl;
    return 0;
}

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int structFunc(){
    Books book1;
    Books book2;

    strcpy(book1.title, "C++ 教程");
    strcpy(book1.author, "Runoob");
    strcpy(book1.subject, "编程语言");
    book1.book_id = 12345;

    strcpy(book2.title, "CSS 教程");
    strcpy(book2.author, "Runoob");
    strcpy(book2.subject, "前端技术");
    book2.book_id = 12346;

    printBook(&book1);
    printBook(&book2);

    return 0;
}
void printBook( struct Books *book){
    cout << "书标题：" << book->title << endl;
    cout << "书作者：" << book->author << endl;
    cout << "书类目：" << book->subject << endl;
    cout << "书 ID：" << book->book_id << endl;
}

void charFunc(){
    //1：两个字符数组
    char arr1[] = "Runoob\0";
    char *arr2 = new char[10];

    // 两个字符数组，一个strcpy到另一个，后续步骤相同
    // strcpy(arr2, arr1);
    // cout << "arr1:" << arr1 << endl;
    // cout << "arr2:" << arr2 << endl;
    // arr2[0] = 'D';
    // cout << "arr1:" << arr1 << endl;
    // cout << "arr2:" << arr2 << endl;

    // 一个直接赋值给另一个，修改其中任意一个数组里面的字符（数组下标访问修改），再分别输出两个数组的内容
    // char arr1[] = "Runoob\0";
    // char *arr2;
    // arr2 = arr1;
    // arr1[0] = 'D';
    // cout << "arr1:" << arr1 << endl;
    // cout << "arr2:" << arr2 << endl;
}

double vals[] = {11.2, 3.4, 23.5, 67,3, 9.2, 9.0};
int citeRetFunc(){
    cout << "改变前的值：" << endl;
    for (int i = 0; i < 6; ++i)
    {
        cout << "vals[" << i << "] = " << vals[i] << endl;
    }
    setValue(1) = 33.2;
    setValue(4) = 55.2;
    cout << "改变后的值：" << endl;
    for (int i = 0; i < 6; ++i)
    {
        cout << "vals[" << i << "] = " << vals[i] << endl;
    }
    return 0;
}

double& setValue(int i){
    double& ref = vals[i];
    return ref;
}

int citeFunc(){
    int x = 100, y = 200;
    cout << "x:" << x << ",y:" << y << endl;
    swap(x, y);
    cout << "x:" << x << ",y:" << y << endl;
    return 0;
}
int swap(int& x, int& y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    return 0;
}

int useCite(){
    int i;
    double d;

    int& r = i;
    double& s = d;

    i = 5;
    cout << "i: " << i << endl;
    cout << "引用i的值：" << r << endl;

    d = 11.7;
    cout << "d: " << d << endl;
    cout << "引用d的值：" << s << endl;
    return 0;
}
int * getRandom(){
    static int r[10];

    srand((unsigned )time(NULL));
    for (int i = 0; i < 10; ++i)
    {
        r[i] = rand();
        cout << r[i] << endl;
    }
    return r;
}

double getAverage(int *arr, int size){
    int i,sum = 0;
    double avg;

    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    avg = double(sum)/size;

    return avg;
}

void getSeconds(unsigned long *par){
    *par = time( NULL );
    return;
}

int typeFun()
{
    cout << "type: \t\t" << "************size**************"<< endl;
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
    cout << "\t最大值：" << (numeric_limits<bool>::max)();
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
    cout << "char: \t\t" << "所占字节数：" << sizeof(char);
    cout << "\t最大值：" << (numeric_limits<char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
    cout << "short: \t\t" << "所占字节数：" << sizeof(short);
    cout << "\t最大值：" << (numeric_limits<short>::max)();
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
    cout << "int: \t\t" << "所占字节数：" << sizeof(int);
    cout << "\t最大值：" << (numeric_limits<int>::max)();
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
    cout << "long: \t\t" << "所占字节数：" << sizeof(long);
    cout << "\t最大值：" << (numeric_limits<long>::max)();
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
    cout << "double: \t" << "所占字节数：" << sizeof(double);
    cout << "\t最大值：" << (numeric_limits<double>::max)();
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
    cout << "long double: \t" << "所占字节数：" << sizeof(long double);
    cout << "\t最大值：" << (numeric_limits<long double>::max)();
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
    cout << "float: \t\t" << "所占字节数：" << sizeof(float);
    cout << "\t最大值：" << (numeric_limits<float>::max)();
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;
    cout << "type: \t\t" << "************size**************"<< endl;
    return 0;
}

int count1 = 10;

void func(void)
{
    static int i = 5;
    i++;
    cout << "i为" << i;
    cout << "，count为" << count1 << endl;
}

int buildTwoDimensionArray()
{
    vector< vector<int> > arry;
    vector<int> d;
    int i, j, k, n;
    int number;

    scanf("%d", &n);
    // 可以实现对vector二维的初始化，得到的是n行n列的矩阵
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            scanf("%d", &number);
            d.push_back(number);
        }
        sort( d.begin(), d.end());  //排序需要头文件algorithm
        arry.push_back(d);
        d.resize(0);
    }

    // 遍历输出
    if (arry.empty())
        printf("0/n");
    else{
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                printf("%d ", arry[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

int strg()
{
    char site[7] = {'R','U','N','O','O','B','\0'};
    char site2[] = "RUNOOB";
    cout << "菜鸟教程";
    cout << site << endl;
    cout << site2 << endl;

    string str1 = "kim";
    string str2 = "confident";

    cout << str1 +" "+ str2 << endl;

    cout << site2 << "的长度：" << strlen(site2) << endl; //strlen用于单个字符char
    cout << str2 + "的长度：" << str2.size() << endl;
    return 0;
}
/**
 * @brief C++指针学习
 * @return
 */
const int MAX = 3;
int cpointer(){

    int var1 = 0;
    char var2[10];
    int *ip;
    ip = &var1;

    cout << "var1 的内存地址： ";
    cout << &var1 << endl;

    cout << "var2 的内存地址： ";
    cout << &var2 << endl;

    cout << "var1 的内存地址：";
    cout << ip << endl;

    cout << "var1 的值：";
    cout << *ip << endl;

    int var[MAX] = {20, 100, 200};
    int *ptr;
    ptr = var;
    for (int i = 0; i < MAX; ++i)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;

        cout <<"Value of var[" << i <<"] = ";
        cout << *ptr << endl;

        ptr++;
    }
    return 0;
}

const int MAXX = 4;

int cpointerArray(){
    const char *names[MAXX] = {
        "Zara Ali",
        "Hina Ali",
        "Nuha Ali",
        "Sara Ali",
    };

    for (int i = 0; i < MAXX; i++)
    {
        cout << "Value of names[" << i << "] = ";
        cout << names[i] << endl;
    }
    return 0;
}

int pointCom(){
    const char *str = "Something";
    cout << "str: " << str << endl;

    const char str2[] = "Something";
    cout << "str2: " << str2 << endl;

    const char *str3[] = {"Something"};
    cout << "str3: " << str3 << endl;

    const char *str4[] = {"Something"};
    cout << "str4[0]: " << str4[0] << endl;

    const int a[] = {1,2,3};
    cout << "a: " << *a << endl;

    const char b[] = {'S','o','m', 'e', 't', 'h', 'i', 'n', 'g', '\0'};
    cout << "b: " << b << endl;
    return 0;
}
