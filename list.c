//
// Created by jokin on 17-10-27.
//

#include "list.h"


struct List {
    int vaule;
    List *next;
};

List *creatList() {
    List *head = (List *) malloc(sizeof(List));
    head->vaule = -1;
    head->next = NULL;
    return head;
}

void add(List *head, int value) {

//    寻找到最后一个,然后再其后添加新节点
    List *last = head;
    while (last->next != NULL) {
        last = last->next;
    }
//创建新节点
    List *p = (List *) malloc(sizeof(List));
    p->vaule = value;
    p->next = NULL;
//将最后一个节点的指针指向新加节点p
    last->next = p;
//    printf("added:%5d   ", value);
//    printf("p:%p\n", p);
}

int len(const List *head) {
    int len = 0;
    List *p;
    p = head->next;
    while (p != NULL) {
        len++;
        p = p->next;
    }

    return len;
}

int get(const List *head, int offset) {
//    TODO 没有加入传入类型判断
    if (head == NULL || offset > len(head)) {
        return NULL;
    }
    int len = 0;
    List *p;
    p = head->next;
    while (p != NULL) {
        if (offset == len) {
            return p->vaule;
        }
        len++;
        p = p->next;

    }
    return NULL;

}

//TODO 可能会存在内存泄露问题
List *sort(List *head) {
    List *target = creatList();
    for (int i = len(head) - 1; i >= 0; --i) {
        add(target, get(head, i));
    }
    return target;
}

void freeList(List *head) {
    List *p;
    p = head;
    while (p != NULL) {
        List *temp;
        head = p->next;
        temp = p;
        p = head;
        if (temp != NULL) {
//            printf("freed:%p\n", temp);
            free(temp);

        }
    }
}

void printfList(List *head) {
    List *p;
    p = head->next;
    while (p != NULL) {
        printf("%d ", p->vaule);
        p = p->next;
    }
}

