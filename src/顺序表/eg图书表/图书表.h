//
// Created by Coco on 2021/4/6.
//

#ifndef DEMO_图书表_H
#define DEMO_图书表_H

#endif //DEMO_图书表_H

#define MAXSIZE 10000       //图书表可能达到的最大长度

//先把图书表中每一个元素的类型定义好，定义为Book型
//再用该类型定义数组elem用以储存该数组

typedef struct{     //图书信息定义
    char id[20];
    char name[50];
    int price;
}Book;
//或 struct Book{123};

//顺序表结点定义
typedef struct {
    Book *elem;     //定义一个数组，用以存储该表
                    //表示存储空间的基地址
                    //该数组是Book型，Book是上方定义的结构类型
    int length;     //图书表中当前图书个数
}SqList;            //定义一个线性表，包括两个变量：数组elem和整数int// 图书表的顺序存储结构类型为SqList

//链表结点定义
typedef struct LNode{
    Book data;
    struct LNode *next;
}LNode,*LinkList;