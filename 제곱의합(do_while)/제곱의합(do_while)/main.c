#include <stdio.h>

int main() {
    int even=2,sum=0;
    
    do {
        if (even % 2 == 0) {
            sum = sum + (even * even);
            even=even+2;
        }
    } while (sum <= 5000);
    
    printf("n의 값: %d\n",even-1);
    
    return 0;
}
