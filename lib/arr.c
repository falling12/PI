//
// Created by jokin on 17-10-30.
//

#include "arr.h"

int *creatArr(int deep) {
    int *arrPointer;
    arrPointer = (int *) malloc(deep * sizeof(int));
    return arrPointer;
}