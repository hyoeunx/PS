#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a/10==1||a%10!=1&&a%10!=2&&a%10!=3){
        printf("%dth", a);
        return 0;
    }
    if(a%10==1){
        printf("%dst", a);
    }
    else if(a%10==2){
        printf("%dnd", a);
    }
    else if(a%10==3){
        printf("%drd", a);
    }
    return 0;
}

