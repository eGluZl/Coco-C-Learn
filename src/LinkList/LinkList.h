//
// Created by Coco on 2021/4/8.
//

#include "../common/Constants.h"

#ifndef DEMO_LinkList_H
#define DEMO_LinkList_H

#endif //DEMO_单链表_H


//定义@单链表、@循环链表结点类型
//定义储存学生学号、姓名、成绩的单链表结点类型
/*typedef struct student{
    char num[8];                //数据域
    char name[8];               //数据域
    int score;                  //数据域
    struct student *next;       //指针域  ！！嵌套定义
}LNode,*LinkList;*/
//常用：
typedef struct {
    char num[8];                //数据域
    char name[8];               //数据域
    int score;                  //数据域
} ElemType;                      //先将数据域中要存储的多个数据项定义成结构类型
typedef struct LNode {
    ElemType data;              //用上方结构类型定义数据域data
    struct LNode *next;         //指针域
} LNode, *LinkList;

//定义@双向链表结点类型
typedef struct DulNode {
    ElemType data;
    struct DulNode *prior, *next;
} DulNode, *DulLinList;

Status GetElem_L(LinkList L, int i, ElemType e);
LinkList LinkListInit(LinkList L);
