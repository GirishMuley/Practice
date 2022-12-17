//sum of even number till n
#include <stdio.h>

int main(){
    int n;
    scanf("%d",n);
    int i=0;
    int sum = 0;
    while(i<=n){
        sum += i;
        i += 2;
    }
    printf("%d",sum);
}
