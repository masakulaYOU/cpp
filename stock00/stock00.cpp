//stock00.cpp -- implementing the Stock class
//version 00
#include <iostream>
#include "stock00.h"
/*
实现类成员函数;
    定义成员函数时，使用作用域解析运算符::来标识函数所属的类
    类方法可以访问类的private组件

作用域解析运算符：
    作用域解析运算符确定了方法定义对应的类的身份
类方法名称：
    完整名称中包括类名，全名的缩写（非限定名）只能在类作用域中使用
*/
void Stock::acquire(const std::string & co, long n, double pr)
{
    company = co;
    if(n < 0)
    {
        std::cout<<"Number of shares can't be negative; "
                 << company <<" shares set to 0.\n";
        shares = 0;
    }
    else shares = n;
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price)
{
    if(num < 0)
    {
        std::cout<<"Number of shares purchased can't be negative. " << " Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if(num < 0)
    {
        cout<<"Number of shares sold can't be negative. "<< "Transaction is aborted.\n";
    }
    else if(num > shares)
    {
        cout<<"You can't sell more than you have! "<<"Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    using std::cout;
    using std::ios_base;
    //set format to #.###
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    std::cout<<"Company: "<< company
    <<"  Shares: "<< shares << '\n'
    <<"  Share Price: $"<< share_val;

    cout.precision(2);
    std::cout<<"  Total Worth: $"<< total_val << '\n';

    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

/*
内联方法：
    其定义位于类声明中的函数都将自动成为内联函数。
    Stock::set_tot()是一个内联函数，类声明通常将短小的成员函数作为内联函数
    也可以在类声明之外定义成员函数，使之成为内联函数，只需在类实现部分中定义函数时使用inline限定符即可

    class Stock
    {
    private:
        ...
        void set_tot();
    public:
        ...
    }

    inline void Stock::set_tot()
    {
        total_val = shares * share_val;
    }

    此方法与stock00.h中的定义方法一样。
*/
