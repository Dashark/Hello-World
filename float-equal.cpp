//ʵ�ִ����ж�2��float�������

//��ȷ��ʱС�����5λ

#include <stdio.h>
#include <stdlib.h> //abs()  

int main()

{

    float m = 1.78;

    float x = 1.779999, y = 2;

    float z = m / y, z1 = x / y;

    if (abs(z - z1) <= 1e-5) {

        z = (m + x) / y;

    }
    printf("Z is %f\n", z);

    printf("Z1 is %f\n", z1);

    return 0;

}
