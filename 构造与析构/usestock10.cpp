//usestock10.cpp -- using the Stock class
//version 10
#include <iostream>
#include "stock10.h"

int main()
{
    {
        using std::cout;
        cout<<"Using constructor to create new objects\n";
        Stock stock1("NanoSmart", 12, 20.0);
        stock1.show();
        Stock stock2 = Stock("Boffo Objects", 2, 2.0);
        /*
            ��ʼ�������ܻᴴ����ʱ����Ҳ���ܲ��ᣩ
        */
        /*
            Stock hot_hip = {"Derivatives Plus Plus", 100, 45.0};
            Stock jock{"Sport Age Storage, Inc"};
            Stock temp{};

            �ڶ����ȼ��� Stock jock("Sport Age Storage, Inc", 0, 0.0);
            �������ȼ���Ĭ�Ϲ��캯�������Ķ���
        */
        stock2.show();

        cout<<"Assigning stock1 to stock2:\n";
        stock2 = stock1;
        /*
            ��Ĭ������£���һ�����󸳸�ͬ���͵���һ������ʱ��C++��Դ�����ÿ�����ݳ�Ա�����ݸ��Ƶ�Ŀ���������Ӧ�����ݳ�Ա��
        */
        cout<<"Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();

        cout<<"Using a constructor to reset an object\n";
        stock1 = Stock("Nifty Foods", 10, 50.0);   //temp object
        /*
            ͨ���ù��캯������һ���µġ���ʱ�Ķ���Ȼ�������ݸ��Ƶ�stock1
            ��ֵ��䣬��ֵ�����ʹ�ù��캯���ܻᵼ���ڸ�ֵǰ����һ����ʱ����
        */
        cout<<"Revised stock1:\n";
        stock1.show();
        cout<<"Done.\n";
    }
    /*
        �Զ��������洢��ջ�У������󴴽��Ķ������ȱ�ɾ��
    */

    return 0;
}
