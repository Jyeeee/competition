/**1002. д������� (20)
	����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡� 
	�����ʽ��ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��10100��
	�����ʽ����һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո� 
	����������
	1234567890987654321123456789
	���������
	yi san wu
*/ 
//zhicheng
 
#include<cstdio>
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

void print(string s)
{
	int select;
	for(int i=0;i<s.length();i++)
	{
		select=s[i]-'0';
		switch(select)
		{
			case 0:printf("ling");break;
			case 1:printf("yi");break;
			case 2:printf("er");break;
			case 3:printf("san");break;
			case 4:printf("si");break;
			case 5:printf("wu");break;
			case 6:printf("liu");break;
			case 7:printf("qi");break;
			case 8:printf("ba");break;
			case 9:printf("jiu");break;
		}
		printf("%c",i<s.length()-1?' ':'\n');
	}
}

int main()
{
  string n;
  int sum;
  while(cin>>n)
  {
  	sum=0;
  	//��� 
  	for(int i=0;i<n.length();i++)
  	{
  		sum+=n[i]-'0';
  	} 
  	//����sum����ȡ������λ������ 
  	stringstream sout;
	string s;
	sout<<sum;
	s = sout.str();
//	cout<<s<<endl;//test s
	print(s);
  }
  
  return 0;
}

