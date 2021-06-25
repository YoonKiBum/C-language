#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
void getMaxValue(int arr[], int len) {
    int max = 0;
    for(int i = 0; i < len; i++) {
        if(arr[i] > max) 
            max = arr[i];
    }
    printf("배열의 원소들 중 최대값은 %d 입니다.\n", max);
}
 
void getMinValue(int arr[], int len) {
    int min = 9999; // max 값 설정
    for(int i = 0; i < len; i++) {
        if(arr[i] < min) 
            min = arr[i];
    }
    printf("배열의 원소들 중 최대값은 %d 입니다.\n", min);
}
 
void getTotalSum(int arr[], int len) {
    int total = 0;
    for(int i = 0; i < len; i++) {
        total += arr[i];
    }
    printf("배열의 원소들 중 최대값은 %d 입니다.\n", total);
}
 
int main(void) {
    int arr[5];
 
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
 
    int len = sizeof(arr) / sizeof(int);
 
    getMaxValue(arr, len);
    getMinValue(arr, len);
    getTotalSum(arr, len);
 
    return 0;
}

