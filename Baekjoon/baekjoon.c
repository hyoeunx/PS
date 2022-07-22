#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(b<=44){
        if(a>=1){
            printf("%d %d", a-1, b+15);
        }
        else {
            printf("%d %d", 23, b+15);
        }
    }
    else {
        if(a>=1){
            printf("%d %d", a-1, b-45);
        }
        else {
            printf("%d %d", 23, b-45);
        }
    }
    return 0;
}
