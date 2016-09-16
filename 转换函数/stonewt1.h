//stonewt1.h -- revised definition for the Stonewt class
#ifndef STONEWT1_H_
#define STONEWT1_H_
/*
    将Stonewt对象转换为double值
    Stonewt wolfe(285.7);
    double host = wolfe;
    可以这么做，但是不是使用构造函数，构造函数只用于从某种类型到类类型的转换，要进行相反的转换，必须使用特殊的C++运算符函数——转换函数。
    转换函数时用户定义的强制类型转换，可以像使用强制类型转换那样使用它们。
    但是注意几点：
        转换函数必须是类方法
        转换函数不能指定返回类型
        转换函数不能有参数
*/

class Stonewt
{
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
    //conversion functions
    operator int() const;
    operator double() const;
};
#endif // STONEWT1_H_
