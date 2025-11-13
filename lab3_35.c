#include<stdio.h>
int main()
{
    int i,j,k;

    printf("(A)\n");
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d %d\n",i,j);
        }
    }

    printf("(B)\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(j<=i)
            printf("%d %d\n",i,j);

        }
    }

    printf("(C)\n");
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++)
        {
            for(k=1;k<=2;k++)
            {
                printf("%d %d %d\n",i,j,k);
            }
        }
    }

    printf("(D)\n");
    for(i=5;i>=3;i--)
    {
        for(j=1;j<=2;j++)
        {
            printf("%d %d\n",i,j);
        }
    }


    return 0;
}