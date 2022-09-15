#include <stdio.h>
int main(){
    int n, num=0;
    scanf("%d", &n);
    for(int i=1; ; i++){
        num += i;
        if(num >= n) break;
    }
    printf("%d", num);
}
