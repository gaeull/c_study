#include <stdio.h>

int main() {
    int c;
    int t;
    
    while  ((c = getchar()) != EOF) {
        if ((c >= 'A' && c <= 'Z')) {
            if ((t = c + 13) <= 'Z') putchar(t);
            else {
                t = c - 13;
                putchar(t);
            }
        }
        
        else if ((c >= 'a') && c <= 'z') {
            if ((t = c + 13) <= 'Z') putchar(t);
            else {
                t = c - 13;
                putchar(t);
            }
        }
        
        else putchar(c);
    }
    
    printf("프로그램 종료");
    return 0;
}
