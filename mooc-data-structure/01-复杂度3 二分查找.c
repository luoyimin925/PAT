#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define NotFound 0
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* ±£´æÏßÐÔ±íÖÐ×îºóÒ»¸öÔªËØµÄÎ»ÖÃ */
};

List ReadInput(); /* ²ÃÅÐÊµÏÖ£¬Ï¸½Ú²»±í¡£ÔªËØ´ÓÏÂ±ê1¿ªÊ¼´æ´¢ */
Position BinarySearch( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    Position P;

    L = ReadInput();
    scanf("%d", &X);
    P = BinarySearch( L, X );
    printf("%d\n", P);

    return 0;
}

Position BinarySearch(List L, ElementType X)
{
	Position left=1,right=L->Last;
	while(left<right)
	{
		Position mid=(left+right)/2;
		if (X==L->Data[mid])
		{
			return mid;
		}
		else if (X<L->Data[mid])
		{
			right=mid;
		}
		else
		{
			left=mid;
		}
	}
	
	
	return NotFound;
}
