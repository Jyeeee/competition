/**
	�±����й���������ѽ�ʱ�Ե�һ�ִ�ͳʳƷ����ͬ��������಻ͬ��ζ���±���
	�ָ������������±��Ŀ���������ۼۡ��Լ��г�����������������������Ի�õ���������Ƕ��١� 
	ע�⣺����ʱ����ȡ��һ���ֿ�档���������������������ģ�
	����������3���±����������ֱ�Ϊ18��15��10��֣����ۼ۷ֱ�Ϊ75��72��45��Ԫ��
	����г������������ֻ��20��֣���ô��������������Ӧ��������ȫ��15��ֵ�2���±����Լ�5��ֵ�3���±������ 72 + 45/2 = 94.5����Ԫ����

	�����ʽ�� 
	ÿ���������1������������ÿ�����������ȸ���һ��������1000��������N��ʾ�±������������Լ�������500�������Ϊ��λ����������D��ʾ�г���������������һ�и���N��������ʾÿ���±��Ŀ�����������Ϊ��λ�������һ�и���N��������ʾÿ���±������ۼۣ�����ԪΪ��λ�������ּ��Կո�ָ���
	�����ʽ�� 
	��ÿ�������������һ�������������棬����ԪΪ��λ����ȷ��С�����2λ��

	����������
	3 20
	18 15 10
	75 72 45
	���������
	94.50
**/

//zhicehng 
//Mar.10,2018 
#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

typedef struct data
{
	double numb;
	double price;
}Data;


bool comp(Data a,Data b)
{
	double a1=a.price*1.0/a.numb;
	double a2=b.price*1.0/b.numb;
	if(a1>=a2) return a1>a2;
	return a2<a1;
}

int main()
{
	int N,D;
	while(cin>>N>>D)
	{
		Data a[N];
//input the information
		for(int i=0;i<N;i++) cin>>a[i].numb;
		for(int i=0;i<N;i++) cin>>a[i].price;
		sort(a,a+N,comp);
	//	for(int i=0;i<N;i++) cout<<a[i].numb<<" "<<a[i].price<<endl;//test

//operation 
		double all_numb=0;
		double all_price=0;
		for(int i=0;i<N;i++)
		{
			all_numb+=a[i].numb;
			all_price+=a[i].price;
			if(all_numb<D) continue;
			else 
			{
				double temp=all_numb-D;	//���������� 
				all_price-=a[i].price*(temp*1.0/a[i].numb); 
				break;
			}
		}
		printf("%.2lf\n",all_price);
	}
	return 0;
}
