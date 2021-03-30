#include <stdio.h>
//�ж�һ�����ǲ�������
int isPrime(int x)
{
    int state = 1;
    if (x <= 0)
    {
        state = 0;
    }
    if (x > 2)
    {
    	int i;
        for (i = 2; i < x && state == 1; i++)
        {
            if (x % i == 0)
            {
                state = 0;
                break;
            }
        }
    }
    return state;
} //����1��������
void main()
{
    //��������������������������֮�ͣ���������֮���Լ��������ֵ�ƽ���Ͷ���������
    //����113����[100,999]֮�ڣ�
    //���������ĸ��������г�������֮�ͣ����ĳ�������
    //113 131 137 139 173 179 191 193 197 199 233 239 293 311 313 317 373 379 419 431
    //433 439 479 593 599 613 617 619 673 677 719 733 739 797 839 971 977
    int num[900];
    int i;
    for (i = 0; i < 900; i++)
    {
        num[i] = i + 100;
    }
    int flag[900] = {0};
    for (i = 0; i < 900; i++)
    {
        int a = num[i] / 100;
        int b = (num[i] % 100) / 10;
        int c = (num[i] % 100) % 10;
        if (isPrime(num[i]) == 1 && isPrime(a + b + c) == 1 && isPrime(a * b * c) == 1 && isPrime(a * a + b * b + c * c) == 1)
        {
            flag[i] = 1;
        }
        else
        {
            flag[i] = 0;
        }
    }
    int count=0; //���������ĸ���
    int sum=0; //��������֮��
    int max=0;
    for (i = 0; i < 900; i++)
    {
        if (flag[i] == 1)
        {
            count++;
            sum=sum+num[i];
            max=(max>num[i]?max:num[i]);
        }
    }
    printf("���������ĸ���Ϊ��%d\n",count);
    printf("���������ĺ�Ϊ��%d\n",sum);
    printf("���ĳ�������Ϊ��%d\n",max);
}
