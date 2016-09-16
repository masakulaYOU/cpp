//stock10.h -- Stock class interface
//version 00
#ifndef STOCK10_H_
#define STOCK10_H_

#include <string>

/*
构造函数的成员名和参数名
    构造函数的参数表示的不是类成员，而是赋给类成员的值，因此，参数名不能与类成员相同。
    为了这种混乱，一种常见的做法是在数据成员名中使用m_前缀，另一种做法是成员名中使用后缀_

构造函数的使用:
    显式地调用构造函数：Stock food = Stock("World Cabbage", 250, 1.25);
    隐式地调用构造函数：Stock garment("Furry Mason", 50, 2.5);
    与new关键字一起使用：Stock *pstock = new Stock("Electroshock Games", 18, 19.0);

默认构造函数：
    默认构造函数是在未提供显式初始值时，用来创建对象的构造函数。等价于Stock fluffy_the_cat
    默认的构造函数没有参数，因为声明中不含值
    当且仅当没有定义任何构造函数时，编译器才会提供默认构造函数，为类定义了构造函数后，必须为它提供默认构造函数。
    如果提供了非默认构造函数，但没有提供默认构造函数，Stock stock1这样的声明将出错。
    如果要创建对象，而不显式地初始化，则必须定义一个不接受任何参数的默认构造函数。定义默认后遭函数的方式有两种。
    一种是给已有构造函数的所有参数提供默认值。
        Stock(const string & co = "Error", int n = 0, double pr = 0.0);
    另一种方式是通过重载来定义另一个构造函数--一个没有参数的构造函数。
    以上两种方式只能使用其中一种。
*/

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){ total_val = shares * share_val; }
public:
    Stock();
    Stock(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock();
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    void show();
};
#endif // STOCK00_H_


/*
析构函数：
    用构造函数创建对象后，程序负责跟踪该对象，直到其过期为止，对象过期时，程序将自动调用析构函数。
    析构函数完成清理工作。
    如果构造函数使用new来分配内存，则析构函数将使用delete来释放内存。
    析构函数没有参数
析构函数的调用：
    析构函数的调用时刻由编译器决定，通常不应再代码中显式调用析构函数
    如果创建的是静态存储类对象，则析构函数将在程序结束时被调用
    如果创建的是自动存储类对象，则析构函数将在程序执行完代码块时自动被调用
    如果对象是通过new创建的，则它将驻留在栈内存或自由存储区中，当使用delete来释放内存时，其析构函数将自动被调用
    类对象必须有一个析构函数，若程序员没有提供析构函数，则编译器将隐式地创建一个默认析构函数
*/
