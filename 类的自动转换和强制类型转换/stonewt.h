//stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
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
};

/*
隐式转换：
    Stonewt myCat;
    myCat = 19.6;  //use Stonewt(double) to convert 19.6 to Stonewt
    程序将使用构造函数Stonewt(double)来创建一个临时Stonewt对象，并将19.6作为其初始化值，然后采用逐成员赋值的方式将该临时对象的内容复制到myCat中，这一过程称为隐式转换
    只有接受一个参数的构造函数才能作为转换函数
    使用关键字explicit可以关闭自动类型转换的特性。
    explicit Stonewt(double lbs);   //no implicit conversions allowed
    如果在声明中使用了关键字explicit，则Stonewt(double)将只用于显式强制类型转换，否则还可以用于下面的隐式转换：
        将Stonewt对象初始化为double值时
        将double值赋给Stonewt对象时
        将double值传递给接受Stonewt参数的函数时
        返回值被声明为Stonewt的函数试图返回double值时
        在上述任意一种情况下，使用可转换为double类型的内置类型时
*/

#endif // STONEWT_H_
