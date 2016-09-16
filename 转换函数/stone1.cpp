//stone1.cpp -- user-defined conversion function
#include <iostream>
#include "stonewt1.h"

int main()
{
    using std::cout;
    Stonewt poppins(9,2.8);
    double p_wt = poppins;
    cout<<"Convert to double => ";
    cout<<"Poppins: " << p_wt << " pounds.\n";
    cout<<"Convert to int => ";
    cout<<"Poppins: "<<int(poppins) << " pounds.\n";

    return 0;
}

/*
ת�������������û���ϣ������ת��ʱ��������ת����
ԭ����˵�����ʹ����ʽת����������ʽת��
C++11�У��ɽ�ת�����������Ϊ��ʽ��
    class Stonewt
    {
        ...
        //conversion function
        explicit operator int() const;
        explicit operator double() const;
    };
    ������Щ��������Ҫǿ��ת��ʱ��������Щ�����
��һ�ַ�������һ��������ͬ�ķ�ת���������ɣ������ڱ���ʽ����ʱ���ú����Ż�ִ��
    int Stonewt::operator int() {return int (pounds + 0.5);}
    �滻Ϊ
    int Stonewt::Stone_to_Int(){return int(pounds+0.5);}

��֮��C++Ϊ���ṩ�����µ�����ת����
    ֻ��һ���������๹�캯�����ڽ�������ò�����ͬ��ֵת��Ϊ�����͡�
    ����Ϊת���������������Ա�����������  operator typeName()
*/
