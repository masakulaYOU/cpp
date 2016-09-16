//stone1.cpp -- user-defined conversion function
#include <iostream>
#include "stonewt1.h"

int main()
{
    using std::cout;
    Stonewt poppins(9,2.8);
    double p_wt = poppins;
    cout<<"Convert to double => ";
    cout<<"Poppins: " << p_wt << " pounds.\n";
    cout<<"Convert to int => ";
    cout<<"Poppins: "<<int(poppins) << " pounds.\n";

    return 0;
}

/*
转换函数可能在用户不希望进行转换时，发生了转换。
原则上说，最好使用显式转换，避免隐式转换
C++11中，可将转换运算符声明为显式：
    class Stonewt
    {
        ...
        //conversion function
        explicit operator int() const;
        explicit operator double() const;
    };
    有了这些声明后，需要强制转换时将调用这些运算符
另一种方法是用一个功能相同的非转换函数即可，但仅在被显式调用时，该函数才会执行
    int Stonewt::operator int() {return int (pounds + 0.5);}
    替换为
    int Stonewt::Stone_to_Int(){return int(pounds+0.5);}

总之，C++为类提供了如下的类型转换：
    只有一个参数的类构造函数用于将类型与该参数相同的值转换为类类型。
    被称为转换函数的特殊类成员运算符函数。  operator typeName()
*/
