#include<stdio.h>
int main()
{
    int bytes,kb,mb,gb;
    printf("Enter the bytes: ");
    scanf("%d",&bytes);

    kb=bytes/1024;
    mb=kb/1024;
    gb=mb/1024;

    printf("\n%dbytes = %dkb",bytes,kb);
    printf("\n%dbytes = %dmb",bytes,mb);
    printf("\n%dbytes = %dgb",bytes,gb);
    return 0;
}