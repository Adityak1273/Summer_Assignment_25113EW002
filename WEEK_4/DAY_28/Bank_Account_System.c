#include <stdio.h>
#include <string.h>
int main(){
    int menu=0,mid_choice1=0,mid_choice2=0,mid_choice3=0,n=0,account_no[500],search=0,updates=0,deletes=0;
    char holder_name[500][30],account_type[500][20],mobile[500][15];
    float balance[500];
    start:
    printf("\n\n=========================================\n         BANK ACCOUNT SYSTEM\n=========================================\n\n Create Account [1]\n View All Accounts [2]\n Search Account [3]\n Update Account [4]\n Deposit Money [5]\n Withdraw Money [6]\n Check Balance [7]\n Delete Account [8]\n Exit [9]\n\n Enter Choice : ");
    scanf("%d",&menu);
    getchar();

    if(menu==1){
        add_account:
        printf("\n\n----------- CREATE ACCOUNT -----------");
        printf("\n\nAccount Number : ");
        scanf("%d",&account_no[n]);
        getchar();
        printf("Account Holder : ");
        fgets(holder_name[n],sizeof(holder_name[n]),stdin);
        holder_name[n][strcspn(holder_name[n],"\n")]='\0';
        printf("Account Type   : ");
        fgets(account_type[n],sizeof(account_type[n]),stdin);
        account_type[n][strcspn(account_type[n],"\n")]='\0';
        printf("Mobile Number  : ");
        fgets(mobile[n],sizeof(mobile[n]),stdin);
        mobile[n][strcspn(mobile[n],"\n")]='\0';
        printf("Balance        : ");
        scanf("%f",&balance[n]);
        n++;
        printf("\n--------------------------------------");
        printf("\n Account Created Successfully!");
        printf("\n--------------------------------------");
        printf("\n\n Create Another Account [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice1);
        if(mid_choice1==1){
            goto add_account;
        }
        else if(mid_choice1==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==2){
        printf("\n\n=========================================\n          ACCOUNT DETAILS\n=========================================");
        for(int i=0;i<n;i++){
            printf("\n\nAccount Number : %d\nAccount Holder : %s\nAccount Type   : %s\nMobile Number  : %s\nBalance        : Rs.%.0f",account_no[i],holder_name[i],account_type[i],mobile[i],balance[i]);
            printf("\n\n-----------------------------------------");
        }
        printf("\n\n For Menu [1]\n For Exit [2]\n\n Enter Choice : ");
        scanf("%d",&mid_choice2);
        if(mid_choice2==1){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==3){
        search_again:
        printf("\n\n----------- SEARCH ACCOUNT -----------\n\nEnter Account Number : ");
        scanf("%d",&search);
        int count1=0;
        for(int i=0;i<n;i++){
            if(account_no[i]==search){
                printf("\n\n Account Found!\n\nAccount Number : %d\nAccount Holder : %s\nAccount Type   : %s\nMobile Number  : %s\nBalance        : Rs.%.0f",account_no[i],holder_name[i],account_type[i],mobile[i],balance[i]);
                printf("\n\n-----------------------------------------");
                count1++;
                break;
            }
        }
        if(count1==0){
            printf("\n\n Account Not Found!");
        }
        printf("\n\n Search Another Account [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice3);
        if(mid_choice3==1){
            goto search_again;
        }
        else if(mid_choice3==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==4){
        update_again:
        printf("\n\n----------- UPDATE ACCOUNT -----------\n\nEnter Account Number : ");
        scanf("%d",&updates);
        int update=0,count2=0;
        printf("\n\n Update Holder Name [1]\n Update Account Type [2]\n Update Mobile Number [3]\n\n Enter Choice : ");
        scanf("%d",&update);
        for(int i=0;i<n;i++){
            if(account_no[i]==updates){
                if(update==1){
                    getchar();
                    char new_holder[30];
                    printf("\n\n Enter New Holder Name : ");
                    fgets(new_holder,sizeof(new_holder),stdin);
                    new_holder[strcspn(new_holder,"\n")]='\0';
                    strcpy(holder_name[i],new_holder);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if(update==2){
                    getchar();
                    char new_type[20];
                    printf("\n\n Enter New Account Type : ");
                    fgets(new_type,sizeof(new_type),stdin);
                    new_type[strcspn(new_type,"\n")]='\0';
                    strcpy(account_type[i],new_type);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else{
                    getchar();
                    char new_mobile[15];
                    printf("\n\n Enter New Mobile Number : ");
                    fgets(new_mobile,sizeof(new_mobile),stdin);
                    new_mobile[strcspn(new_mobile,"\n")]='\0';
                    strcpy(mobile[i],new_mobile);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
            }
        }
        if(count2==0){
            printf("\n\nNo Record Found!");
        }
        printf("\n\n Update Another Account [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice3);
        if(mid_choice3==1){
            goto update_again;
        }
        else if(mid_choice3==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==5){
        deposit_again:
        int count_a=0;
        float deposit_amt=0;
        printf("\n\n----------- DEPOSIT MONEY -----------\n\nEnter Account Number : ");
        scanf("%d",&search);
        printf("Enter Deposit Amount : ");
        scanf("%f",&deposit_amt);
        for(int i=0;i<n;i++){
            if(account_no[i]==search){
                balance[i]=balance[i]+deposit_amt;
                printf("\n Deposit Successful!\n Current Balance : Rs.%.0f",balance[i]);
                count_a++;
                break;
            }
        }
        if(count_a==0){
            printf("\n Account Not Found!");
        }
        printf("\n\n Deposit Another Amount [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice3);
        if(mid_choice3==1){
            goto deposit_again;
        }
        else if(mid_choice3==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==6){
        withdraw_again:
        int count_b=0;
        float withdraw_amt=0;
        printf("\n\n----------- WITHDRAW MONEY -----------\n\nEnter Account Number : ");
        scanf("%d",&search);
        printf("Enter Withdraw Amount : ");
        scanf("%f",&withdraw_amt);
        for(int i=0;i<n;i++){
            if(account_no[i]==search){
                if(withdraw_amt>balance[i]){
                    printf("\n Insufficient Balance!");
                }
                else{
                    balance[i]=balance[i]-withdraw_amt;
                    printf("\n Withdrawal Successful!\n Remaining Balance : Rs.%.0f",balance[i]);
                }
                count_b++;
                break;
            }
        }
        if(count_b==0){
            printf("\n Account Not Found!");
        }
        printf("\n\n Withdraw Another Amount [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice3);
        if(mid_choice3==1){
            goto withdraw_again;
        }
        else if(mid_choice3==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==7){
        balance_again:
        int count_c=0;
        printf("\n\n----------- CHECK BALANCE -----------\n\nEnter Account Number : ");
        scanf("%d",&search);
        for(int i=0;i<n;i++){
            if(account_no[i]==search){
                printf("\n Current Balance : Rs.%.0f",balance[i]);
                count_c++;
                break;
            }
        }
        if(count_c==0){
            printf("\n Account Not Found!");
        }
        printf("\n\n Check Another Balance [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice3);
        if(mid_choice3==1){
            goto balance_again;
        }
        else if(mid_choice3==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==8){
        delete_again:
        printf("\n\n----------- DELETE ACCOUNT -----------");
        printf("\n\nEnter Account Number : ");
        scanf("%d",&deletes);
        int count3=0;
        for(int i=0;i<n;i++){
            if(account_no[i]==deletes){
                for(int j=i;j<n-1;j++){
                    account_no[j]=account_no[j+1];
                    strcpy(holder_name[j],holder_name[j+1]);
                    strcpy(account_type[j],account_type[j+1]);
                    strcpy(mobile[j],mobile[j+1]);
                    balance[j]=balance[j+1];
                }
                n--;
                count3++;
                printf("\n Account Deleted Successfully!");
                printf("\n------------------------------");
                break;
            }
        }
        if(count3==0){
            printf("\n\nNo Record Found!");
        }
        printf("\n\n Delete Another Account [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice3);
        if(mid_choice3==1){
            goto delete_again;
        }
        else if(mid_choice3==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else{
        exit:
        return 0;
    }
}