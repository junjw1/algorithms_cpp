#include <stdio.h>

int main(){

    float f = 0.12345678901234567890f;
    double ff = 0.12345678901234567890L;
    double fff;

    // scanf("%f",&fff); //fff에 입력 안됨    
    // scanf("%lf",&fff);
    

    printf("%f\n", f); //소수 7번째 자리에서 반올림
    printf("%f\n", ff); //소수 7번째 자리에서 반올림
    printf("%lf\n", ff); //소수 7번째 자리에서 반올림

    printf("%.30f\n", f); //소수 9번째 자리에서 반올림
    printf("%.30f\n", ff); //소수 18번째 자리에서 반올림
    printf("%.30lf\n", ff); //소수 18번째 자리에서 반올림


    // printf("%f\n", fff);

    return 0;
}

