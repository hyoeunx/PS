#include <stdio.h>
int main()
{
    char a[101];
    int b=0;
    
    gets(a);
    for(int i=0; a[i]!='\0'; i++){
        if(a[i]=='l'&&a[i+1]=='o'&&a[i+2]=='v'&&a[i+3]=='e'){
            b++;
        }
    }
    printf("%d", b);
    return 0;
}
