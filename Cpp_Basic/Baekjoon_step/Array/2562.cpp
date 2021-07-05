#include <stdio.h>

int main() {
    int value, max=0, count=1, maxcount=0;
    for (int i=0; i<9; i++) {
        scanf("%d", &value);
        if (max < value) {
            max = value;
            maxcount = count;
        }
        count++;
    }
    printf("%d\n%d", max, maxcount);
    return 0;
}