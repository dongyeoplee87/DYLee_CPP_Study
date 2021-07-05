#include <stdio.h>

int main() {
    int num, max=0, val[1000]={0};
    float sum=0;
    scanf("%d", &num);
    for(int i=0;i<num;i++) {
        scanf("%d", &val[i]);
        if (val[i]>max)
            max = val[i];
    }
    for(int i=0;i<num;i++)
        sum = sum + (float)val[i]/max*100;
    printf("%f",sum/num);
    return 0;
}