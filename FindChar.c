//Find character case
#include<stdio.h>

int main(){

    char ch;
    int give;
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z')
        give = 1;
    else if(ch >= 'a' && ch <= 'z')
        give = 0;
    else
        give = -1;
    printf("%d",give);
    return 0;
}
