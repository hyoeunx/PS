#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a<=b&&a<=c){
        printf("%d ", a);
        if(b<=c){
            printf("%d %d", b, c);
        }
        else if(c<=b){
            printf("%d %d", c, b);
        }
    }
    else if(b<=a&&b<=c){
        printf("%d ", b);
        if(c<=a){
            printf("%d %d", c, a);
        }
        else if(a<=c){
            printf("%d %d", a, c);
        }
    }
    else if(c<=a&&c<=b){
        printf("%d ", c);
        if(b<=a){
            printf("%d %d", b, a);
        }
        else if(a<=b){
            printf("%d %d", a, b);
        }
    }
    return 0;

}

