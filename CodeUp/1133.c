#include <stdio.h>
int main()
{
    char a[31];
    fgets(a, 31, stdin);
    printf("%s", a);
    return 0;
}

#include <stdio.h>
int main(){
    char a[31];
    gets(a);
    printf("%s", a);
    return 0;
}

