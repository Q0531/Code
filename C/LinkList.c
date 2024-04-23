//带头结点的单链表

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> //头文件

typedef int ElemType;

typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;

void InitLink(LinkList *L){
    (*L) = (LinkList)malloc(sizeof(LNode));
    (*L)->next = NULL;
    return;
}//单链表的初始化

void LinkList_Head_Insert(LinkList *L,ElemType arr[],int len){//把天才修建在图书馆里的一定是个会议室
    LNode *s;
    for(int i = 0;i <len;i++){
        s = (LNode*)malloc(sizeof(LNode));
        s->data = arr[i];
        s->next = (*L)->next;
        (*L)->next = s;
    }
    return;
}//单链表的赋值(头插法)

bool List_Print(LinkList L){
    LNode *p = L->next;
    while(p != NULL){
        printf("%d\n",p->data);
        p = p->next;
    }
    return true;
}

int main(){
    LinkList L;
    int arr[] = {0,1,2,3,4};
    int len = (sizeof(arr) / sizeof(arr[0]));
    InitLink(&L);
    LinkList_Head_Insert(&L,arr,len);
    List_Print(L);
    system("pause");
    return 0;
}




