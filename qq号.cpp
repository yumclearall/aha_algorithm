#include <stdio.h>
int a[101]={6,3,1,7,5,8,9,2,4} ; 
//631758924 
void qqsort1(int head,int end)
{
	for(int i=head;i<end;i++)
	{
		if(i%2==0) printf("%d",a[i]);
		else if(i%2==1)
		{
			a[end]=a[i];end++;
		}	}
	printf("\n");}
void qqsort2(int head,int end)
{
	while(head<end)
	{
		printf("%d",a[head]);
		a[end++]=a[++head];
		head++;	}}
struct queue
{
	int b[101];
	int head;
	int end;
}q;
int main()
{
	qqsort1(0,9);
	qqsort2(0,9);	
	printf("\n�Ƿ�Ҫ�������루1���ǣ��������񣩣�");
	int i;
	scanf("%d",&i);
	if(i==1)
	{	
		q.head=0;q.end=0;
		printf("\n���������ĳ���:");
		scanf("%d",&i);
		printf("\n��������ֵ��");
		for(int j=0;j<i;j++)
		{
			scanf("%d",&q.b[j]);
			q.end++;	} 
		while(q.head<q.end)
		{
			printf("%d",q.b[q.head]);
			q.b[q.end++]=q.b[++q.head];
			q.head++;	}}
	else printf("����!"); 
} 
