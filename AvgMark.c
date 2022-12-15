//find average marks
#include<stdio.h>

int main(){

    char name;
    scanf("%c",&name);

    int m1,m2,m3;
    scanf("%d%d%d",&m1,&m2,&m3);

    int avg = (m1+m2+m3)/3;

    printf("%c",name);
    printf("\n");
    printf("%d",avg);

}
