#include<stdio.h>

int a[100000]={0};
int main() 
{
	int i,j,n;
	int ls,s;
	ls=0;
	s=0;
	
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
		}
		else if (ls<0)
		{
			ls=0;
		}
	}
	printf("%d\n",s);
	
	return 0; 
}
