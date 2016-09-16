//mytime3.h -- Time class with friends
#ifndef MYTIME3_H_
#define MYTIME3_H_
#include <iostream>
/*
友元：
C++控制对类对象私有部分的访问，公有类方法提供唯一访问的途径，还有另一种方式访问权限，成为友元。友元有3种:
    友元函数
    友元类
    友元成员函数
通过让函数成为类的友元，可以赋予该函数与类的成员函数相同的访问权限
在为类重载二元运算符时，常常需要友元

创建友元：
    将原型放在类声明中，并在原型声明前添加关键字friend
    friend Time operator*(double n, const Time & t)；
    - 虽然operator*()函数是在类声明中声明的，但它不是成员函数，因此不能使用成员运算符来调用
    - 虽然operator*()函数不是成员函数，但是它与成员函数的访问权限相同
    编写定义，由于不是成员函数，因此不需要使用Time::限定符，另外，不要在定义中使用关键字friend
    Time operator*(double n, const Time & t)
    {
        Time result;
        long totalminutes = t.hours * n * 60 + t.minutes * n;
        result.hours = totalminutes/60;
        result.minutes = totalminutes%60;

        return result;
    }
    A = 2.75 * B 将转换成 A = operator*(2.75,B);

重载<<运算符

*/
class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time operator+(const Time & t)const;
    Time operator-(const Time & t)const;
    Time operator*(double n)const;
    friend Time operator*(double n, const Time & t){return t*n;}
    friend std::ostream & operator<<(std::ostream & os, const Time & t);
};




#endif // MYTIME3_H_
