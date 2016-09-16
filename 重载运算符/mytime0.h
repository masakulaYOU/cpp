//mytime0.h -- Time class before operator overloading
#ifndef MYTIME0_H_
#define MYTIME0_H_

/*
�����������һ����ʽ��C++��̬���û��ܹ�������������ͬ�������꣨�����б���ͬ�ĺ������ⱻ��Ϊ�������ػ�����̬
��������ؽ����صĸ�����չ���������
C++�������ٸ�������չ���û����������
����������ĸ�ʽ��
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
