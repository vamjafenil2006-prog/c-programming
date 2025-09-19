#include <stdio.h>
int main()
{
 int gsal,nsal,dis;
 printf("Enter your gross sales-");
 scanf("%d",&gsal);
 if(gsal>20000)
 {
   dis=(15*gsal)/100;
 }
 else
 {
     if(gsal>10000&&gsal<20000)
     {
         dis=(10*gsal)/100;
     }

 else{
    dis=(5*gsal)/100;
 }
 }
 nsal=gsal-dis;
 printf("The net sales is:-%d",nsal);
 return 0;
}
