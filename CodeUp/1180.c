#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(((((a%10)*10)+a/10)*2)/100>=0){
        printf("%d\n", ((((a%10)*10)+a/10)*2)%100);
        printf((((((a%10)*10)+a/10)*2)%100)<=50?"GOOD":"OH MY GOD");
    }
    else{
        printf("%d\n", (((a%10)*10)+a/10)*2);
        printf((((a%10)*10)+a/10)*2<=50?"GOOD":"OH MY GOD");
    }
    return 0;
}

