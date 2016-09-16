//usestock10.cpp -- using the Stock class
//version 10
#include <iostream>
#include "stock10.h"

int main()
{
    {
        using std::cout;
        cout<<"Using constructor to create new objects\n";
        Stock stock1("NanoSmart", 12, 20.0);
        stock1.show();
        Stock stock2 = Stock("Boffo Objects", 2, 2.0);
        /*
            初始化，可能会创建临时对象（也可能不会）
        */
        /*
            Stock hot_hip = {"Derivatives Plus Plus", 100, 45.0};
            Stock jock{"Sport Age Storage, Inc"};
            Stock temp{};

            第二条等价于 Stock jock("Sport Age Storage, Inc", 0, 0.0);
            第三条等价于默认构造函数创建的对象
        */
        stock2.show();

        cout<<"Assigning stock1 to stock2:\n";
        stock2 = stock1;
        /*
            在默认情况下，讲一个对象赋给同类型的另一个对象时，C++将源对象的每个数据成员的内容复制到目标对象中相应的数据成员中
        */
        cout<<"Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();

        cout<<"Using a constructor to reset an object\n";
        stock1 = Stock("Nifty Foods", 10, 50.0);   //temp object
        /*
            通过让构造函数创建一个新的、临时的对象，然后将其内容复制到stock1
            赋值语句，赋值语句中使用构造函数总会导致在赋值前创建一个临时对象
        */
        cout<<"Revised stock1:\n";
        stock1.show();
        cout<<"Done.\n";
    }
    /*
        自动变量被存储在栈中，因此最后创建的对象将最先被删除
    */

    return 0;
}
