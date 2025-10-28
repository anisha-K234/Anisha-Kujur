//WAPC to do the following:
//Input: account balance, withdrawal amount.
//Follow the given rules:
//  a. Withdrawal amount must be a multiple of 100.
//  b. Withdrawal must not exceed balance.
//  c.Maintain a minimum balance of ₹500 after withdrawal.
//Output: Transaction success or failure with reason.
#include <stdio.h>

int main() {
    float balance, withdraw;

    printf("Enter account balance: ");
    scanf("%f", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%f", &withdraw);

    if ((int)withdraw % 100 != 0)
        printf("Failure: Withdrawal amount must be multiple of 100\n");
    else if (withdraw > balance)
        printf("Failure: Insufficient balance\n");
    else if (balance - withdraw < 500)
        printf("Failure: Minimum balance of 500 must be maintained\n");
    else
        printf("Transaction Successful! New balance = %.2f\n", balance - withdraw);

    return 0;
}
