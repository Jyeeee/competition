/**
	�����Ƕ��� dn Ϊ��dn = pn+1 - pn������ pi �ǵ�i����������Ȼ�� d1=1 �Ҷ���n>1�� dn ��ż�����������Բ��롱��Ϊ�����������������Ҳ�Ϊ2���������� 
	�ָ�������������N (< 105)������㲻����N���������������Եĸ�����
	
	�����ʽ��ÿ�������������1����������������������N��
	�����ʽ��ÿ���������������ռһ�У�������N���������������Եĸ�����
	
	����������
	20
	���������
	4
*/
//zhicheng
//Mar.5,2018
#include<iostream>
using namespace std;

bool is_Prime(int n)
{
	for(int i=2;i<=n/i;i++)
		if(n%i==0) return false;
	return true;
}

int main()
{
	int n;
	while(cin>>n)
	{
		int count=0;
		for(int i=2;i<=n-2;i++)
			if(is_Prime(i)&&is_Prime(i+2)) count++;//judge 
		cout<<count<<endl;	
	}
	return 0;
}
