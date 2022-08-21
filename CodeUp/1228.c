#include <stdio.h>
int main()
{
    double a, b, n, m;
    scanf("%lf %lf", &a, &b);
    n = (a-100)*0.9;
    m = (b-n)*100/n;

    printf(m<=10?"정상":(m>10)&&(m<=20)?"과체중":"비만");
    return 0;
}

