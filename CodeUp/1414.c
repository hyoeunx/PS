#include <stdio.h>
int main()
{
    int b=0, c=0;
    char a[101];
    gets(a);
    for(int i=0; a[i]!='\0'; i++){
        if(a[i]=='c'||a[i]=='C'){
            b++;
            if(a[i+1]=='c'||a[i+1]=='C'){
                c++;
            }
        }
    }
    printf("%d\n%d", b, c);
    return 0;
}
