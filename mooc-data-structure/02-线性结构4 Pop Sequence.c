#include<stdio.h>
#include <stdlib.h> 
#define MaxSize 1001
 
typedef struct SNode *Stack; 
struct SNode
{  
	int Data[MaxSize];
	int capacity;
	int Top;
};

Stack CreatStack(int M)//��ʼ��һ����ջ 
{
	Stack s=(Stack)malloc(sizeof(struct SNode));
	s->Top=-1;
	s->capacity=M;
	return s;
}

int push(Stack a,int x)//��ջ��ʧ�ܷ���0 
{
	if (a->Top==a->capacity-1)
	{
		return 0;
	}
	else
	{
		a->Data[++(a->Top)]=x;
		return 1;
	}
}

int pop(Stack a)//��ջ��ջ�շ���0 
{
	if (a->Top==-1)
	{
		return -1;
	}
	else
	{
		return a->Data[(a->Top)--];
	}
}

int main()
{
	int m,n,i,j,k,c,x,k1,mark=-1;
	Stack a;
	c=0;
	
	scanf("%d %d %d",&m,&n,&k);
	for (i=0;i<k;i++)//��K�� 
	{
		k1=2;
		a=CreatStack(m);
		push(a,1);
		for (j=1;j<=n;j++)//ÿ��n����
		{
			scanf("%d",&x);
			for (k1=k1;k1<=n+1;)
			{
				if (a->Data[a->Top]==x)
				{
					mark=pop(a);
					if (mark==0)
					{
						c=1;
					}
					break;
				}
				mark=push(a,k1);
				k1++;
				if (mark==0)
				{
					c=1; 
					break;
				}
			}
		}
		if (a->Top==-1&&c==0)
		{
			printf("YES\n");
			c=0;
		}
		else
		{
			printf("NO\n");
			c=0;
		}
	} 
	
	
	
	
	
	return 0;
}
