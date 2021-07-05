#include <stdio.h>

int main() {
    int num;
    scanf("%d\n", &num);
    for (;num>0;num--) {
        int sum=0;
        int score = 0;
        while(1) {
            char val;
            scanf("%c",&val);
            if (val == 10)
                break;
            val==79?score++:score=0;
            sum += score;
        }
        printf("%d\n", sum);
    }
    return 0;
}