#include <stdio.h>

typedef struct date {
    int year,month,day;
    int n_year, n_month, n_day, days;
} date;

int print_tommrow_date(date d);

int main() {
    struct date d;
    
    printf("날짜를 입력하시오: ");
    scanf("%d %d %d", &d.year, &d.month, &d.day);
    printf("오늘 날짜: %d년 %d월 %d일\n", d.year, d.month, d.day);
    
    print_tommrow_date(d);

    return 0;
}

int print_tommrow_date(date d) {
    switch (d.month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            d.days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            d.days = 30;
            break;
        case 2:
            if (d.year % 4 == 0) {    //case:윤년
                d.days = 29;
            }
            else d.days = 28;
            break;
    }
    d.n_day = d.day + 1;
    d.n_month = d.month;
    d.n_year = d.year;
    
    if (d.n_day > d.days) {
        d.n_day = 1;
        d.n_month++;
    }
    if (d.n_month > 12) {
        d.n_month = 1;
        d.n_year++;
    }
    
    printf("내일 날짜: %d년 %d월 %d일\n", d.n_year, d.n_month, d.n_day);
    
    return 0;
}
