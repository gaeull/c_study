#include <stdio.h>

int main() {
    int num1, num2, sum=0;
    
    printf("임의의 두 정수를 입력하시오: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 > num2) {
        while (num2 <= num1) {
            sum = sum + num2;
            num2++;
        }
        printf("두 정수 사이의 합: %d\n", sum);
    }
    
    else if (num1 < num2) {
        while (num1 <= num2) {
            sum = sum + num1;
            num1++;
        }
        printf("두 정수 사이의 합: %d\n", sum);
    }
    
    else printf("다시 입력하시오\n");
    
    return 0;
}
    
   
