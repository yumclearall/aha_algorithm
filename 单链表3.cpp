#include <stdio.h>
#include <stdlib.h>
struct Intp{	int data;		struct Intp *next;
}*p,*q,*t,*f1,*f2,*f3;
int main(){
	int n,m=5,l=5;
	f1=(struct Intp *)malloc(sizeof(struct Intp));
	f1->next=NULL;		q=f1;
	while(m--)	{		
		scanf("%d",&n);
		p=(struct Intp *)malloc(sizeof(struct Intp));
		p->data=n;	p->next=NULL;	q->next=p;	q=p;	}
	f2=(struct Intp *)malloc(sizeof(struct Intp));
	f2->next=NULL;		q=f2;
	while(l--)		{		
		scanf("%d",&n);
		p=(struct Intp *)malloc(sizeof(struct Intp));
		p->data=n;	p->next=NULL;	q->next=p;	q=p;	}
	f1=f1->next;	f2=f2->next;
	f3=(struct Intp *)malloc(sizeof(struct Intp));
	f3->next=NULL;		q=f3;
	while(f2!=NULL&&f1!=NULL)		{
		if(f1->data>f2->data)		{	p=f2;	f2=f2->next;	}
		else						{	p=f1;	f1=f1->next;	}	
		p->next=NULL;			q->next=p;			q=p;			}
	while(f1!=NULL)		{		
		p=f1;	f1=f1->next;	p->next=NULL;	
		q->next=p;			q=p;			}
	while(f2!=NULL)		{
		p=f2;	f2=f2->next;	p->next=NULL;
		q->next=p;			q=p;			}
	t=f3->next;					printf("²åÈë:\n");	
	while(t!=NULL)		{
		printf("%d ",t->data);			t=t->next;		}
	getchar();getchar();
	return 0; } 
