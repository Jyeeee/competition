#include<stdio.h>
#define Max 1000
int number;
int data[Max];
int num0=0,num1=0,num2=0,num4=0;
double num3=0;
/*-----------------------------------------------------*/
void fun0(int num)//�ܱ�5����������������ż���ĺ�
{
    if(!num%2) num0+=num;
}
void fun1(int num)//����5������1�����ְ�����˳����н�����ͣ�������n1-n2+n3-n4...
{
    static int count_fun1=1;
    if(!count_fun1%2) num1-=num;
    else         num1+=num;
    count_fun1++;
}
void fun2()//��5������2�����ֵĸ���
{
    num2++;
}
void fun3(int num)//��5������3�����ֵ�ƽ��������ȷ��С�����1λ
{
    static int count_fun3=0;
    static int numb_fun3=0;
    count_fun3++;//����
    numb_fun3+=num;//������
    num3=numb_fun3*1.0/count_fun3;
}
void fun4(int num)//��5������4���������������
{
    if(num4<num) num4=num;
}
/*-----------------------------------------*/
int main()
{
    int select;
    scanf("%d",&number);
    //��ʼ��
    for(int i=0;i<number;i++)
    {
        scanf("%d",&data[i]);
    }
    //��ÿ�����ݽ��з��ദ��
    for(int i=0;i<number;i++)
    {
        select=data[i]%5;
        switch(select)
        {
            case 0:fun0(data[i]);break;
            case 1:fun1(data[i]);break;
            case 2:fun2();break;
            case 3:fun3(data[i]);break;
            case 4:fun4(data[i]);break;
        }
    }
    //������
    if(!num0) printf("N ");
    else      printf("%d ",num0);
    if(!num1) printf("N ");
    else      printf("%d ",num1);
    if(!num2) printf("N ");
    else      printf("%d ",num2);
    if(!num3) printf("N ");
    else      printf("%.1f ",num3);
    if(!num4) printf("N ");
    else      printf("%d ",num4);
    return 0;
}
