//������ֻ��1�ͱ��������ӵ���
//2018/11/14 ����
#include"stdio.h"
#include"math.h"
int isPrime(int num);
int main() {
    //to do sth
    int num;
    int count = 0;
    scanf("%d",&num);
    for(int i = 1; i <= num; i++) {
        if(isPrime(i)) {
            printf("%d is a Prime num\n",i);
            count ++;
        }
        else {
            printf("%d is not a Prime num\n",i);
        }
    }
    printf("��[1,%d]�ķ�Χ��,����%d������\n",num,count);
    return 0;
}

int isPrime(int num) {
    if(num < 2) {
        return 0;
    }
    int i;
    int root = (int)floor(sqrt((double)num));
    for(i = 2; i <= root; i++) {
        if(num % i == 0) {
            return 0;
        }
    }
    return 1;
}