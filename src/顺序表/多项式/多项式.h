//
// Created by Coco on 2021/4/6.
//

#ifndef DEMO_多项式_H
#define DEMO_多项式_H

#endif //DEMO_多项式_H

#typedef MAXSIZE 1000       //多项式可能达到的最大长度

//先把多项式中每一个元素的类型定义好，定义为Polynomial型
//再用该类型定义数组elem用以储存该数组

typedef struct {        //多项式非零项定义
    float p;            //系数
    int e;              //指数
}Polynomial;

//顺序表结点定义
typedef struct {
    Polynomial *elem;   //定义一个数组，用以存储该表
                        //表示存储空间的基地址
                        //该数组是Polynomial型，Polynomial是上方定义的结构类型
    int length;         //多项式中当前项个数
}SqList;                //定义一个线性表，包括两个变量：数组elem和整数int
                        //多项式的顺序存储结构类型为SqList

//链表结点定义
typedef struct PNode{
    float coef;
    int expn;
    struct PNode *next;
}PNode,*Polynomial;