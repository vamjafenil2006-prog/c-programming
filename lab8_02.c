#include <stdio.h>
#include <string.h>

struct Customer {
    int accountNumber;
    char name[50];
    double balance;
};

void printLowBalanceCustomers(struct Customer c[], int count) {
    printf("--- Customers with Balance Below Rs. 100 ---\n");
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (c[i].balance < 100.0) {
            printf("Account: %d, Name: %s\n", c[i].accountNumber, c[i].name);
            found = 1;
        }
    }
    if (!found) {
        printf("No customers found with balance below Rs. 100.\n");
    }
}

void performTransaction(struct Customer c[], int count, int accNum, double amount, int code) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (c[i].accountNumber == accNum) {
            found = 1;
            if (code == 1) {
                c[i].balance += amount;
                printf("Deposit successful. New balance for A/C %d: Rs. %.2lf\n", accNum, c[i].balance);
            } else if (code == 0) {
                if (c[i].balance >= amount) {
                    c[i].balance -= amount;
                    printf("Withdrawal successful. New balance for A/C %d: Rs. %.2lf\n", accNum, c[i].balance);
                } else {
                    printf("The balance is insufficient for the specified withdrawal.\n");
                    printf("Current balance for A/C %d: Rs. %.2lf\n", accNum, c[i].balance);
                }
            } else {
                printf("Invalid transaction code.\n");
            }
            break;
        }
    }
    if (!found) {
        printf("Account number %d not found.\n", accNum);
    }
}

int main() {
    struct Customer customers[10] = {
        {9001, "Rajesh Kumar", 50.75},
        {9002, "Priya Sharma", 1500.00},
        {9003, "Amit Singh", 95.50},
        {9004, "Neha Verma", 25.00},
        {9005, "Sanjay Patel", 3000.50},
        {9006, "Kajal Gupta", 500.00},
        {9007, "Rohit Mehra", 80.20},
        {9008, "Deepa Das", 1200.00},
        {9009, "Vikas Yadav", 150.99},
        {9010, "Anjali Iyer", 60.10}
    };
    int totalCustomers = 10;

    printf("a) List of customers with low balance:\n");
    printLowBalanceCustomers(customers, totalCustomers);

    printf("\n---\n");
    printf("b) Handling transactions:\n");

    printf("\n--- Test 1: Successful Deposit ---\n");
    performTransaction(customers, totalCustomers, 9002, 500.00, 1);

    printf("\n--- Test 2: Insufficient Withdrawal (A/C 9001 has 50.75) ---\n");
    performTransaction(customers, totalCustomers, 9001, 100.00, 0);

    printf("\n--- Test 3: Successful Withdrawal (A/C 9003 has 95.50) ---\n");
    performTransaction(customers, totalCustomers, 9003, 50.00, 0);

    return 0;
}