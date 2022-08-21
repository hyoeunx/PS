#include <stdio.h><stdlib.h><math.h>
int main()
{
    int a, b;
    float q;
    scanf("%d %d", &a, &b);
    q=a+b;
    if(abs(a-b)>q){q=abs(a-b);}

    if(a*b>q){q=a*b;}

    if(a/b>q){q=a/b;}
    if(b/a>q){q=b/a;}

    if(pow(a,b)>q){q=pow(a,b);}
    if(pow(b,a)>q){q=pow(b,a);}

    printf("%.06f", q);
    return 0;
}

