/**
	һ������A�д���N��N>0�����������ڲ�����ʹ�����������ǰ���£���ÿ������ѭ��������M��M>=0����λ�ã�
	����A�е������ɣ�A0 A1����AN-1���任Ϊ��AN-M ���� AN-1 A0 A1����AN-M-1�������M����ѭ��������ǰ���M��λ�ã���
	�����Ҫ���ǳ����ƶ����ݵĴ��������٣�Ҫ�������ƶ��ķ�����
	
	�����ʽ��ÿ���������һ��������������1������N ( 1<=N<=100)��M��M>=0������2������N��������֮���ÿո�ָ���
	�����ʽ����һ�������ѭ������Mλ�Ժ���������У�֮���ÿո�ָ������н�β�����ж���ո�
	
	����������
	6 2
	1 2 3 4 5 6
	���������
	5 6 1 2 3 4
*/
//zhicheng
//Mar.6,2018 32min01second
#include<iostream>
using namespace std;

typedef struct data
{
	int data;
	int next;
}A;

int main()
{
	int n,m;
	while(cin>>n)
	{
		cin>>m;
		A a[n];
		m=m%n;//deal with
		//input information
		a[0].next=1;
		for(int i=1;i<=n;i++) 
		{
			cin>>a[i].data;
			a[i].next=i+1;
		}
		if(m==0)
		{
			for(int i=1;i<n;i++)
				cout<<a[i].data<<" ";
			cout<<a[n].data<<endl;
			continue;
		}
		a[n].next=1;
		a[0].next=n-m+1;
		a[n-m].next=0;
		for(int i=0;a[i].next;i=a[i].next)
		{
			if(a[a[i].next].next)
			{
				cout<<a[a[i].next].data<<" ";	
				continue;
			}
			cout<<a[a[i].next].data<<endl;	
		}
	}
	return 0;
}
