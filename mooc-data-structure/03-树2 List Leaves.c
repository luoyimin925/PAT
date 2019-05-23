#include<stdio.h>
struct tree
{
	int node;
	int left;
	int right;
};

int main()
{
	struct tree a[10];
	char l,r;
	int i,j,n,root,p;
	int check[10]={0};
	int x[10]={0};
	int store[10]={0};

	scanf("%d",&n);//save tree
	if (n>0)
	{
		for (i=0;i<n;i++)
		{
			getchar();
			a[i].node=i;
			scanf("%c %c",&l,&r);
			if (l!='-')
			{
				a[i].left=(int)(l-'0');
				check[a[i].left]=1;
			}
			else
			{
				a[i].left=-1;
			}
			if (r!='-')
			{
				a[i].right=(int)(r-'0');
				check[a[i].right]=1;
			}
			else
			{
				a[i].right=-1;
			}
		}
		for (i=0;i<n;i++)
		{
			if (check[i]==0) break;
		}
		root=i;
	}
	
	/*for (i=0;i<n;i++)
	{
		printf("%d %d %d\n",a[i].node,a[i].left,a[i].right);
	}
	printf("ROOT=%d",root);*/
	
	i=0;
	j=0;
	x[i]=root;
	for (p=0;p<n;p++)
	{
		if (!(a[x[p]].left==-1&&a[x[p]].right==-1))
		{
			if (a[x[p]].left!=-1)
			{
				i++;
				x[i]=a[x[p]].left;
			}
			if (a[x[p]].right!=-1)
			{
				i++;
				x[i]=a[x[p]].right;
			}
		}
		else
		{
			store[j]=x[p];
			j++;
		}
	}
	for (i=0;i<j-1;i++) printf("%d ",store[i]);
	printf("%d\n",store[j-1]);
	

	return 0;
}



