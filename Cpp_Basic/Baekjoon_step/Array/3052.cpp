#include <stdio.h>

int main() {
    int a, i, count=0, ret[42]{0};
    for(i=0; i<10; i++) {
        scanf("%d", &a);
        ret[a%42]++;
    }
    for(i=0; i<42; i++) {
        if (ret[i] != 0)
            count++;
    }
    printf("%d", count);
    return 0;
}