#include<iostream>
/**
	��ƺ�����һԪ����ʽ�ĵ�������ע��xn��nΪ��������һ�׵���Ϊn*xn-1����
	
	�����ʽ����ָ���ݽ���ʽ�������ʽ������ϵ����ָ��������ֵ��Ϊ������1000�������������ּ��Կո�ָ���
	�����ʽ������������ͬ�ĸ�ʽ�����������ʽ�������ϵ����ָ�������ּ��Կո�ָ�������β�����ж���ո�ע�⡰�����ʽ����ָ����ϵ������0�����Ǳ�ʾΪ��0 0����
	
	����������
	3 4 -5 2 6 1 -2 0
	���������
	12 3 -10 1 6 0
**/
//zhicheng
//Mar.8,2018
#include<cstdio>
#include<vector>
using namespace std;

int main()
{
	int temp;
	vector<int> a;
	for(int i=0;;i++)
	{
		cin>>temp;
		a.push_back(temp);
		if(getchar()=='\n') break;
	}
	//�����ʽ���� 
	if(a[1]==0)
	{
		cout<<"0 0"<<endl;
		return 0;
	}
	//����ʽ���� 
	for(int i=0;i<a.size()-1;i+=2)
	{
		if(a[i+1]<1) continue;
		cout<<a[i]*a[i+1]<<" "<<a[i+1]-1;
		//�ж��ǿո���ǻ��� 
		if(i==a.size()-3||a[i+3]-1>=0) cout<<" ";
		else cout<<endl; 
	}
	return 0;
}
