#include <stdio.h>

long long sum(int *a, int n) {
    long long ret = 0;
    for(int i=0; i<n; i++) {
        ret += a[i];
    }
    return ret;
}

int main() {
    int a[5] = {1,2,3,4,5};
    printf("sum : %lld", sum(a, 5));
    return 0;
}