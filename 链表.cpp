#include <stdio.h>
#include <stdlib.h> 
struct node{
	int data;
	struct node *next;
}*head,*p,*q,*t;
int main()
{
	int a,n;
//	malloc(4); malloc(sizeof(int));
//	q=(int *)malloc(sizeof(int)); *q=10;
	printf("Ҫ���뼸������");
	scanf("%d",&n);
	printf("�����룺");
	head=NULL;
	for(int i=1;i<=n;i++) 
	{
	p=(struct node *)malloc(sizeof(struct node)); 
	scanf("%d",&a);
	p->data=a;
	p->next=NULL;
	if(head==NULL) head=p;
	else q->next=p;
	q=p;	}
	printf("����Ҫ���������");
	scanf("%d",&a);
	t=head;
	while(t!=NULL)
	{
		if(t->next->data>a)
		{
			p=(struct node *)malloc(sizeof(struct node));
			p->data=a;p->next=t->next;
			t->next=p;
			break;	 
		}
		t=t->next;
	}
	t=head;
	while(t!=NULL)
	{
		printf("%d ",t->data);
		t=t->next;
	}
	getchar();getchar();
	return 0;
}
