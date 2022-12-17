#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    while(i <= n){
        int spaces = 1;
        while(spaces <= n - i){
            printf(" ");
            spaces = spaces + 1;
        }

        int col = 1;
        int value = i;
        while(col <= i){
            printf("%d", value);
            value = value + 1;
            col = col + 1;
        }
        printf("\n");
        i = i + 1;
    }
}


