//
// Created by Coco on 2021/4/9.
//

#include "MergeSortedList.h"

void MergeList_Sq(SqList LA,SqList LB,SqList &LC){
    LC.length = LA.length+LB.length;
    LC.elem = (int *)malloc(LC.length * sizeof(int));
    int *pa,*pb,*pa_last,*pb_last;
    pa = LA.elem;
    pb = LB.elem;              //pa、pb分别指向表中第一个元素
    pc = LC.elem;                           //pc指向表中第一个元素
    pa_last = LA.elem + LA.length - 1;          //LA.elem为基地址，加长度减一，为最后一个元素的地址
    pb_last = LB.elem + LB.length - 1;          //指针pb_last指向LB表的最后一个元素
    while(pa<=pa_last && pb<=pb_last){      //@@两个表都未到达表尾
//        if(*pa<=*pb){
//            *pc++ = *pa++;

//        }else {
//            *pc++ = *pb++;
//        }
        *pa<=*pb ? ( *pc++ = *pa++) : (*pc++ = *pb++)
    }
    while(pa<=pa_last){
        *pc++ = *pa++;
    }        //LB表已到达表尾，将LA中剩余元素加入LC
    while(pb<=pb_last){
        *pc++ = *pb++;
    }
}

