#include <stdio.h>


int power(int, int);
int isLeap(int);
int factorial(int);
void swap(int, int);
void findMinMax(int[], int, int*, int*);
float add(float, float);
float sub(float, float);
float mul(float, float);
float divi(float, float);

int main() {
    int choice;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Power (a^b)\n");
        printf("2. Check Leap Year\n");
        printf("3. Factorial (Recursive)\n");
        printf("4. Swap (Call by Value)\n");
        printf("5. Find Min & Max (Call by Reference)\n");
        printf("6. Calculator\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 0) break;

        switch (choice) {
            case 1: {
                int a, b;
                printf("Enter base and exponent: ");
                scanf("%d%d", &a, &b);
                printf("Result = %d\n", power(a, b));
                break;
            }
            case 2: {
                int year;
                printf("Enter year: ");
                scanf("%d", &year);
                if (isLeap(year))
                    printf("%d is a Leap Year\n", year);
                else
                    printf("%d is NOT a Leap Year\n", year);
                break;
            }
            case 3: {
                int n;
                printf("Enter number: ");
                scanf("%d", &n);
                printf("Factorial = %d\n", factorial(n));
                break;
            }
            case 4: {
                int a, b;
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                swap(a, b);
                break;
            }
            case 5: {
                int n, min, max;
                printf("Enter size of array: ");
                scanf("%d", &n);
                int arr[n];
                printf("Enter %d elements:\n", n);
                for (int i = 0; i < n; i++)
                    scanf("%d", &arr[i]);
                findMinMax(arr, n, &min, &max);
                printf("Min = %d, Max = %d\n", min, max);
                break;
            }
            case 6: {
                float a, b;
                int op;
                printf("Enter two numbers: ");
                scanf("%f%f", &a, &b);
                printf("1.Add 2.Sub 3.Mul 4.Div: ");
                scanf("%d", &op);
                switch (op) {
                    case 1: printf("Result=%.2f\n", add(a,b)); break;
                    case 2: printf("Result=%.2f\n", sub(a,b)); break;
                    case 3: printf("Result=%.2f\n", mul(a,b)); break;
                    case 4: printf("Result=%.2f\n", divi(a,b)); break;
                    default: printf("Invalid\n");
                }
                break;
            }
            default: printf("Invalid choice\n");
        }
    } while (choice != 0);
    return 0;
}


int power(int a, int b) { int p = 1; for (int i = 1; i <= b; i++) p *= a; return p; }
int isLeap(int y) { return ((y%400==0)||(y%4==0 && y%100!=0)); }
int factorial(int n){ return (n==0||n==1)?1:n*factorial(n-1); }
void swap(int x, int y){ int t=x; x=y; y=t; printf("After swap inside function: %d %d\n",x,y); }
void findMinMax(int a[], int n, int *min, int *max){ *min=*max=a[0]; for(int i=1;i<n;i++){ if(a[i]>*max)*max=a[i]; if(a[i]<*min)*min=a[i]; } }
float add(float a,float b){return a+b;}
float sub(float a,float b){return a-b;}
float mul(float a,float b){return a*b;}
float divi(float a,float b){return (b!=0)?a/b:0;}
