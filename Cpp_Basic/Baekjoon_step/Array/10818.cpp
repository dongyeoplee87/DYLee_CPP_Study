#include <stdio.h>

int main() {
    int size, value, min=1000000, max=-1000000;
    scanf("%d", &size);
    for (int i=0; i<size; i++) {
        scanf("%d", &value);
        if (value < min)
            min = value;
        if (value > max)
            max = value;
    }
    printf("%d %d", min, max);
    return 0;
}