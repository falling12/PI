//
// Created by jokin on 17-10-28.
//

#include "number.h"

//商数 quotient
//余数 remainder
//分子 numerator
//分母 denominator
//  "/"取商   "%"取余

//TODO 规定list首位元素的正负代表整体正负
//

//输入的除数和被除数必须为整数，暂时不支持小数的bigDiv
List *bigDiv(int numerator, int denominator, int deep) {

//    分子，分母
//    numerator = 300000, denominator = 987;

//    deep = 1000;

//     商，余数
    int quotient, remainder;


    List *answer = creatList();

    for (int i = 0; i < deep; ++i) {
//        取商
        quotient = numerator / denominator;
//        取余
        remainder = numerator % denominator;
//        将商加入list
        add(answer, quotient);
//        将余数×10作为新分子
        numerator = remainder * 10;
//        分母不变
        denominator = denominator;
    }
//    循环结束后返回所得数据
    return answer;
}

//bigAdd应该包含加减两种情况
List *bigAdd(List *list_x, List *list_y) {
    List *answer = creatList();
    int length = len(list_x) < len(list_y) ? len(list_x) : len(list_y);

//    length-1是因为length是从一开始计数，get下标是从0开始
    int h = 0, s = 0;
//    h代表进位 s代表留位

    for (int i = length - 1; i >= 0; --i) {
        int x = get(list_x, i);
        int y = get(list_y, i);

//        将当前位的x，y和进位的h相加 然后判断进位和留位情况
        int current = x + y + h;
        if (current >= 0) {
            h = current / 10;
            s = current % 10;
        } else {
            h = current / 10 - 1;
            s = current + (-h) * 10;
//         h应该恒为负
            if (h >= 0) {
                printf("error");
            }
        }
//        第一个元素直接相加不用考虑进位问题
        if (i == 0) {
            s = current;
        }
        add(answer, s);
    }
//    for end
    return sort(answer);
//  TODO  注意此时的answer为倒置的数据
}



