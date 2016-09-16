//stock00.h -- Stock class interface
//version 00
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>

/*
��������ʽ��
    class className
    {
    private:
        data member declarations
    public:
        member function prototypes
    }
*/

class Stock
{
    /*
    ���ʿ���:
        ʹ�������ĳ��򶼿���ֱ�ӷ��ʹ��в��֣���ֻ��ͨ�����г�Ա���������ʶ����˽�г�Ա��

    �������أ�
        ����ƾ����ܽ����нӿ������ʵ�ַֿ������нӿڱ�ʾ��Ƶĳ����������ʵ��ϸ�ڷ���һ�𲢽����������ֿ�����Ϊ��װ��
        ����������һ�ַ�װ����ʵ�ֵ�ϸ��������˽�в����С���װ����һ�������ǣ����ຯ����������������ڲ�ͬ���ļ��С�
        �������ز������Է�ֱֹ�ӷ������ݣ��������ÿ����������˽���������α���ʾ�ġ�

    ���Ƴ�Ա���ʣ�
        �������Ա�����ݳ�Ա���ǳ�Ա����������������Ĺ��в��ֻ�˽�в�����������������������������OOP��ҪĿ��֮һ�����������ͨ������˽�в��֣������ӿڵĳ�Ա�������ڹ��в��֡�
    */
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){ total_val = shares * share_val; }
public:
    void acquire(const std::string & co, long n, double pr);
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    void show();
};
#endif // STOCK00_H_
