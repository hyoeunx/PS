#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d ", (2012-a+1)%100);
    if((2012-a+1)/100==19){
        printf("1");
    }
    else if((2012-a+1)/100==20){
        printf("3");
    }
    return 0;
}

