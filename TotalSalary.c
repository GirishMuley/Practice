//Find the total salary if the employee
#include <stdio.h>
#include <math.h>

int main() {
    int basic;
    scanf("%d", &basic);
    
    char t;
    scanf("%c", &t);
    char grade;
    scanf("%c", &grade);

    double hra = 0.2 * basic;
    double da = 0.5 * basic;

    int allowance;
    if(grade == 'A') {
        allowance = 1700;
    }
    else if(grade == 'B') {
        allowance = 1500;
    }
    else {
        allowance = 1300;
    }

    double pf = 0.11 * basic;

    double totalSalary = basic + hra + da + allowance - pf;
    int ans = round(totalSalary);
    printf("%d", ans);
}

