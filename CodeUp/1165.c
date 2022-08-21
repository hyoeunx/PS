#include <stdio.h>
int main()
{
    int time, score;
    scanf("%d %d", &time, &score);
    printf("%d", ((89-time)/5)+score+1);
    return 0;
}

