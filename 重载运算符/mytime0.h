//mytime0.h -- Time class before operator overloading
#ifndef MYTIME0_H_
#define MYTIME0_H_

/*
运算符重载是一种形式的C++多态，用户能够定义多个名称相同但特征标（参数列表）不同的函数，这被称为函数重载或函数多态
运算符重载将重载的概念扩展到运算符上
C++允许将匀速福重载扩展到用户定义的类型
运算符函数的格式：
    operatorop(argument-list)
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
    Time Sum(const Time & t) const;
    void Show() const;
};


#endif // MYTIME0_H_
