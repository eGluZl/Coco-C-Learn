//
// Created by Coco on 2021/4/9.


#include <malloc.h>
#include "MergeSortedList.h"

//顺序表 合并
void MergeList_Sq(SqList LA, SqList LB, SqList LC) {
    LC.length = LA.length + LB.length;
    LC.elem = (int *) malloc(LC.length * sizeof(int));
    int *pa, *pb, *pc, *pa_last, *pb_last;
    pa = LA.elem;
    pb = LB.elem;              //pa、pb分别指向表中第一个元素
    pc = LC.elem;                           //pc指向表中第一个元素
    pa_last = LA.elem + LA.length - 1;          //LA.elem为基地址，加长度减一，为最后一个元素的地址
    pb_last = LB.elem + LB.length - 1;          //指针pb_last指向LB表的最后一个元素
    while (pa <= pa_last && pb <= pb_last) {      //@@两个表都未到达表尾
//        if(*pa<=*pb){
//            *pc++ = *pa++;

//        }else {
//            *pc++ = *pb++;
//        }
        *pa <= *pb ? (*pc++ = *pa++) : (*pc++ = *pb++);
    }
    while (pa <= pa_last) {
        *pc++ = *pa++;
    }        //LB表已到达表尾，将LA中剩余元素加入LC
    while (pb <= pb_last) {
        *pc++ = *pb++;
    }
}

//链表 合并
void MergeList_L(DuLinkList La, DuLinkList Lb, DuLinkList Lc) {
    struct DuLNode *pa, *pb, *pc;
    pa = La->next;
    pb = Lb->next;        //pa指向La的首元结点
    pc = Lc = La;         //用La的头结点作为Lc的头结点，pc指向头结点,直接在La上操作
    while (pa && pb) {
        if (pa->data <= pb->data) {
            pc->next = pa;
            pc = pa;
            pa = pa->next;
        }
        else {
            pc->next = pb;
            pc = pb;
            pb = pb->next;
        }
        pc->next = pa ? pa : pb;             //插入剩余段
        free(Lb->prior);                          //释放Lb头结点
    }

    int i = 9;
    while (i > 5) {
        //do something
        i--;
    }
}

