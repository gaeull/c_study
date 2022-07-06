#include <stdio.h>

int main() {
    char menu;
    
    printf("What do you want?\n");
    scanf("%c",&menu);
    
    switch(menu) {
        case 'C' :
        case 'c':
            printf("coffee : $4\n");
            break;
        case 'D':
        case 'd':
            printf("doughnut : $3\n");
            break;
        case 'H':
        case 'h':
            printf("hamburger : $7\n");
            break;
        case 'P':
        case 'p':
            printf("pizza : $5\n");
            break;
        case 'S':
        case 's':
            printf("spaghetti : $6\n");
            break;
        case 'T':
        case 't':
            printf("tea : $3\n");
            break;
        case 'Q':
        case 'q':
            printf("quit\n");
            break;
        default:
            break;
    }
    
    return 0;
}
