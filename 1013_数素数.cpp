/*
	��Pi��ʾ��i�����������θ�����������M <= N <= 104�������PM��PN������������

	�����ʽ�� 
	������һ���и���M��N������Կո�ָ���

	�����ʽ�� 
	�����PM��PN������������ÿ10������ռ1�У�����Կո�ָ�������ĩ�����ж���ո�

	����������
	5 27
	���������
	11 13 17 19 23 29 31 37 41 43
	47 53 59 61 67 71 73 79 83 89
	97 101 103
*/
//zhicheng
//Mar.8,2018 30 min 22 second
#include<iostream>
using namespace std;

//judge to prime 
bool is_Prime(int n)
{
	for(int i=2;i<=n/i;i++)
	{
		if(!(n%i)) return false;
	}
	return true;
}

int main()
{
	int m,n;
	while(cin>>m>>n&&m&&n)
	{
		int vis=0;//���� 
		for(int i=2;;i++)
		{
			static int count=0;
			if(!is_Prime(i)) continue;
			count++;
			if(count<m)continue;
			if(count>n) break;
			if(count>=m||count<=n)
			{
				if(count==n) {cout<<i<<endl;break;}
				if(vis<9)
				{
					cout<<i<<" ";
					vis++;
				}
				else
				{
					cout<<i<<endl;
					vis=0;
				} 
			}
		}
	}
	return 0;
}
