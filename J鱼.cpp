#include <stdio.h>
struct queue 
{
	int a[1000];
	int head;
	int tail;
}q1,q2;
struct stack
{
	int data[10];
	int top;
}s;
void p1()
{
	printf("�ṹ�Զ���ʼ��!"); 
		q1.a[1]=2;q1.a[2]=4;q1.a[3]=1;q1.a[4]=2;q1.a[5]=5;q1.a[6]=6;
		q2.a[1]=3;q2.a[2]=1;q2.a[3]=3;q2.a[4]=5;q2.a[5]=6;q2.a[6]=4;
		q1.tail=7;q2.tail=7;
}
void aq1()
{
	int t=q1.a[q1.head],flag=0;
	for(int i=1;i<=s.top;i++)
		if(t==s.data[i]){
			flag=1;break;	}
	if(flag==0){
		q1.head++;
		s.top++;
		s.data[s.top]=t;
	}
	if(flag==1){
		q1.head++;
		q1.a[q1.tail++]=t;
		while(s.data[s.top]!=t)
			q1.a[q1.tail++]=s.data[s.top--];
	}
	};
void aq2()
{
	int t=q2.a[q2.head],flag=0;
	for(int i=1;i<=s.top;i++)
		if(t==s.data[i]){
			flag=1;break;	}
	if(flag==0){
		q2.head++;
		s.data[++s.top]=t;
	}
	if(flag==1){
		q2.head++;
		q2.a[q2.tail++]=t;
		while(s.data[s.top]!=t)
			q2.a[q2.tail++]=s.data[s.top--];
	}
	};
void bq1()
{
	if(q1.head==q1.tail) 
	{
	printf("\nb win!\nb��ǰ���е����ǣ�");
	for(int i=q2.head;i<q2.tail;i++) 
		printf("%d ",q2.a[i]);
	}
	
};
void bq2()
{
	if(q2.head==q2.tail) 
	{
		printf("\na win!\na��ǰ���е����ǣ�");
		for(int i=q1.head;i<q1.tail;i++) 
			printf("%d ",q1.a[i]);
	}
	
};
void s_data()
{
	if(s.top>0)
	{
		printf("\n���ϵ����ǣ�");
		for(int i=1;i<=s.top;i++) 
			printf("%d ",s.data[i]);
	} 
	else printf("\n����û�����ˣ�");
};
void check()
{
	if(q1.tail==q1.head&&q1.tail==q2.head)
		printf("\nδ֪����!"); 
}

int main()
{     
	printf("--------�𹳵���--------\n");
	q1.tail=1;q1.head=1;
	q2.head=1;q2.tail=1;
	s.top=0;
	int i;
	printf("�Ƿ�Ҫ������������(1���ǣ���������)��");
	scanf("%d",&i);
	if(i==1)
	{
		printf("\n������a������(����)��");
		for(i=1;i<=6;i++)
			scanf("%d",&q1.a[q1.tail++]);
		printf("\n������b�����ƣ�");
		for(i=1;i<=6;i++)
			scanf("%d",&q2.a[q2.tail++]);
		}
	else p1();
	while(q1.head<q1.tail&&q2.head<q2.tail)
	{
		aq1();
		aq2();
	}
	bq1();
	bq2();
	s_data();
	check();
	}

