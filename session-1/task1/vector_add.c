
/*
 * Sum of 2 vectors
 */

#include <stdio.h>

int main(void) {
    float a[]={ 1.0, 1.0, 1.0, 1.0, 1.0 };
    float b[]={ 2.0, 3.0, 4.0, 5.0, 6.0 };
    float c[5];

    for (int i = 0; i < 5; ++i) {
        c[i] = a[i] + b[i];
    }

    for (int i = 0; i < 5; ++i) {
        printf("c[%d] = %f\n", i, c[i]);
    }
    return 0;
}
