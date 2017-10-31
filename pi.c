//
// Created by jokin on 17-10-28.
//

#include "pi.h"


//* π=3.1415926535898
//商数 quotient
//余数 remainder
//分子 numerator
//分母 denominator
// *//
int getNumerator(int m);

int getDenominator(int m);

List *getSingle(int m, int deep);

List *getDouble(int n, int deep);


List *calculatePI(int m_max, int deep) {
    List *answer = getDouble(1, deep);
    for (int i = 2; i <= m_max; ++i) {

        List *dList = getDouble(i, deep);
        answer = bigAdd(answer, dList);
        freeList(dList);
    }
    return answer;
}


int getNumerator(int m) {
    return (m + 1) % 2 == 0 ? 4 : -4;
}

int getDenominator(int m) {
    return 2 * m - 1;
}

List *getSingle(int m, int deep) {
    return bigDiv(getNumerator(m), getDenominator(m), deep);
}

List *getDouble(int n, int deep) {
    int m1 = 2 * n - 1, m2 = 2 * n;
    List *m1_list = getSingle(m1, deep);
    List *m2_list = getSingle(m2, deep);
    return bigAdd(m1_list, m2_list);
}

