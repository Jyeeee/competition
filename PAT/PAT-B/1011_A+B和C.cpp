/*
	��������[-231, 231]�ڵ�3������A��B��C�����ж�A+B�Ƿ����C�� 

	�����ʽ�� 
	�����1�и���������T(<=10)���ǲ��������ĸ�����������T�����������ÿ��ռһ�У�˳�����A��B��C���������Կո�ָ���
	�����ʽ�� 
	��ÿ�������������һ���������Case #X: true�����A+B>C�����������Case #X: false��������X�ǲ��������ı�ţ���1��ʼ����

	����������
	4
	1 2 3
	2 3 4
	2147483647 0 2147483646
	0 -2147483648 -2147483647

	���������
	Case #1: false
	Case #2: true
	Case #3: true
	Case #4: false
*/
//zhicheng
//Mar.8 2018
#include<iostream>
using namespace std;

int is_Ture(long long a,long long b,long long c)
{
	if(a+b>c) return 1;
	else      return 0;
}
int main()
{
	int n;
	while(cin>>n)
	{
		int flg[n];
		int num=n;
		int count=1;
		long long A,B,C;
		do
		{
			cin>>A>>B>>C;
			flg[num]=is_Ture(A,B,C); 
		}while(--num);
		for(int i=n;i>0;i--)
		{
			if(flg[i]) cout<<"Case #"<<count<<": true"<<endl;
			else    cout<<"Case #"<<count<<": false"<<endl;
			count++;
		}
	}
	return 0;
}
