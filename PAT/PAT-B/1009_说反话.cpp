/*
	����һ��Ӣ�Ҫ�����д���򣬽��������е��ʵ�˳��ߵ������
	
	�����ʽ�������������һ��������������һ���ڸ����ܳ��Ȳ�����80���ַ������ַ��������ɵ��ʺ����ɿո���ɣ����е�������Ӣ����ĸ����Сд�����֣���ɵ��ַ���������֮����1���ո�ֿ������뱣֤����ĩβû�ж���Ŀո�
	�����ʽ��ÿ���������������ռһ�У���������ľ��ӡ�
	
	����������
	Hello World Here I Come
	���������
	Come I Here World Hello
*/

//zhicheng
//Mar 7,2018
//����1��strtok�и�˼��--------------------------------------------------------- 
#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;

int main()
{
	char str[80];
	const char *ch = " ";
	char *result;
	vector<char *> v;
	gets(str);//ע���õ���gets()���������ո�ɨ���ȥ

	result = strtok(str,ch);
	while(result!=NULL)
	{
		v.push_back(result);
		result = strtok(NULL,ch);
	}
	for(int i=v.size()-1;i>=0;i--)
	{
		if(i!=0)
			cout<<v[i]<<" ";
		else
			cout<<v[i];
	}
	return 0;	
}
/*
//����2��ջ��˼��--------------------------------------------------------------- 
#include <iostream>  
#include <stack>  
#include <string>  
using namespace std;  
int main()  
{  
    stack<string> s;  
    string  sp;  
    bool flag=false;  
    while(cin>>sp)  
        s.push(sp);  
      
    while(!s.empty())  
    {  
        if(flag)  
            cout<<" ";  
        else  
            flag=true;  
        cout<<s.top();  
        s.pop();  
      
    }  
    return 0;  
}  
*/

