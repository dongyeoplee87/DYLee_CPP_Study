#include <stdio.h>

#define ARRAY_SIZE 10001

void fill_number(int num, int *array) {
    int left_value = num;
    int backup_value = num;

    while(left_value) {
        num += (left_value%10);
        left_value /= 10;
    }

    if (num >= ARRAY_SIZE)
        return;
    if (num != backup_value) {
        array[num] = 1;
    }
    fill_number(num, array);
}


int main() {
    int number[ARRAY_SIZE] = {0};
    for(int i=1; i<ARRAY_SIZE; i++)
        fill_number(i,number);
    for(int i=1; i<ARRAY_SIZE; i++) {
        if (number[i]==0)
            printf("%d\n",i);
    }
    return 0;
}