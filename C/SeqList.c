//顺序表

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>//头文件

#define InitSize 10
typedef int ElemType;//一些声明和类型转换

typedef struct Seq{
    ElemType* data;
    int Length,MaxSize;
}SeqList;//定义数据类型



void InitList(SeqList *L){
    L->data = (ElemType*)malloc(sizeof(ElemType) * InitSize);
    L->Length = 0;
    L->MaxSize = InitSize;
    return;
}//线性表的初始化

int Length(SeqList L){
    return L.Length;
}//求表长函数

int LocateElem(SeqList L,int i){
    int e = 0;
    while(e < L.Length){
        if(L.data[e] == i){
            printf("%d",e);
            break;
        }
        return e;
    }
}//按值查找

int GetElem(SeqList L,int i){
    return L.data[i-1];
}//按位查找

bool ListInsert(SeqList * L,int i,ElemType e){
    if(i<1 || i>L->Length+1)
        return false;

    else if(L->Length == L->MaxSize)
        return false;
    
    else{
        for(int j = L->Length;j >= i;j--){
            L->data[j] = L->data[j-1];
        }
        L->data[i-1] = e;
        L->Length++;
        return true;
    }
}//插入操作

bool ListDelete(SeqList * L,int i,ElemType * e){
    if(i<1 || i>L->Length)
        return false;

    else{
        *e = L->data[i-1];
        for(int j = i;j<L->Length;j++){
            L->data[j-1] = L->data[j];
        }
        L->Length--;
        return true;
    }
}//删除操作

void IncreaseSize(SeqList *L,int len){
    ElemType *p = L->data;
    L->data = (ElemType*)malloc((L->MaxSize + len) * sizeof(ElemType*));
    for(int i = 0;i<L->Length;i++){
        L->data[i] = p[i];
    }
    L->MaxSize = L->MaxSize + len;
    free(p);
    return;
}//增加顺序表长度

bool PrintList(SeqList L){
    if(L.Length == 0)
        return false;
    
    else{
    for(int i = 0;i<L.Length;i++){
        printf("%d\n",L.data[i]);
    }
    return true;
    }
}//输出操作

bool Empty(SeqList L){
    if(L.Length == 0)
        return true;
    
    else
        return false;
}//判断是否为空表

void DestroyList(SeqList * L){
    if(L != NULL){
        free(L->data);
        free(L);
    }
}//线性表的销毁


// int main(){

//     return 0;
// }
