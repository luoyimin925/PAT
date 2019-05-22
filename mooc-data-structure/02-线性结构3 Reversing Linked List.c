#include<stdio.h>
#include<string.h>

struct lb
{
	int add;
	int val;
	int next;
};
struct lb a[100001]={0};
struct lb b[100001]={0};

int main()
{
	int i,j,n,k,chushi,address,value,nxt,ad1,ad2,c,beishu=1;
	
	scanf("%d %d %d",&chushi,&n,&k);
	for (i=0;i<n;i++)
	{
		scanf("%d %d %d",&address,&value,&nxt);
		a[address].add=address;
		a[address].val=value;
		a[address].next=nxt;
	}
	
	ad1=chushi;
	for (i=0;i<n;i++)
	{
		b[i].val=a[ad1].val;
		b[i].add=a[ad1].add;
		b[i].next=a[ad1].next;
		if (b[i].next==-1)
		{
			n=i+1;
			break;
		}
		ad1=a[ad1].next;
	}
	
	/*for (i=0;i<n;i++)
	{
		printf("%05d %d %05d\n",b[i].add,b[i].val,b[i].next);
	}*/
	//printf("\n");
	c=0;
	if (n<k)
	{
		for (i=0;i<n;i++)
		{
			printf("%05d %d %05d\n",b[i].add,b[i].val,b[i].next);
		}
	}
	else
	{
		for (beishu=1;beishu<=(n/k)-1;beishu++)
	{
		for (i=beishu*k-1;i>=(beishu-1)*k+1;i--)
		{
			printf("%05d %d %05d\n",b[i].add,b[i].val,b[i-1].add);
		}
		printf("%05d %d %05d\n",b[i].add,b[i].val,b[i+2*k-1].add);
	}
	for (i=beishu*k-1;i>=(beishu-1)*k+1;i--)
	{
		printf("%05d %d %05d\n",b[i].add,b[i].val,b[i-1].add);
	}
	if (n%k==0)
	{
		printf("%05d %d -1\n",b[i].add,b[i].val);
	}
	else
	{
		printf("%05d %d %05d\n",b[i].add,b[i].val,b[i+k].add);
		for (i=i+k;i<n-1;i++)
		{
			printf("%05d %d %05d\n",b[i].add,b[i].val,b[i+1].add);
		}
		printf("%05d %d -1\n",b[i].add,b[i].val);
	}
		
	}
	
	
	
	
	return 0;
}
