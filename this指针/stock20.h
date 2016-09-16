//stock20.h -- Stock class interface
//version 20
#ifndef STOCK20_H_
#define STOCK20_H_

#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){ total_val = shares * share_val; }
public:
    Stock();
    Stock(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock();
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    void show() const;
    /*
    C-����壺
    void show(const Stock * this)
    {
        cout<<"Company" << this->company
            <<"  Shares: "<<this->shares << '\n'
            <<"  Share Price: $"<<this->share_val
            <<"  Total Worth: $"<<this->total_val << '\n';
    }

    ����ʱ��
        show(&top);
    */
    const Stock & topval(const Stock & s) const;
    /*
    ���������ʽ�ط���һ�����󣬶���ʽ�ط�����һ�����󣬲���������һ����������á�
    �����е�const��ʾ�ú��������޸ı���ʽ���ʵĶ���
    ���ź��const��ʾ�ú��������޸ı���ʽ���ʵĶ���
    ���ڸú�������������const����֮һ�����ã���˷�������ҲӦΪconst����
    */
};
#endif // STOCK00_H_

