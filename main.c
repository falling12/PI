#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "list.h"
#include "number.h"
#include "pi.h"

//0 FLASE
//                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   not 0 TRUE
void testList();

void testNumber();


int main() {
    List *pi = calculatePI(1000000,10);
    printfList(pi);
    printf("\n");
    return 0;
}

void testList() {
    List *head = creatList();

    add(head, 1);
    add(head, 2);
    add(head, 3);
    add(head, 4);
    printfList(head);
    printf("\n");
    printf("get(0):%d\n", get(head, 0));
    printf("get(1):%d\n", get(head, 1));
    printf("get(2):%d\n", get(head, 2));
    printf("get(3):%d\n", get(head, 3));
    head = sort(head);
    printfList(head);
    printf("\n");
    printf("get(0):%d\n", get(head, 0));
    printf("get(1):%d\n", get(head, 1));
    printf("get(2):%d\n", get(head, 2));
    printf("get(3):%d\n", get(head, 3));
//    freeList(head);
}

void testNumber() {
    List *answer1 = bigDiv(323, 3, 1000);
    printf("answer1:");
    printfList(answer1);
    printf("\n");

    List *answer2 = bigDiv(32, -7, 1000);
    printf("answer2:");
    printfList(answer2);
    printf("\n");

    List *addAnswer = bigAdd(answer1, answer2);
    printf("Added:");
    printfList(addAnswer);
    printf("\n");


}

