#include <stdio.h>
void main() {
    int pin=1234,epin;
    int choice;
    float bal=10000.0,amo;
    printf("Enter PIN: ");
    scanf("%d",&epin);
    if(epin!=pin){
        printf("Incorrect PIN! Access Denied.\n");
    }
        printf("\n ATM MENU \n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Current Balance: ₹%.2f\n",bal);
                break;
            case 2:
                printf("Enter amount to deposit: ₹");
                scanf("%f",&amo);
                if(amo>0){
                    bal+=amo;
                    printf("₹%.2f deposited successfully.\n",amo);
                    printf("The current balance is %.2f",bal);
                }
                else{
                    printf("Invalid amount.\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ₹");
                scanf("%f",&amo);
                if (amo<=bal&&amo>0){
                    bal-=amo;
                    printf("₹%.2f withdrawn successfully.\n",amo);
                    printf("The current balance is %.2f",bal);
                }
                else{
                    printf("Insufficient balance or invalid amount.\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
}