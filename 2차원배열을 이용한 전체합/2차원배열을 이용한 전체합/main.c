#include <stdio.h>

int main() {
    int arr[3][5] = {
        {2,5,1,2},
        {2,6,3,5},
    };
    int i, j, sum=0;
    
    for(i=0; i<2; i++) {
        for(j=0; j<4; j++) {
            arr[2][j] += arr[i][j];
            arr[i][4] += arr[i][j];
            arr[2][4] += arr[i][j];
        }
    }
    
    sum = arr[2][4];
    printf("배열의 총합: %d\n", sum);
    
    return 0;
}
