#include<iostream>
#include<string>
#include<cctype> 
#include<algorithm>
using namespace std;
int main ()
{
	string line;
	getline(cin,line);
	string word[100];
	cout<<"������һ��Ӣ�"; 
	int n=0;
	for(int i=0;i<line.length();i++)
	{
		if(i==0||line[i-1]==' ')
		{
			word[n].append(1,line[i]);
			i++;
			while(isalpha(line[i]))
			{
				word[n].append(1,line[i]);
				i++;
			}
			n++;
		}
	}
	cout<<"��仰�ĵ�������Ϊ"<<n<<endl;
	sort(word,word+n);
	for(int i=0;i<n;i++)
	{
		cout<<word[i]<<endl;
	 } 
	return 0;
}
