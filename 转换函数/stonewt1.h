//stonewt1.h -- revised definition for the Stonewt class
#ifndef STONEWT1_H_
#define STONEWT1_H_
/*
    ��Stonewt����ת��Ϊdoubleֵ
    Stonewt wolfe(285.7);
    double host = wolfe;
    ������ô�������ǲ���ʹ�ù��캯�������캯��ֻ���ڴ�ĳ�����͵������͵�ת����Ҫ�����෴��ת��������ʹ�������C++�������������ת��������
    ת������ʱ�û������ǿ������ת����������ʹ��ǿ������ת������ʹ�����ǡ�
    ����ע�⼸�㣺
        ת�������������෽��
        ת����������ָ����������
        ת�����������в���
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
