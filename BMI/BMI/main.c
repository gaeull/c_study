#include <stdio.h>

double calculate_BMI(double height, double weight);

int main() {
    double height, weight;
    
    printf("키와 몸무게를 입력하시오: ");
    scanf("%lf %lf", &height, &weight);
    
    calculate_BMI(height, weight);
    
    return 0;
}

double calculate_BMI(double height, double weight) {
    double BMI;
    
    height = height / 100;
    BMI = weight / (height * height);
    
    printf("BMI = %.2lf\n", BMI);
    
    if (BMI >= 30) printf("비만\n");
    else if (BMI > 24) printf("과체중\n");
    else if (BMI > 19) printf("정상\n");
    else printf("저체중\n");
    
    return BMI;
}
