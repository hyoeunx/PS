#include <stdio.h>
int main()
{
    int a, c;
    char b;
    scanf("%d%c%d", &a, &b, &c);
    if(b=='+'){
        printf("%d", a+c);
    }
    else if(b=='-'){
        printf("%d", a-c);
    }
    else if(b=='*'){
        printf("%d", a*c);
    }
    else if(b=='/'){
        printf("%.02f", (float)a/(float)c);
    }
    return 0;
}

