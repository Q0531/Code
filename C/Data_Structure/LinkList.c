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


bool ListInsert(LinkList *L,int i,elemtype e){
    if(i<1){
        return false;
    }
        int j = 0;
        Lnode *s = *L;
    while(s != NULL && j<i-1){
            s = s->next;
            j++;
        }
    if(s == NULL){
        return false;
    }
Lnode *p = (Lnode*)malloc(sizeof(Lnode));
    p->data = e;
    p->next = s->next;
    s->next = p;
    return true;
}//带头结点的按位插入


bool listinsert(LinkList *L,int i,elemtype e){
    if(i<1)
        return false;
    if(i == 1){
        Lnode *s = (Lnode*)mallic(sizeof(Lnode));
        s->data = e;
        s->next = L;
        L = s;
        return true;
        }
    int j = 0;
    Lnode *s = L;
    while(s != NULL && j<i-1){
        s = s->next;
        j++;
    }
    if(s == NULL)
        return false;
    Lnode *p = (Lnode*)malloc(sizeof(Lnode));
    p->data = e;
    p->next = s->next;
    s->next = p;
    return true;
    }//不带头结点的按位插入

bool listdelete(LinkList *L,int i,elemtype *e){
    if(i<1)
        return false;
    Lnode *s = (*L);
    int j = 0;
    while(s != NULL && j<i-1){
        s = s->next;
        j++;
    }
    if(s = NULL)
        return false;
    Lnode *p = s->next;
    *e = p->data;
    s->next = p->next;
    free(p);
    return true;
}//带头结点的按位删除


Lnode* getelem(LinkList L,int i){
    if(i<1)
        return NULL;
    Lnode *p = L->next;
    int j = 1;
    while(p != NULL && j != i){
        p = p->next;
        j++;
    }
    return p;
}//带头结点，按位查找


LinkList List_insert_weibu(LinkList *L){
    int x = 0;
    *L = (LinkList)malloc(sizeof(Lnode));
    Lnode *r = *L, *s = *L;
    scanf("%d",&x);
    while(x != 9999){
        s = (Lnode*)malloc(sizeof(Lnode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d",&x);
    }
    r->next = NULL;
    return *L;
}//尾插法创建链表





