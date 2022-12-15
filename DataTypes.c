//print value of different data types
#include <stdio.h>

int main()
{
	char val1 = 'a';
    int val2 = 2;
    float val3 = 2.001;
    char val4[] = "codingninja"; 
    
   printf("%c\n", val1);
    printf("%d\n", val2); 
    printf("%5.3f\n", val3);
    printf("%s\n", val4);
    return 0;
}