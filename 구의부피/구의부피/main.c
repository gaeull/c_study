#include <stdio.h>
#define pi 3.14

int main() {
    double radius, volume=0;
    
    printf("구의 반지름을 입력하시오: ");
    scanf("%lf", &radius);
    
    volume = (4.0 / 3.0) * pi * radius * radius * radius;
    
    printf("구의 부피: %lf\n", volume);
    
    return 0;
}
