
#include <stdio.h>
int main()
 {
    int gross_salary;
    printf("enter gross salary: ");
    scanf("%d",&gross_salary);
    printf("Net Salary is %d",gross_salary+10*gross_salary/100-3*gross_salary/100);
    return 0;
}
