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
    C-风格定义：
    void show(const Stock * this)
    {
        cout<<"Company" << this->company
            <<"  Shares: "<<this->shares << '\n'
            <<"  Share Price: $"<<this->share_val
            <<"  Total Worth: $"<<this->total_val << '\n';
    }

    调用时：
        show(&top);
    */
    const Stock & topval(const Stock & s) const;
    /*
    这个函数隐式地访问一个对象，而显式地访问另一个对象，并返回其中一个对象的引用。
    括号中的const表示该函数不会修改被显式访问的对象
    括号后的const表示该函数不会修改被隐式访问的对象
    由于该函数返回了两个const对象之一的引用，因此返回类型也应为const引用
    */
};
#endif // STOCK00_H_

