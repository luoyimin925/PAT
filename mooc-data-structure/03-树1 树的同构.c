#include<stdio.h>
struct tree
{
	char element;
	int left;
	int right;
};

int main()
{
	struct tree r1[10];
	struct tree r2[10];
	char l,r;
	int i,n1,n2,root1,root2;
	int check[10]={0};

	scanf("%d",&n1);//save tree1 
	if (n1>0)
	{
		for (i=0;i<n1;i++)
		{
			getchar();
			scanf("%c %c %c",&r1[i].element,&l,&r);
			if (l!='-')
			{
				r1[i].left=(int)(l-'0');
				check[r1[i].left]=1;
			}
			else
			{
				r1[i].left=-1;
			}
			if (r!='-')
			{
				r1[i].right=(int)(r-'0');
				check[r1[i].right]=1;
			}
			else
			{
				r1[i].right=-1;
			}
		}
		for (i=0;i<n1;i++)
		{
			if (check[i]==0) break;
		}
		root1=i;
	}
	
	for (i=0;i<10;i++) check[i]=0;//return 0 
	
	scanf("%d",&n2);//save tree2
	if (n2>0)
	{
		for (i=0;i<n2;i++)
		{
			getchar();
			scanf("%c %c %c",&r2[i].element,&l,&r);
			if (l!='-')
			{
				r2[i].left=(int)(l-'0');
				check[r2[i].left]=1;
			}
			else
			{
				r2[i].left=-1;
			}
			if (r!='-')
			{
				r2[i].right=(int)(r-'0');
				check[r2[i].right]=1;
			}
			else
			{
				r2[i].right=-1;
			}
		}
		for (i=0;i<n2;i++)
		{
			if (check[i]==0) break;
		}
		root2=i;
	}
	
	/*for (i=0;i<n2;i++)
	{
		printf("%c %d %d\n",r2[i].element,r2[i].left,r2[i].right);
	}
	printf("ROOT=%d",root2);*/
	
	int j,same=1;
	int same1=0;
	char cleft1,cleft2,cright1,cright2;
	
	for (i=0;i<n1;i++)
	{
		if (r1[i].left!=-1) cleft1=r1[r1[i].left].element;
		else cleft1='-';
		if (r1[i].right!=-1) cright1=r1[r1[i].right].element;
		else cright1='-';
		
		for (j=0;j<n2;j++)
		{
			if (r2[j].element==r1[i].element)
			{
				if (r2[j].left!=-1) cleft2=r2[r2[j].left].element;
				else cleft2='-';
				if (r2[j].right!=-1) cright2=r2[r2[j].right].element;
				else cright2='-';
				
				same1=1;
				break;
			}
		}
		
		if (same1==0)
		{
			same=0;
			break;
		}
		
		if ((cleft1==cleft2&&cright1==cright2)||(cleft1==cright2&&cright1==cleft2))
		{
			//printf("%c %c %c  %c %c %c\n",r1[i].element,cleft1,cright1,r2[j].element,cleft2,cright2);
		}
		else
		{
			same=0;
			break;
		}
	}
	if (same==0) printf("No\n");
	if (same==1) printf("Yes\n");
	
	


	return 0;
}



