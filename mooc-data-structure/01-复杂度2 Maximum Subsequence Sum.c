#include<stdio.h>

int a[100000]={0};
int main() 
{
	int i,j,n,head,end,c;
	int ls,s;
	ls=0;
	s=0;
	head=-1;
	end=-1;
	c=0;
	j=0;
	
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (i=0;i<n;i++)
	{
		ls=ls+a[i];
		if (ls>s)
		{
			s=ls;
			head=j;
			end=i;
		}
		else if (ls<0)
		{
			ls=0;
			j=i+1;
		}
	}
	printf("%d ",s);
	if (head==-1)
	{
		printf("0 ");
	}
	else
	{
		printf("%d ",a[head]);
	}
	
	if (end==-1)
	{
		printf("0 ");
	}
	else
	{
		printf("%d\n",a[end]);
	}
	
	return 0; 
}
