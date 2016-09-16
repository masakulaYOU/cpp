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
��ʽת����
    Stonewt myCat;
    myCat = 19.6;  //use Stonewt(double) to convert 19.6 to Stonewt
    ����ʹ�ù��캯��Stonewt(double)������һ����ʱStonewt���󣬲���19.6��Ϊ���ʼ��ֵ��Ȼ��������Ա��ֵ�ķ�ʽ������ʱ��������ݸ��Ƶ�myCat�У���һ���̳�Ϊ��ʽת��
    ֻ�н���һ�������Ĺ��캯��������Ϊת������
    ʹ�ùؼ���explicit���Թر��Զ�����ת�������ԡ�
    explicit Stonewt(double lbs);   //no implicit conversions allowed
    �����������ʹ���˹ؼ���explicit����Stonewt(double)��ֻ������ʽǿ������ת�������򻹿��������������ʽת����
        ��Stonewt�����ʼ��Ϊdoubleֵʱ
        ��doubleֵ����Stonewt����ʱ
        ��doubleֵ���ݸ�����Stonewt�����ĺ���ʱ
        ����ֵ������ΪStonewt�ĺ�����ͼ����doubleֵʱ
        ����������һ������£�ʹ�ÿ�ת��Ϊdouble���͵���������ʱ
*/

#endif // STONEWT_H_
