//mytime2.h -- Time class after operator overloading
#ifndef MYTIME2_H_
#define MYTIME2_H_

/*
重载限制：
    1.重载后的运算符必须至少有一个操作数是用户定义的类型，防止用户为标准类型重载运算符
    2.使用运算符时不能违反运算符原来的语法规则，例如，不能将%重载成一个使用一个操作数。同样，不能修改运算符的优先级
    3.不能创建新运算符，如operator**来表示求幂
    4.不能重载的运算符：
        sizeof
        .   成员运算符
        .*  成员指针运算符
        ::  作用域解析运算符
        ?:  条件运算符
        typeid 一个RTTI运算符
        const_cast 强制类型转换运算符
        dynamic_cast
        reinterpret_cast
        static_cast
    5.大多数运算符可以通过成员或非成员函数进行重载，但以下运算符只能通过成员函数进行重载：
        =
        ()
        []
        ->
    6.可重载的运算符：
        + - * / % ^ & | ~= ! = < > += -= *= /= %= ^= &= |= << >> >>= <<= == != <= >= && || ++ -- , ->* -> () [] new delete new[] delete[]
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
    void Show() const;
};


#endif // MYTIME2_H_
