#include <stdio.h>

int main() {
    double t1, t2, t3;
    
    printf("Введіть три значення (t1 t2 t3): ");
    scanf("%lf %lf %lf", &t1, &t2, &t3);
    
    double total_rate = (1 / t1) + (1 / t2) + (1 / t3);
    
    double total_time = 1 / total_rate;
    
    printf("Час необхідний для з'їдання пирога: %.2f годин\n", total_time);
    
    return 0;
}
