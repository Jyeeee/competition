/**
	����n��ѧ����������ѧ�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ����������ѧ�š�
	�����ʽ��ÿ�������������1��������������ʽΪ
	  ��1�У�������n
	  ��2�У���1��ѧ�������� ѧ�� �ɼ�
	  ��3�У���2��ѧ�������� ѧ�� �ɼ�
	  ... ... ...
	  ��n+1�У���n��ѧ�������� ѧ�� �ɼ�
	����������ѧ�ž�Ϊ������10���ַ����ַ������ɼ�Ϊ0��100֮���һ�����������ﱣ֤��һ�����������û������ѧ���ĳɼ�����ͬ�ġ�
	
	�����ʽ����ÿ�������������2�У���1���ǳɼ����ѧ����������ѧ�ţ���2���ǳɼ����ѧ����������ѧ�ţ��ַ�������1�ո�
	����������
	3
	Joe Math990112 89
	Mike CS991301 100
	Mary EE990830 95
	���������
	Mike CS991301
	Joe Math990112
*/
//zhicheng
//Mar.5,2018  22 min

#include<cstdio>
#include<iostream>
#include<iostream>
/*endsʵ�����������һ��'\0'�ַ�����������������Ŀո�*/
using namespace std; 

typedef struct student
{
	string name;
	string numb;
	int score;
}student;

int main()
{
	int n;
	while(cin>>n)
	{
		student stu[n];
		int cnt1,cnt2;
		int max=0,min=101;
		//input the information of student 
		for(int i=0;i<n;i++)
		{
			cin>>stu[i].name>>stu[i].numb>>stu[i].score;
		}
		//sorting and screening
		for(int i=0;i<n;i++)
		{
			if(stu[i].score<min){ min=stu[i].score;cnt1=i;}
			if(stu[i].score>max){max=stu[i].score;cnt2=i;}
		}
		//output
		cout<<stu[cnt2].name<<" "<<stu[cnt2].numb<<endl;
		cout<<stu[cnt1].name<<" "<<stu[cnt1].numb<<endl;
	}
	return 0;
}
