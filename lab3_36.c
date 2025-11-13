#include<stdio.h>
int main()
{
    int i,j;
    printf("(A)\n");
    for(i=1;i<=5;i++)
    {
        printf("%d %d\n",i,6-i);
    }

    printf("(B)\n");
    for(i=1;i<=3;i++)
    {
        printf("%d %d\n",i,6-i);
        printf("%d %d\n",i,6-i);
    }
    return 0;
}