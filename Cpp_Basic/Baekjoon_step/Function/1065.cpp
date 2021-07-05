#include <stdio.h>

int is_hansu(int value, int diff) {
    if (value < 10) {
        return 1;
    }
    if ((value/10%10 - value%10) != diff) {
        return 0;
    } else {
        return is_hansu(value/10, diff);
    }
}

int main() {
    int num, count = 0;
    scanf("%d", &num);
    for(int i=1;i<num+1;i++) {
        if (is_hansu(i, i/10%10 - i%10))
            count++;
    }
    printf("%d", count);
}