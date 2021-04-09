//
// Created by Coco on 2021/4/9.
//

#ifndef DEMO_MERGE_SORTED_LIST_H
#define DEMO_MERGE_SORTED_LIST_H

#endif //DEMO_有序表合并_H

typedef struct{
    int *elem;
    int length,listsize;
}SqList;

typedef struct DuLNode{
    int data;
    struct DuLNode *prior,*next;
}DuList,*DuLinkList;

void MergeList_Sq(SqList LA,SqList LB,SqList LC);
void MergeList_L(DuLinkList La, DuLinkList Lb, DuLinkList Lc);