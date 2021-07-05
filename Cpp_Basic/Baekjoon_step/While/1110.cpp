#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d", &x);
    int count = 0;
    y = x;

    while(1) {
        x = (x%10)*10 + (x%10 + x/10)%10;
        count++;
        if (x == y)
            break;
    }
    printf("%d", count);
    return 0;
}