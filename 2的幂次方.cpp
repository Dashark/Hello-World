#include<stdio.h>

void put(int num,int n);

int main()
{
    int num;
    scanf("%d",&num);
    put(num,0);
}

void put(int m,int n)
//mΪ���ֽ������nΪ������λ����rΪλ���ϵ���ֵ�� 
{
    int r; 
    if(m==0)//m�Ѿ����ֽ��꣬���� 
    {
        return;
    }
    r=m%2;
    m=m/2;
    put(m,n+1);
    if(m!=0&&r!=0)
    //���m��Ϊ0��r��Ϊ0֤���ⲻ�ǵ�һ��2���ݴη������+
    {
        printf("+");
    }
    if(r==1)
    {
        if(n==0)
        {
            printf("2(0)");
        }
        else if(n==1)
        {
            printf("2");
        }
        else if(n==2)
        {
            printf("2(2)");
        }
        else
        {
            printf("2(");
            put(n,0);
            //���ָ��������2(0),2,2(2)��ʾ������ֽ�
            printf(")");
        }

    }
}
