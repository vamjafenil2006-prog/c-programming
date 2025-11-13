#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    printf("Enter the string: ");
    gets(str1);

      printf("The characters of strings vertically:\n");
      for(int i=0;i<strlen(str1);i++)
      printf("%c\n",str1[i]);


    return 0;
}