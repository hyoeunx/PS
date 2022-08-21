#include <stdio.h>
int main()
{
    int n, m, a[10000001], num;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &num);
        a[num] = 1;
    }
    scanf("%d", &m);
    for(int i=1; i<=m; i++){
        scanf("%d", &num);
        printf("%d ", a[num]);
    }
    return 0;
}
