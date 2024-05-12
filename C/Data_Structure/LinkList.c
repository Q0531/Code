#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
typedef int elemtype;

typedef struct LinkList{
    elemtype data;
    struct LinkList *next;
}Lnode,*LinkList;

bool initlink(LinkList *L){
    (*L) = (Lnode*)malloc(sizeof(struct LinkList));
    (*L)->next = NULL;
    (*L)->data = 0;
    if((*L)->data ==0 && (*L)->next == NULL){
        return true;
    }
    else{
        return false;
    }
}//带头节点链表的初始化


LinkList headinsert(LinkList *L){
    elemtype num = 0;
    char justify = '0';
    do{
        printf("输入插入数字：\n");
        scanf("%d",&num);
        getchar();
        Lnode *n;
        n = (Lnode*)malloc(sizeof(struct LinkList));
        n->data = num;
        n->next = (*L)->next;
        (*L)->next = n;
        printf("是否继续输入:y/n\n");
        scanf("%c",&justify);
    }
    while(justify == 'y');

}//头插法创建链表

void print_link(LinkList L){
    Lnode *s;
    s = L->next;
    while(s != NULL){
        printf("%d",s->data);
        s = s->next;
    }
}//链表内容展示

int main(){
    LinkList L;
    initlink(&L);
    headinsert(&L);
    print_link(L);
    system("pause");
    return 0;
}





