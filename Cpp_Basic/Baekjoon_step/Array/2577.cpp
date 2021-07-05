#include <stdio.h>

int main() {
    int a,b,c,val;
    int ret[10] = {0};
    scanf("%d%d%d", &a,&b,&c);
    val = a*b*c;

    while(val != 0) {
        ret[val%10]++;
        val = val/10;
    }

    for (int i=0; i<10; i++) {
        printf("%d\n", ret[i]);
    }
    return 0;
}