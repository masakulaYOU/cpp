//mytime2.h -- Time class after operator overloading
#ifndef MYTIME2_H_
#define MYTIME2_H_

/*
�������ƣ�
    1.���غ�����������������һ�����������û���������ͣ���ֹ�û�Ϊ��׼�������������
    2.ʹ�������ʱ����Υ�������ԭ�����﷨�������磬���ܽ�%���س�һ��ʹ��һ����������ͬ���������޸�����������ȼ�
    3.���ܴ��������������operator**����ʾ����
    4.�������ص��������
        sizeof
        .   ��Ա�����
        .*  ��Աָ�������
        ::  ��������������
        ?:  ���������
        typeid һ��RTTI�����
        const_cast ǿ������ת�������
        dynamic_cast
        reinterpret_cast
        static_cast
    5.��������������ͨ����Ա��ǳ�Ա�����������أ������������ֻ��ͨ����Ա�����������أ�
        =
        ()
        []
        ->
    6.�����ص��������
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
