#include <stdio.h>

int main() {
    int evensum=0, oddsum=0, num;
    
    for(num = 0; num <= 100; num++) {
        if (num % 2 == 0) {
            evensum = evensum + num;
        }
        else oddsum = oddsum + num;
    }
    
    printf("1부터 100까지의 짝수합: %d\n", evensum);
    printf("1부터 100까지의 홀수합: %d\n", oddsum);
    
    return 0;
}
