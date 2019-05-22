#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* ϸ���ڴ˲��� */
void Print( List L ); /* ϸ���ڴ˲������������NULL */

List Merge( List L1, List L2 );

int main()
{
    List L1, L2, L;
    L1 = Read();
    L2 = Read();
    L = Merge(L1, L2);
    Print(L);
    Print(L1);
    Print(L2);
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

List Merge(List L1,List L2)
{
    if(L1==NULL&&L2=NULL)
        return NULL;
    List L=(List)malloc(sizeof(struct Node));
    List p1=L1->Next,p2=L2->Next,p=L;
    while(p1&&p2)
    {
        int t=p1->Data-p2->Data;
        if(t>=0)
        {
            p->Next=p2;
            p2=p2->Next;
        }
        else
        {
            p->Next=p1;
            p1=p1->Next;
        }
        p=p->Next;
    }
    if(p1) p->Next=p1;
    else if(p2) p->Next=p2;
    L1->Next=NULL;
    L2->Next=NULL;
    return L;
}
