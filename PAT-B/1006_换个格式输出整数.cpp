/**
	����������ĸB����ʾ���١�����ĸS��ʾ��ʮ�����á�12...n������ʾ��λ����n��<10����
	������ʽ�������һ��������3λ��������������234Ӧ�ñ����ΪBBSSS1234����Ϊ����2�����١���3����ʮ�����Լ���λ��4��
	
	�����ʽ��ÿ�������������1����������������������n��<1000����
	�����ʽ��ÿ���������������ռһ�У��ù涨�ĸ�ʽ���n��
	
	��������1��
	234
	�������1��
	BBSSS1234
	��������2��
	23
	�������2��
	SS123
*/
//zhicheng
//Mar.5,2018  6min28second
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a;
	while(cin>>a)
	{
		int len=a.length();
		int test[len];
		for(int i=0;i<len;i++)
		{
			test[i]=a[i]-'0';
		}
		switch(len)
		{
			case 1:
				for(int i=1;i<=test[0];i++) cout<<i;
				break;
			case 2:
				for(int i=0;i<test[0];i++) cout<<"S";
				for(int i=1;i<=test[1];i++) cout<<i;
				break;
			case 3:
				for(int i=0;i<test[0];i++) cout<<"B";
				for(int i=0;i<test[1];i++) cout<<"S";
				for(int i=1;i<=test[2];i++) cout<<i;
				break;
			default:
				return 0 ;
				break;
		}
		cout<<endl;
	}
	return 0;
}
