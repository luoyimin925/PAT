#include<stdio.h>

int main()
{
	int a1[1001]={0};
	int a2[1001]={0};
	int b2[2002]={0};
	int b1[1001]={0};
	int i,j,n1,n2,c1,c2,p1,p2,k;
	k=0;
	
	scanf("%d",&n1);
	for (i=0;i<n1;i++)
	{
		scanf("%d %d",&c1,&p1);
		a1[p1]=c1;
	}
	
	scanf("%d",&n2);
	for (i=0;i<n2;i++)
	{
		scanf("%d %d",&c2,&p2);
		a2[p2]=c2;
	}
	
	//³Ë·¨
	for (i=0;i<1001;i++)
	{
		for (j=0;j<1001;j++)
		{
			if (a1[i]!=0&&a2[j]!=0)
			{
				b2[i+j]=b2[i+j]+a1[i]*a2[j];
			}
		}	
	} 
	for (i=2001;i>=0;i--)
	{
		if (b2[i]!=0&&k==0)
		{
			printf("%d %d",b2[i],i);
			k=1;	
		}
		else if (b2[i]!=0&&k==1)
		{
			printf(" %d %d",b2[i],i);	
		}	
	} 
	if (k==0)
	{
		printf("0 0");
	}
	printf("\n");
	k=0;
	
	
	//¼Ó·¨ 
	for (i=1000;i>=0;i--)
	{
		b1[i]=a1[i]+a2[i];
		if (b1[i]!=0&&k==0)
		{
			printf("%d %d",b1[i],i);
			k=1;	
		}
		else if (b1[i]!=0&&k==1)
		{
			printf(" %d %d",b1[i],i);	
		}	
	}
	if (k==0) 
	{
		printf("0 0\n");
	}
	
	return 0;
}
