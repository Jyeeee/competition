/**
	������A�ġ�DA��Ϊ1λ���������֡�����Ϊ��A������DA��ɵ�������PA��
	���磺����A = 3862767��DA = 6����A�ġ�6���֡�PA��66����ΪA����2��6��
	�ָ���A��DA��B��DB�����д�������PA + PB��
	
	�����ʽ�� 
	������һ�������θ���A��DA��B��DB���м��Կո�ָ�������0 < A, B < 1010��
	�����ʽ�� 
	��һ�������PA + PB��ֵ�� 

	��������1��
	3862767 6 13530293 3
	�������1��
	399
	��������2��
	3862767 1 13530293 8
	�������2��
	0
**/
//zhicheng
//Mar.10,2018 12min42second
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int _fun(string a,int b)
{
	vector<int> s; 
	for(int i=0;i<a.length();i++)	s.push_back(a[i]-'0');
	int n=count(s.begin(),s.end(),b);
	int p=0;
	for(int i=0;i<n;i++) p=p*10+b;
	return p;
}

int main()
{
	string A,B;
	int DA,DB;
	while(cin>>A>>DA>>B>>DB)
	{
		int pa=_fun(A,DA);
		int pb=_fun(B,DB);
		cout<<pa+pb<<endl; 
	} 
	return 0;
} 
