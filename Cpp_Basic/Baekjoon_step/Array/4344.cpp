#include <stdio.h>

int main() {
    int cases;
    scanf("%d", &cases);
    for (;cases>0;cases--) {
        int num, sum=0, count=0, score[1000];
        scanf("%d", &num);
        for(int i=0;i<num;i++) {
            scanf("%d", &score[i]);
            sum += score[i];
        }
        for(int i=0;i<num;i++) {
            if (score[i] > sum/num)
                count++;
        }
        printf("%.03f%%\n", (float)count/num*100);
    }
}