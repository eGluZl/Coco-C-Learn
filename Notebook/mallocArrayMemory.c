//
// Created by Coco on 2021/4/6.
//

//好多错惹

#include "../src/LinkList/LinkList.h"
static int MAXSIZE = 1000;
/*数组静态分配*/
typedef struct {
    ElemType data[MAXSIZE];
    int length;
} SqList;    //顺序表类型

/*数组动态分配*/
typedef struct {
    ElemType *data;
    int length;
} SqList;    //顺序表类型

SqList L;
L.
data = (ElemType *) malloc(sizeof(ElemType) * MaxSize);
//（ElemType）的（）：强制类型转化.
// eg：（char*）:强制转化成指向char这种元素类型的指针
// 因struct定义时data为一指针，所以L.data需被赋指针型

free(*data);    //释放


