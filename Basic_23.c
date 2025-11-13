
#include<stdio.h>
int main()
{
    int s1,s2,s3,total,avg;
    printf("Enter the obtained marks in s1,s2,s3: ");
    scanf("%d %d %d",&s1,&s2,&s3);

    total=s1+s2+s3;
    avg=(total)/3;

    printf("\nTotal=%d",total);
    printf("\nAverage=%d",avg);

    return 0;



}
