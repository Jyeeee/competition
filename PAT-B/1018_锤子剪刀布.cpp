/**
	�����ʽ�� 
	�����1�и���������N��<=105������˫������Ĵ�����
	���N�У�ÿ�и���һ�ν������Ϣ�����ס���˫��ͬʱ�����ĵ����ơ�C�������ӡ���J������������B����������
	��1����ĸ����׷�����2�������ҷ����м���1���ո� 
	�����ʽ�� 
	�����1��2�зֱ�����ס��ҵ�ʤ��ƽ�������������ּ���1���ո�ָ���
	��3�и���������ĸ���ֱ����ס��һ�ʤ�����������ƣ��м���1���ո�����ⲻΨһ�����������ĸ����С�Ľ⡣ 
	
	����������
	10
	C J
	J B
	C B
	B B
	B C
	C C
	C B
	J B
	B C
	J J
	���������
	5 3 2
	2 3 5
	B B
**/ 
//zhicheng
//Mar.10,2018 
#include<iostream>
#include<string>
#include<vector> 
using namespace std;

//�ȴ�С 
int _fun(char a,char b)
{
	if(a==b) return 0;
	else if(a=='C'&&b=='J'||a=='J'&&b=='B'||a=='B'&&b=='C') return 1;
	else return 2; 
}

//������ִ���������ĸ 
void print(int c,int j,int b)
{
	if(b>=j&&b>=c) cout<<"B";
	if(c>=j&&c>b)cout<<"C";
	if(j>c&&j>b) cout<<"J";
}

int main()
{
	int n;
	while(cin>>n)
	{
		char a,b;
		int draw=0,win=0,lose=0;//ƽ��Ӯ���� 
		int c1,j1,b1;
		int c2,j2,b2;
		c1=c2=j1=j2=b1=b2=0;
//input
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			int flg=_fun(a,b);
			switch(flg)
			{
				case 0:draw++;break;
				case 1:win++;
					switch(a)
					{
						case 'C':c1++;break;
						case 'J':j1++;break;
						case 'B':b1++;break;
					}
					break;
				case 2:lose++;
					switch(b)
					{
						case 'C':c2++;break;
						case 'J':j2++;break;
						case 'B':b2++;break;
					}
					break;
			}
		}
//output the result 
		cout<<win<<" "<<draw<<" "<<lose<<endl;//�� 
		cout<<lose<<" "<<draw<<" "<<win<<endl;//�� 
		print(c1,j1,b1);
		cout<<" ";
		print(c2,j2,b2);
		cout<<endl;
	}
	return 0;
}
