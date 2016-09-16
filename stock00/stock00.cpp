//stock00.cpp -- implementing the Stock class
//version 00
#include <iostream>
#include "stock00.h"
/*
ʵ�����Ա����;
    �����Ա����ʱ��ʹ����������������::����ʶ������������
    �෽�����Է������private���

����������������
    ��������������ȷ���˷��������Ӧ��������
�෽�����ƣ�
    ���������а���������ȫ������д�����޶�����ֻ��������������ʹ��
*/
void Stock::acquire(const std::string & co, long n, double pr)
{
    company = co;
    if(n < 0)
    {
        std::cout<<"Number of shares can't be negative; "
                 << company <<" shares set to 0.\n";
        shares = 0;
    }
    else shares = n;
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price)
{
    if(num < 0)
    {
        std::cout<<"Number of shares purchased can't be negative. " << " Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if(num < 0)
    {
        cout<<"Number of shares sold can't be negative. "<< "Transaction is aborted.\n";
    }
    else if(num > shares)
    {
        cout<<"You can't sell more than you have! "<<"Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    using std::cout;
    using std::ios_base;
    //set format to #.###
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    std::cout<<"Company: "<< company
    <<"  Shares: "<< shares << '\n'
    <<"  Share Price: $"<< share_val;

    cout.precision(2);
    std::cout<<"  Total Worth: $"<< total_val << '\n';

    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

/*
����������
    �䶨��λ���������еĺ��������Զ���Ϊ����������
    Stock::set_tot()��һ������������������ͨ������С�ĳ�Ա������Ϊ��������
    Ҳ������������֮�ⶨ���Ա������ʹ֮��Ϊ����������ֻ������ʵ�ֲ����ж��庯��ʱʹ��inline�޶�������

    class Stock
    {
    private:
        ...
        void set_tot();
    public:
        ...
    }

    inline void Stock::set_tot()
    {
        total_val = shares * share_val;
    }

    �˷�����stock00.h�еĶ��巽��һ����
*/
