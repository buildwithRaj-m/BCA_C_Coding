#include<stdio.h>
#include<string.h>

typedef struct BankAccount {
    char accountHolder[100];
    int accountnumber;
    float balance;

} acc;

int main() {
    acc account1 = {"john wick", 1258248 , 10000.67};
    acc account2 = {"Jaon Bourne", 1254567, 99978.78};
    acc account3 = {"Ethan Hunt", 81643802, 56799.85};

    printf("Acc number : %d\n ", account1.accountnumber);
    printf("Balance : %.2f\n", account1.balance);
    printf("Account Holder : %s\n", account1.accountHolder);
    printf("\n");
    printf("Acc number : %d\n ", account2.accountnumber);
    printf("Balance : %.2f\n", account2.balance);
    printf("Account Holder : %s\n", account2.accountHolder);
    printf("\n");
    printf("Acc number : %d\n ", account3.accountnumber);
    printf("Balance : %.2f\n", account3.balance);
    printf("Account Holder : %s\n", account3.accountHolder);
     
    return 0;
}