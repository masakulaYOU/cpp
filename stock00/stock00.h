//stock00.h -- Stock class interface
//version 00
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>

/*
类声明格式：
    class className
    {
    private:
        data member declarations
    public:
        member function prototypes
    }
*/

class Stock
{
    /*
    访问控制:
        使用类对象的程序都可以直接访问公有部分，但只能通过公有成员函数来访问对象的私有成员。

    数据隐藏：
        类设计尽可能将公有接口与具体实现分开，公有接口表示设计的抽象组件，将实现细节放在一起并将它们与抽象分开被称为封装。
        数据隐藏是一种封装，将实现的细节隐藏在私有部分中。封装的另一个例子是，将类函数定义和类声明放在不同的文件中。
        数据隐藏不仅可以防止直接访问数据，还可以让开发者无需了解数据是如何被表示的。

    控制成员访问：
        无论类成员是数据成员还是成员函数，都可以在类的公有部分或私有部分中声明它，但由于隐藏数据是OOP主要目标之一，因此数据项通常放在私有部分，组成类接口的成员函数放在公有部分。
    */
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){ total_val = shares * share_val; }
public:
    void acquire(const std::string & co, long n, double pr);
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    void show();
};
#endif // STOCK00_H_
