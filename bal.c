#include <stdio.h>

void updateBalance(float *balance, float amount) {
    *balance = *balance + amount;
}

int main() {
    float accountBalance = 500.50;
    float deposit = 150.25;

    updateBalance(&accountBalance, deposit);

    printf("Updated Balance: %.2f\n", accountBalance);

    return 0;
}