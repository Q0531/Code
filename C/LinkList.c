#include <stdio.h>
 
typedef int ElemType;

typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;

void InitLink(LinkList *L){
    printf("1");
}