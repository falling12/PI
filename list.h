//
// Created by jokin on 17-10-27.
//

#ifndef PI_LIST_H
#define PI_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <zlib.h>

#endif //PI_LIST_H
typedef struct List List;


List *creatList();

void add(List *head, int vaule);

int get(const List *head, int offset);

int len(const List *head);

//将数组倒置
List *sort(List *head);

void freeList(List *head);

void printfList(List *head);