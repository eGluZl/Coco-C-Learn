//
// Created by Coco on 2021/4/9.
//

#include "有序表合并.h"

void MergeList_L(DuLinkList &La, DuLinkList&Lb, DuLinkList &Lc){
    pa = La->next;
    pb = Lb->next;        //pa指向La的首元结点
    pc=Lc=La;                           //用La的头结点作为Lc的头结点，pc指向头结点,直接在La上操作
    while(pa && pb){
        if(pa->data<=pb->data){pc->next = pa;pc = pa;pa = pa->next;}
        else{pc->next = pb;pc = pb;pb = pb->next;}
        pc->next = pa?pa:pb;             //插入剩余段
        free Lbc                         //释放Lb头结点
   }

    int i = 9;
    while(i > 5){
        //do something
        i--;
    }


}