//mytime3.h -- Time class with friends
#ifndef MYTIME3_H_
#define MYTIME3_H_
#include <iostream>
/*
��Ԫ��
C++���ƶ������˽�в��ֵķ��ʣ������෽���ṩΨһ���ʵ�;����������һ�ַ�ʽ����Ȩ�ޣ���Ϊ��Ԫ����Ԫ��3��:
    ��Ԫ����
    ��Ԫ��
    ��Ԫ��Ա����
ͨ���ú�����Ϊ�����Ԫ�����Ը���ú�������ĳ�Ա������ͬ�ķ���Ȩ��
��Ϊ�����ض�Ԫ�����ʱ��������Ҫ��Ԫ

������Ԫ��
    ��ԭ�ͷ����������У�����ԭ������ǰ��ӹؼ���friend
    friend Time operator*(double n, const Time & t)��
    - ��Ȼoperator*()���������������������ģ��������ǳ�Ա��������˲���ʹ�ó�Ա�����������
    - ��Ȼoperator*()�������ǳ�Ա���������������Ա�����ķ���Ȩ����ͬ
    ��д���壬���ڲ��ǳ�Ա��������˲���Ҫʹ��Time::�޶��������⣬��Ҫ�ڶ�����ʹ�ùؼ���friend
    Time operator*(double n, const Time & t)
    {
        Time result;
        long totalminutes = t.hours * n * 60 + t.minutes * n;
        result.hours = totalminutes/60;
        result.minutes = totalminutes%60;

        return result;
    }
    A = 2.75 * B ��ת���� A = operator*(2.75,B);

����<<�����

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
