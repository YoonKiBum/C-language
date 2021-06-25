#include <stdio.h>
 
int main(void) {
    int arr[5] = {0, 10, 20, 30, 40 }; // 전부 더하면 100 이다. 
    int sum = 0;
 
    for(int i = 0; i < 5; i++) { // 반복문을 통해 모든 원소들을 더함
        sum += arr[i];
    }
    printf("배열의 모든 원소의 합 : %d", sum);
    return 0;
}

