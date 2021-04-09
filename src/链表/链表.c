//
// Created by Coco on 2021/4/8.
//

#include "链表.h"

//@单链表初始化：①点生成新结点作为头结点，用头指针L指向头结②将头结点的指针域置空
LinkList LinkListInit(LinkList &L){
    L = (LinkList) malloc(sizeof(LNode));       //生成新结点作为头结点，用头指针L指向头结

    if(L==NULL){
        printf("申请内存空间失败");
    }
    L->next = NULL;             //初始化一个空链表，即头结点指针域置空
    return L;
}

//判断@单链表是否为空，空则返回1
int ListEmpty(LinkList L) {
    if (L->next)         //L非空
        return 0;
    else
        return 1;
}

//对比销毁与清空单链表：销毁是先销毁头，再销毁后面；清空是先保留头，再销毁后面，最后把头指向空
//@单链表销毁：销毁后不存在：从头结点开始，依次释放所有结点
Status DestroyList_L(LinkList &L){
    LNode *p;
    while(L){             //L非空
        p = L;            //p指向头结点
        L = L->next;      //L指向下一结点
        free P;
    }
    return OK;
}
//清空@单链表：清空后链表存在，成为空链表，头指针和头结点还在
//①依次释放所有结点，并将头结点指针设置为空
Status ClearList_L(LinkList &L){
    LNode *p, *q;
    p = L->next;        //p指向首元结点
    while(p){
        q = p->next;
        free p;
        p = q;
    }
    L->next=NULL;       //初始化,即头结点指针域置空
}

//求@单链表表长
int ListLength_L(LinkList L){
    LNode *p;
    p-L->next;
    i=0;
    while(p){           //p为空时退出循环
        i++;
        p=p->next;
    }
}

//获取@单链表L第i个位置的元素，并用e返回（对比下在i位置插入元素）
Status GetElem_L(LinkList L,int i,ElemType &e){
    p=L->next;j=1;
    if(!p||j>i) return ERROR;        //p为空即i超出表长或第i个元素位置非法即i<1
    while(p&&j<i){                   //p非空且元素位置i合法
        p=p->next;++j;               //j为计数器
    }
    e=p->data;
    return OK;
}

//查找元素e并返回其地址
LNode *LocateElem_L(LinkList L,ElemType e){
    p=L->next;
    while(p&&p->data!=e)    //没找到
        p=p->next;
    return p;   //找到即(p->data=e)或没找到即(!p)即p指向空，返回p或返回p即指向空
}
//查找元素e并返回其位置
LNode LocateElem_L(LinkList L,ElemType e){
    p=L->next;j=1;
    while(p&&p->data!=e){   //没找到
        p=p->next;j++;
    }
    if(p)return j;      //找到即(p->data=e)，返回j
    else return 0;      //没找到即(!p)即p指向空，返回0
}

//在@单链表L第i个结点前插入元素e:①获取第i-1个位置②插入e表长+1


//将@单链表L中第i个结点的元素删除,并将元素用e返回
Status ListDelete_L(LinkList &L,int i,ElemType &e){
    LNode *q;*p;
    p=L;                    //p也指向头结点
    int j=0;int i;
    if(!p||j>i-1) return ERROR;     //删除位置不合理
    while(p&&j<i-1){
        p=p->next;++j;      //j=i-1,即p指向i-1个结点，即第i-1个结点的储存位置为p
    }
    q=p->next;              //将q接在p后
    p->next=q->next;        //将p指向下一个结点，等价于p->next=p->next->next
    e=q->data;
    free q;
    return OK;
}

//头插法建立@单链表
void CreateList_H(LinkList &L,int n){
    L = (LNode*)malloc(sizeof(LNode));      //生成头结点，用头指针L指向
    L->next = NULL;                         //初始化
    for(i=n;i>0;--i){
        LNode *p;
        p = (LNode*)malloc(sizeof(LNode));
        scanf(&p->data);                    //键入一个值放在p指针的data域
        p->next = L->next;                  //把头结点指向的结点接在p后，p代替头结点
        L->next=p;                          //头结点接在新结点前
    }
}

//尾插法建立@单链表
void CreateList_T(LinkList &L,int n){
    L = (LNode*)malloc(sizeof(LNode));
    L-next = NULL;
    LNode *t;
    t = L;              //尾指针t也指向头结点
    for(i=0;i<n;i++){
        p = (LNode*)malloc(sizeof(LNode));  //生成新结点
        scanf(&p->data);                    //键入新结点的值
        p->next = NULL;                     //新结点指向空
        r->next = p;                        //新结点接在最后一个节点后
        r = p;                              //尾指针指向变化后的最后一个结点
    }
}

//带尾指针的@循环单链表的合并      @@合并后类型仍为LinkList
LinkList Connect(LinkList Ta,LinkList Tb){
    p=Ta->next;                 //p指向Ta的头结点
    Ta->next = Tb->next;        //Tb首元结点接在Ta表尾
    free Tb->next;              //释放Tb头结点
    Tb->next = p;               //Tb表头指向Ta表头
    return Tb;                  //返回指针Tb
}

//带头指针的@双向循环链表第i个位置插入e
void ListInsert_Dul(DuLinkList &L,int i,ElemType e){
    if(!(p=GetElem_DuL(DuL,i,))) return ERROR;
    s = (LNode*)malloc(sizeof(LNode));
    s->data = e;
    s->prior = p->prior;
    p->prior->next = s;
    s->next = p;
    p->prior = s;
    return OK;
}

//删除带头结点的@双向循环链表的第i个元素，并用e返回
//todo /
void ListDelete_Dul(DuLinkList &L,int i,ElemType &e){
    if(!(p=GetElem_DuL(DuL,i,))) return ERROR;
    e = p->data;
    p->prior->next = p->next;
    p->next->prior = p->prior;
    free(p);
    return OK;
}