/**
	����Ҫ�����A/B������A�ǲ�����1000λ����������B��1λ������������Ҫ�������Q������R��ʹ��A = B * Q + R������
	�����ʽ�� 
	������1�������θ���A��B���м���1�ո�ָ��� 
	�����ʽ�� 
	��1�����������Q��R���м���1�ո�ָ��� 
	
	����������
	123456789050987654321 7
	���������
	17636684150141093474 3
**/
//zhicehng
//Mar.10,2018
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	string A;
	int B;
	vector<int> Q;
	int R;
	while(cin>>A>>B)
	{
		if(A.length()==1){cout<<(A[0]-'0')/B<<" "<<(A[0]-'0')%B<<endl;continue;}
		R=A[0]-'0';
		for(int i=1;i<A.length();i++)
		{
			R=R*10+(A[i]-'0');
			Q.push_back(R/B);
			R=R%B;
		}
		for(int i=0;i<Q.size();i++) cout<<Q[i];
		cout<<" "<<R<<endl;
	}
	return 0;
} 
