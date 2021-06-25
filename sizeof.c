#include <stdio.h>
 
int main(void) {
    int arr1[5] = {0, 10, 20, 30, 40 };  
    double arr2[4] = {0.0, 1.0, 2.0, 3.0};
    float arr3[6] = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0};
 
    printf("배열 arr1의 크기 : %d\n", sizeof(arr1));
    printf("배열 arr2의 크기 : %d\n", sizeof(arr2));
    printf("배열 arr3의 크기 : %d\n", sizeof(arr3));
 
    int len1 = sizeof(arr1) / sizeof(int); // 배열 1의 길이
    int len2 = sizeof(arr2) / sizeof(double); // 배열 2의 길이
    int len3 = sizeof(arr3) / sizeof(float); // 배열 3의 길이
 
    printf("배열 arr1의 길이 : %d\n", len1);
    printf("배열 arr2의 길이 : %d\n", len2);
    printf("배열 arr3의 길이 : %d\n", len3);
 
    return 0;
}

