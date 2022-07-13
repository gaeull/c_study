#include <stdio.h>

int gcd(int num1, int num2);
int lcm(int num1, int num2);

int main() {
    int num1,num2;
    
    printf("두 정수를 입력하시오: ");
    scanf("%d %d", &num1, &num2);
    
    gcd(num1,num2);
    lcm(num1,num2);
    
    printf("최대공약수: %d\n", gcd(num1,num2));
    printf("최소공약수: %d\n", lcm(num1,num2));
    
    return 0;
}

int gcd(int num1, int num2) {
    int nmg;
    
    nmg = num1 % num2;
    
    while (nmg != 0) {
        num1 = num2;
        num2 = nmg;
        nmg = num1 % num2;
    }
    
    return num2;
}

int lcm(int num1, int num2) {
    int lcm;
    gcd(num1,num2);
    
    lcm = (num1 * num2) / gcd(num1,num2);
    
    return lcm;
}

//최대공약수 알고리즒
/* 15 % 12 = 3

big(15) = small(12)
small(12) = 3(나머지)
12 % 3 = 0 (나머지가 0일때 small변수) */
