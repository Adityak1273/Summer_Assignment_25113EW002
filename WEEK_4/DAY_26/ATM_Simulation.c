#include <stdio.h>
#include <string.h>
int main(){
    int menu=0,option=0,price=5000,with=0,deposit=0,count=0,check=0;
    printf("\n      ATM Simulation\n\n");
    loop:
    printf("To open MENU press : 1\n");
    printf("For Exit press : 2\n");
    scanf("%d",&menu);
    if(menu==1){
        loop1:
        printf("\n\nOptions -->\nCheck Balance [1]\nDeposit Money [2]\nWithdraw Money [3]\nMini Statement [4]\nTransaction Count [5]\nExit [6]\n\nEnter : ");
        scanf("%d",&option);
        if(option==1){
            printf("\nCurrent Balance: %d",price);
            count++;
            printf("\n\nContinue [1]\nExit [2]\nEnter : ");
            scanf("%d",&check);
            if(check==1){
                goto loop1;
            }
            else {
                goto exit;
            }
        }
        else if(option==2){
            printf("\nEnter Amount: ");
            scanf("%d",&deposit);
            price+=deposit;
            printf("Deposit Successful");
            count++;
            printf("\n\nContinue [1]\nExit [2]\nEnter : ");
            scanf("%d",&check);
            if(check==1){
                goto loop1;
            }
            else {
                goto exit;
            }
        }
        else if(option==3){
            printf("\nEnter Amount: ");
            scanf("%d",&with);
            if(price-with>=0){
                printf("Withdrawal Successful");
                price-=with;
                count++;
                printf("\n\nContinue [1]\nExit [2]\nEnter : ");
                scanf("%d",&check);
                if(check==1){
                    goto loop1;
                }
                else {
                    goto exit;
                }
            }
            else{
                printf("Withdrawal Failed!\nInsufficient Balance");
                with=0;
                printf("\n\nContinue [1]\nExit [2]\nEnter : ");
                scanf("%d",&check);
                if(check==1){
                    goto loop1;
                }
                else {
                    goto exit;
                }
            }
        }
        else if(option==4){
            printf("\nDeposited : %d",deposit);
            printf("\nWithdrawn : %d",with);
            printf("\nCurrent Balance : %d",price);
            printf("\n\nContinue [1]\nExit [2]\nEnter : ");
            scanf("%d",&check);
            if(check==1){
                goto loop1;
            }
            else {
                goto exit;
            }
        }
        else if(option==5){
            printf("\nTotal Transactions : %d",count);
            printf("\n\nContinue [1]\nExit [2]\nEnter : ");
            scanf("%d",&check);
            if(check==1){
                goto loop1;
            }
            else {
                goto exit;
            }
        }
        else{
            goto loop;
        }
    }
    else{
        exit:
        return 0;
    }
}