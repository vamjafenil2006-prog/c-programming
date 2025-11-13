#include <stdio.h>
int main() {
    int a[10], n, val, i, j, found=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter value to delete: ");
    scanf("%d",&val);

    for(i=0;i<n;i++){
        if(a[i]==val){
            for(j=i;j<n-1;j++)
                a[j]=a[j+1];
            n--;
            found=1;
            break;
        }
    }

    if(found){
        printf("Array after deletion:\n");
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
    } else {
        printf("Value not found.");
    }
    return 0;
}
