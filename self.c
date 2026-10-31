#include <stdio.h>

int min_max(const int a[], int n, int *lo, int *hi) {
    if (n <= 0) return 0;
    int i;
    *lo = a[0];
    *hi = a[0];
    for (i = 1; i <= n; i++) {
        if (a[i] <= *lo) {
            *lo = a[i];
        }
        if (a[i] >= *hi) {
            *hi = a[i];
        }
    }
    return 1;
}
int main(void) {
    int n = 3;
    int a[] = {4, -2, 7};
    int lo = 99;
    int hi = 99;
    if (min_max(a, n, &lo, &hi)) {
        printf("Успех: lo=%d hi=%d\n", lo, hi);
    } else {
        printf("Отказ: lo=%d hi=%d\n", lo, hi);
    }
    return 0;
}