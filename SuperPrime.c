//������������������λ���ֵĺͣ���λ���ֵ�ƽ���ͣ�����������
//�� 100~10000 �ڵ����г��������������ǵ�ƽ������

#include<stdio.h>
#include<math.h>
int k=0;
int isPrime(int x);
int splitNum(int n,int Num[]);
int main()
{
    int i;
    int s=0;
    int Num[300];
    for ( i= 100; i < 10000; i++)
    {
        splitNum(i,Num);
    }
    printf("����Ϊ100~10000֮��ĳ�������:\n");
    for (i = 0; i < k; i++){
    	s+=Num[i];
    	printf("%d\n",Num[i]);
	}
	printf("The average of the digit is %lf",(double)s/k);
    return 0;
}
int isPrime(int x)
{
        if (x == 2 || x == 3)
            return 1;
        if (x % 6 != 1 && x % 6 != 5)
            return 0;
        int tmp = sqrt(x);
        int i;
        for (i = 5; i <= tmp; i += 6)
            if (x % i == 0 || x % (i + 2) == 0)
                return 0;
        return 1;
}
int splitNum(int n,int Num[]) {
    int a = n;
    int b = 0;
    int c = 0;
    int num = n;
    while (num > 0) {
        b += num % 10;
        num /= 10;
    }
    num = n;
    while (num > 0) {
        c += (num % 10) * (num % 10);
        num /= 10;
    }
    if(isPrime(a)&&isPrime(b)&&isPrime(c)){
    	Num[k++]=n;
    	return 1;
    }else
    	return 0;
    	
}

