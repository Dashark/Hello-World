#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

//ѧϰ�����㷨�Լ�����ģ��ʹ���ܽ᣻
//��������ֱ�Ӳ����ϣ������
//ѡ������ֱ��ѡ����Ͷ�����
//��������ð������Ϳ������򣨵ݹ飩��
//�鲢����ͻ�������

void print(int a[], int n ,int i){
	cout<<i <<":";
	for(int j= 0; j<5; j++){
		cout<<a[j] <<" ";
	}
	cout<<endl;
}

//....����....//

void InsertSort(int a[], int n)//O(n^2)���Ӷ� 
{
	for(int i= 1; i<n; i++){
		if(a[i] < a[i-1]){               //����i��Ԫ�ش���i-1Ԫ�أ�ֱ�Ӳ��롣С�ڵĻ����ƶ����������
			int j= i-1;	
			int x = a[i];		 //���ƴ洢������Ԫ��
			a[i] = a[i-1];           //�Ⱥ���һ��Ԫ��
			while(x < a[j]){	 //�����������Ĳ���λ��
				a[j+1] = a[j];
				j--;		 //Ԫ�غ���
			}
			a[j+1] = x;		 //���뵽��ȷλ��
		}
		print(a,n,i);			//��ӡÿ������Ľ��
	}
	
}

//....ϣ������....// ��С��������
void ShellInsertSort(int a[], int n, int dk)
{
	for(int i= dk; i<n; ++i){
		if(a[i] < a[i-dk]){			//����i��Ԫ�ش���i-1Ԫ�أ�ֱ�Ӳ��롣С�ڵĻ����ƶ����������
			int j = i-dk;	
			int x = a[i];			//����Ϊ�洢������Ԫ��
			a[i] = a[i-dk];			//���Ⱥ���һ��Ԫ��
			while(x < a[j]){		//�����������Ĳ���λ��
				a[j+dk] = a[j];
				j -= dk;			 //Ԫ�غ���
			}
			a[j+dk] = x;			//���뵽��ȷλ��
		}
		print(a, n,i );
	}
	
}

/**
 * �Ȱ�����d��n/2,nΪҪ�������ĸ�������ϣ������
 *
 */
void shellSort(int a[], int n){

	int dk = n/2;
	while( dk >= 1  ){
		ShellInsertSort(a, n, dk);
		dk = dk/2;
	}
} 

//....ѡ������....//
void selectsort(int a[],int n){
	
	for(int i=0;i<n;i++){
		int max=i;
		
		for(int j=i+1;j<n;j++){
			if(a[j]>=a[max]){
				max=j;
			}
		}
		if(max!=i){
			int swap=a[max];a[max]=a[i];a[i]=swap;
		}
	}
}
void SelectSort(int r[],int n) //ѡ���Ż� ͬʱ��¼�����Сֵ 
{
	int i ,j , min ,max, tmp;
	for (i=1 ;i <= n/2;i++) {  
		// ��������n/2��ѡ������ 
		min = i; max = i ; //�ֱ��¼������С�ؼ��ּ�¼λ��
		for (j= i+1; j<= n-i; j++) {
			if (r[j] > r[max]) { 
				max = j ; continue ; 
			}  
			if (r[j]< r[min]) { 
				min = j ; 
			}   
	  }  
	  //�ý����������ɷ�������������Ч��
	  tmp = r[i-1]; r[i-1] = r[min]; r[min] = tmp;
	  tmp = r[n-i]; r[n-i] = r[max]; r[max] = tmp; 

	} 
}

//.....ð������.....//
//��������д��
void bubbleSort(int a[], int n){
	for(int i =0 ; i< n-1; ++i) {
		for(int j = 0; j < n-i-1; ++j) {
			if(a[j] > a[j+1])
			{
				int tmp = a[j] ; a[j] = a[j+1] ;  a[j+1] = tmp;
			}
		}
	}
}


//����ͬ������ָʾ�����ж�ʱ���Ѿ����� ���߱���Ѿ������λ�ã�
void Bubble_1 ( int r[], int n) {
	int i= n -1;  //��ʼʱ,���λ�ñ��ֲ���
	while ( i> 0) { 
		int pos= 0; //ÿ�˿�ʼʱ,�޼�¼����
		for (int j= 0; j< i; j++)
			if (r[j]> r[j+1]) {
				pos= j; //��¼������λ�� 
				int tmp = r[j]; r[j]=r[j+1];r[j+1]=tmp;
			} 
		i= pos; //Ϊ��һ��������׼��
	 } 
}  


//ͨ��ǰ��ð�������ٱ������� 
void Bubble_2 ( int r[], int n){
	int low = 0; 
	int high= n -1; //���ñ����ĳ�ʼֵ
	int tmp,j;
	while (low < high) {
		for (j= low; j< high; ++j) //����ð��,�ҵ������
			if (r[j]> r[j+1]) {
				tmp = r[j]; r[j]=r[j+1];r[j+1]=tmp;
			} 
		--high;					//�޸�highֵ, ǰ��һλ
		for ( j=high; j>low; --j) //����ð��,�ҵ���С��
			if (r[j]<r[j-1]) {
				tmp = r[j]; r[j]=r[j-1];r[j-1]=tmp;
			}
		++low;					//�޸�lowֵ,����һλ
	} 
}  

//.....��������.....//
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int partition(int a[], int low, int high)
{
	int privotKey = a[low];								//��׼Ԫ��
	while(low < high){								    //�ӱ�����˽�������м�ɨ��
		while(low < high  && a[high] >= privotKey) --high;  //��high ��ָλ����ǰ���������ൽlow+1 λ�á����Ȼ�׼Ԫ��С�Ľ������Ͷ�
		swap(&a[low], &a[high]);
		while(low < high  && a[low] <= privotKey ) ++low;
		swap(&a[low], &a[high]);
	}
	print(a,10,10);
	return low;
}


void quickSort(int a[], int low, int high){
	if(low < high){
		int privotLoc = partition(a,  low,  high);  //����һ��Ϊ��
		quickSort(a,  low,  privotLoc -1);			//�ݹ�Ե��ӱ�ݹ�����
		quickSort(a,   privotLoc + 1, high);		//�ݹ�Ը��ӱ�ݹ�����
	}
}

//......��һ��cʵ�ֿ���........//
void quick_Sort(int array[],int left,int right)
{

   if(left>right)

          return;


 /*ȡ����ߵ�ֵΪpivot(��׼)*/
     int i=left,j=right,pivot=array[left];
  

    while(i<j)
    {
         while( (i<j) && (pivot <= array[j]) )
            j--;
         if(i<j)
            array[i++]=array[j];
  
  while( (i<j) && (array[i] <= pivot) )
             i++;
         if(i<j)
             array[j--]=array[i];
 }

     array[j]=pivot;/*Ҳ������ array[i]=piovt����Ϊ��ʱi=j*/

    quick_Sort(array,left,i-1);
    quick_Sort(array,i+1,right);
}
 
//.....qsort.....//

//һ����int������������ 
//
//int num[100]; 
//
//Sample: 
//
//int cmp ( const void *a , const void *b ) 
//{ 
//return *(int *)a - *(int *)b; 
//} 
//
//qsort(num,100,sizeof(num[0]),cmp); 
//
//������char������������ͬint���ͣ� 
//
//char word[100]; 
//
//Sample: 
//
//int cmp( const void *a , const void *b ) 
//{ 
//return *(char *)a - *(int *)b; 
//} 
//
//qsort(word,100,sizeof(word[0]),cmp); 
//
//������double�������������ر�Ҫע�⣩ 
//
//double in[100]; 
//
//int cmp( const void *a , const void *b ) 
//{ 
//return *(double *)a > *(double *)b ? 1 : -1; 
//} 
//
//qsort(in,100,sizeof(in[0]),cmp)�� 
//
//�ġ��Խṹ��һ������ 
//
//struct In 
//{ 
//double data; 
//int other; 
//}s[100] 
//
////����data��ֵ��С���󽫽ṹ������,���ڽṹ���ڵ�����ؼ�����data�����Ϳ��Ժܶ��֣��ο����������д 
//
//int cmp( const void *a ,const void *B) 
//{ 
//return (*(In *)a)->data > (*(In *)B)->data ? 1 : -1; 
//} 
//
//qsort(s,100,sizeof(s[0]),cmp); 
//
//�塢�Խṹ��������� 
//
//struct In 
//{ 
//int x; 
//int y; 
//}s[100]; 
//
////����x��С�������򣬵�x���ʱ����y�Ӵ�С���� 
//
//int cmp( const void *a , const void *b ) 
//{ 
//struct In *c = (In *)a; 
//struct In *d = (In *)b; 
//if(c->x != d->x) return c->x - d->x; 
//else return d->y - c->y; 
//} 
//
//qsort(s,100,sizeof(s[0]),cmp); 
//
//�������ַ����������� 
//
//struct In 
//{ 
//int data; 
//char str[100]; 
//}s[100]; 
//
////���սṹ�����ַ���str���ֵ�˳������ 
//
//int cmp ( const void *a , const void *b ) 
//{ 
//return strcmp( (*(In *)a)->str , (*(In *)B)->str ); 
//} 
//
//qsort(s,100,sizeof(s[0]),cmp); 
//
//�ߡ����㼸������͹����cmp 
//
//int cmp(const void *a,const void *B) //�ص�cmp�������ѳ���1��������е㣬��ת�Ƕ����� 
//{ 
//struct point *c=(point *)a; 
//struct point *d=(point *)b; 
//if( calc(*c,*d,p[1]) < 0) return 1; 
//else if( !calc(*c,*d,p[1]) && dis(c->x,c->y,p[1].x,p[1].y) <  dis(d->x,d->y,p[1].x,p[1].y)) //�����һ��ֱ���ϣ����Զ�ķ���ǰ�� 
//return 1; 
//else return -1; 
//} 
//: 
//
//c++�м���ͷ�ļ� "iostream"
//
//c��qsort����������<stdlib.h>��ͷ�ļ��strcmp������<string.h>��ͷ�ļ��� 


//.....sort.....//�����ͷ�ļ�#include<algorithm>
 
//int cmp(int a,int b)
//{
//      return a<b;   //�������У���Ϊreturn a>b����Ϊ����
//  
//}
//  
//int main()
//{
//     int a[20],i;
//     for(i=0;i<20;i++)
//       cin>>a[i];
//     sort(a,a+20,cmp);
//     for(i=0;i<20;i++)
//       cout<<a[i]<<endl;
//     return 0;
//} 

//......��ͬ�������͵�ģ������ʹ��......// 

//����sort(begin,end,less<data-type>());
//����sort(begin,end,greater<data-type>());

//....�鲢����.....//
//��r[i��m]��r[m +1 ��n]�鲢����������rf[i��n]
//void Merge(ElemType *r,ElemType *rf, int i, int m, int n)
//{
//	int j,k;
//	for(j=m+1,k=i; i<=m && j <=n ; ++k){
//		if(r[j] < r[i]) rf[k] = r[j++];
//		else rf[k] = r[i++];
//	}
//	while(i <= m)  rf[k++] = r[i++];
//	while(j <= n)  rf[k++] = r[j++];
//	print(rf,n+1);
//}
//
//void MergeSort(ElemType *r, ElemType *rf, int lenght)
//{ 
//	int len = 1;
//	ElemType *q = r ;
//	ElemType *tmp ;
//	while(len < lenght) {
//		int s = len;
//		len = 2 * s ;
//		int i = 0;
//		while(i+ len <lenght){
//			Merge(q, rf,  i, i+ s-1, i+ len-1 ); //�Եȳ��������ӱ�ϲ�
//			i = i+ len;
//		}
//		if(i + s < lenght){
//			Merge(q, rf,  i, i+ s -1, lenght -1); //�Բ��ȳ��������ӱ�ϲ�
//		}
//		tmp = q; q = rf; rf = tmp; //����q,rf���Ա�֤��һ�˹鲢ʱ���Դ�q �鲢��rf
//	}
//}
//
//void MSort(ElemType *r, ElemType *rf,int s, int t)
//{ 
//	ElemType *rf2;
//	if(s==t) r[s] = rf[s];
//	else
//	{ 
//		int m=(s+t)/2;			/*ƽ��*p ��*/
//		MSort(r, rf2, s, m);		/*�ݹ�ؽ�p[s��m]�鲢Ϊ�����p2[s��m]*/
//		MSort(r, rf2, m+1, t);		/*�ݹ�ؽ�p[m+1��t]�鲢Ϊ�����p2[m+1��t]*/
//		Merge(rf2, rf, s, m+1,t);	/*��p2[s��m]��p2[m+1��t]�鲢��p1[s��t]*/
//	}
//}
//void MergeSort_recursive(ElemType *r, ElemType *rf, int n)
//{   /*��˳���*p ���鲢����*/
//	MSort(r, rf,0, n-1);
//} //��·�鲢

 
 

int main(){
	int a[5]={4,32,1,6,5};
	InsertSort(a, 5);//�������� 
	print(a,5,5);
	
	int b[5]={5,2,32,52,2};
	shellSort(b,5); //ϣ����������
	print(b,5,5);
	
	int c[8]={2,45,34,26,63,35,5,4};
	selectsort(c,8); //ѡ������ 
	print(c,8,8);
	
	return 0;
}
