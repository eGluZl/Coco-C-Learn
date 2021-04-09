//
// Created by Coco on 2021/4/6.
//

#include "SortedList.h"
#include "stdio.h"
#include "stdlib.h"
#include "../common/Constants.h"

#define OVERFLOW 0
#define OK 1
#define MAXSIZE 100     //定义线性表最大长度
#define LISTINCREMENY 10

int main() {
    SqList L;
    InitList_Sq(&L);
    printf("线性表SqList初始化成功：\n");
    system("pause");
    return 0;
}

//构造一个空的顺序表L
int InitList_Sq(SqList *L) {
    L->elem = (int *) malloc(LIST_INIT_SIZE * sizeof(int));
    //动态分配地址给数组中首元素
    if (!L->elem) exit(OVERFLOW);
    //if(没有获得地址)，存储分配失败，退出并返回(OVERFLOW即0)
    L->length = 0;                        //空表长度为0
    L->listsize = MAXSIZE;
    return OK;
}

//销毁：线性表不再存在，也不占内存
void DestroyList(SqList *L) {
    if (L->elem)        //如果刚分配过空间
        free(L->elem);  //只需释放刚给基地址分配的空间即可
    L->length = 0;
}

//清空：线性表依旧存在，依旧占据空间
void ClearList(SqList *L) {
    L->length = 0;
}

//求线性表长度
int ListLength(SqList L) {
    return (L.length);
}

//判断线性表是否为空     !!线性表为空：L.length==0
int ListEmpty(SqList L) {
    if (L.length)
        return 1;
    else return 0;
}

//取第i个位置的元素的值
//int InitList_Sq
Status GetElem(SqList L, int i, int *e) {
    if (i < 1 || i > L.length)
        return ERROR;
    e = &L.elem[i - 1];      //第i-1的单元存储着第i个位置的元素
    return OK;
}

//判断元素e位置
int LocateElem(SqList L, int e) {
    for (int i = 0; i < L.length; i++) {
        if (L.elem[i] == e) {
            return i + 1;
        }
        return 0;
    }
}

//求直接前驱：
void PriorElem(SqList L, int cur_e, int *pre_e) {
    pre_e = &L.elem[cur_e - 2];
}

//求直接后继
void NextElem(SqList L, int cur_e, int *next_e) {
    next_e = &L.elem[cur_e];
}

//在线性表第i个位置插入元素
Status ListInsert(SqList *L, int i, int e) {
    if (i < 1 || i > L->length + 1) {
        return ERROR;       //i值不合法
    }
    if (L->length == MAXSIZE) {
        return ERROR;       //当前储存空间已满
    }

    for (int j = L->length - 1; j >= i - 1; j--) {
        L->elem[j + 1] = L->elem[j];
    }
    //等价于：for(int j=L->length;j>=i;j--)
    //       {L->elem[j]=L->elem[j-1];}
    L->elem[i - 1] = e;       //第i个位置下标为i-1
    L->length++;
}

//删除第i个位置的元素
Status ListDelete(SqList *L, int i) {
    if (i < 1 || i > L->length + 1)
        return ERROR;       //i值不合法
    for (int j = i; j <= L->length; j++) {
        (*L).elem[j - 1] = (*L).elem[j];
    }
    //等价于：for(int j=i-1;j<L->length-1;j++)
    //       {L->elem[j]=L->elem[j+1];}
    L->length--;
}

//显示线性表全部元素
void TraverList(SqList L) {
    for (int i = 0; i < L.length; i++) {
        printf("%d", L.elem[i]);
    }
}

//翻转线性表全部元素
void Flip(SqList L) {
    int num = L.length / 2;
    int *begin = &L.elem[num - 1];
    int *end = &L.elem[L.length - num];
    int middle;
    while (num) {
        middle = *begin;
        *begin = *end;
        *end = middle;
        num--;
        begin = &L.elem[num - 1];
        end = &L.elem[L.length - num];
    }
}