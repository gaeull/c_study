#include <stdio.h>

int main() {
    int hour, minute, second, r_second, i;     //r_second=remain of second

    printf("계산할 초를 입력하시오: ");
    scanf("%d", &second);
    
    for (i=0; i<10; i++) {
        minute = second / 60;
        hour = minute / 60;
        minute = minute % 60;
        r_second = second % 60;
    }

    printf("%d초 = %d시 : %d분 : %d초 \n", second, hour, minute, r_second);
    
    return 0;
}
