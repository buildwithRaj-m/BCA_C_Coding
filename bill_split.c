#include<stdio.h>
int main() {
    int amount,counting,discount,t_amount;
    float per_friend;
    printf("Enter bill amount:\n");
    scanf("%d", &amount);
    printf("Enter total friends counting:\n");
    scanf("%d",&counting);

    if(amount>=5000){
        discount=amount*0.10;
        printf("You recieved 10%% discount :%d\n",discount);
        t_amount=amount-discount;
        printf("Final Amount :%d\n",t_amount);
    }
    else {
        t_amount=amount;
        printf("No discount applied.\nAmount payable :%d\n",t_amount);
    }//typecasting logic used
    per_friend=(float)t_amount/counting;
    printf("Amount per friend:%.2f\n",per_friend);
printf("Kindly pay the bill");
    return 0;
}