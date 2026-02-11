#include<stdio.h>
int main() {
    int option,amount;
    int balance=10000;
    printf("WELCOME TO SUNSHINE ATM\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw cash\n");
    printf("3.Deposit cash\n");
    printf("Enter your choice\n");
    scanf("%d",&option);
    switch(option) {
        case 1:printf("Your current balance :%d\n",balance);
        break;
        case 2:printf("Enter amount to withdraw:");
        scanf("%d",&amount);
        if(amount>=balance){
            printf("Insufficient Balance!\nAapke account mein itne paise nhi hai\n");
        }
        else if(amount<=0){
            printf("Invalid Amount!\nKripya sahi amoount daalein\n");
        }else {
            balance-=amount;
            printf("Withdrawal Successful!\n");
            printf("Remaining Amount:Rs.%d\n",balance);
        }
        break;
        case 3:printf("Enter amount to deposit:\n");
        scanf("%d",&amount);
        if(amount>0){
            balance+=amount;
            printf("Deposit Successful!\nNew Balance:%d",balance);
        }else{
            printf("Invalid Deposit Amount!\n");
        }
        break;
        default: printf("Invalid Choice!\nPlease choose between 1 - 3\n");
    }
    printf("\nThank You for using SUNSHINE ATM");
    return 0;
}