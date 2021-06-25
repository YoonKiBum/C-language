#include <stdio.h>
 
int main(void) {
    char str[] = "Hello world!"; // 글자는 공백을 포함하여 12개 이다. 
 
    int len = sizeof(str) / sizeof(char);
    printf("배열의 길이 : %d\n", len);
    
    return 0;
}

