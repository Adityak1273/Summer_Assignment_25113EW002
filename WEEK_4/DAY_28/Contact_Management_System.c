#include <stdio.h>
#include <string.h>
int main(){

    int menu=0,mid_choice1=0,mid_choice2=0,mid_choice3=0,n=0,search=0,updates=0,deletes=0,contact_id[500];
    char name[500][30],phone[500][15],email[500][50],address[500][50];
    start:
    printf("\n\n=========================================\n       CONTACT MANAGEMENT SYSTEM\n=========================================\n\n Add Contact [1]\n View All Contacts [2]\n Search Contact [3]\n Update Contact [4]\n Delete Contact [5]\n Exit [6]\n\n Enter Choice : ");
    scanf("%d",&menu);
    getchar();

    if(menu==1){
        add_contact:
        printf("\n\n----------- ADD CONTACT -----------");
        printf("\n\nContact ID   : ");
        scanf("%d",&contact_id[n]);
        getchar();
        printf("Name         : ");
        fgets(name[n],sizeof(name[n]),stdin);
        name[n][strcspn(name[n],"\n")]='\0';
        printf("Phone Number : ");
        fgets(phone[n],sizeof(phone[n]),stdin);
        phone[n][strcspn(phone[n],"\n")]='\0';
        printf("Email ID     : ");
        fgets(email[n],sizeof(email[n]),stdin);
        email[n][strcspn(email[n],"\n")]='\0';
        printf("Address      : ");
        fgets(address[n],sizeof(address[n]),stdin);
        address[n][strcspn(address[n],"\n")]='\0';
        n++;
        printf("\n-----------------------------------");
        printf("\n Contact Added Successfully!");
        printf("\n-----------------------------------");
        printf("\n\n Add Another Contact [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice1);
        if(mid_choice1==1){
            goto add_contact;
        }
        else if(mid_choice1==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==2){
        printf("\n\n=========================================\n          CONTACT DETAILS\n=========================================");
        for(int i=0;i<n;i++){
            printf("\n\nContact ID   : %d\nName         : %s\nPhone Number : %s\nEmail ID     : %s\nAddress      : %s",contact_id[i],name[i],phone[i],email[i],address[i]);
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
        printf("\n\n----------- SEARCH CONTACT -----------\n\nEnter Contact ID : ");
        scanf("%d",&search);
        int count1=0;
        for(int i=0;i<n;i++){
            if(contact_id[i]==search){
                printf("\n\n Contact Found!\n\nContact ID   : %d\nName         : %s\nPhone Number : %s\nEmail ID     : %s\nAddress      : %s",contact_id[i],name[i],phone[i],email[i],address[i]);
                printf("\n\n-----------------------------------------");
                count1++;
                break;
            }
        }
        if(count1==0){
            printf("\n\n Contact Not Found!");
        }
        printf("\n\n Search Another Contact [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
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
        printf("\n\n----------- UPDATE CONTACT -----------\n\nEnter Contact ID : ");
        scanf("%d",&updates);
        int update=0,count2=0;
        printf("\n\n Update Name [1]\n Update Phone Number [2]\n Update Email ID [3]\n Update Address [4]\n\n Enter Choice : ");
        scanf("%d",&update);
        for(int i=0;i<n;i++){
            if(contact_id[i]==updates){
                if(update==1){
                    getchar();
                    char new_name[30];
                    printf("\n\n Enter New Name : ");
                    fgets(new_name,sizeof(new_name),stdin);
                    new_name[strcspn(new_name,"\n")]='\0';
                    strcpy(name[i],new_name);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if(update==2){
                    getchar();
                    char new_phone[15];
                    printf("\n\n Enter New Phone Number : ");
                    fgets(new_phone,sizeof(new_phone),stdin);
                    new_phone[strcspn(new_phone,"\n")]='\0';
                    strcpy(phone[i],new_phone);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if(update==3){
                    getchar();
                    char new_email[50];
                    printf("\n\n Enter New Email ID : ");
                    fgets(new_email,sizeof(new_email),stdin);
                    new_email[strcspn(new_email,"\n")]='\0';
                    strcpy(email[i],new_email);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else{
                    getchar();
                    char new_address[50];
                    printf("\n\n Enter New Address : ");
                    fgets(new_address,sizeof(new_address),stdin);
                    new_address[strcspn(new_address,"\n")]='\0';
                    strcpy(address[i],new_address);
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
        printf("\n\n Update Another Contact [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
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
        delete_again:
        printf("\n\n----------- DELETE CONTACT -----------");
        printf("\n\nEnter Contact ID : ");
        scanf("%d",&deletes);
        int count3=0;
        for(int i=0;i<n;i++){
            if(contact_id[i]==deletes){
                for(int j=i;j<n-1;j++){
                    contact_id[j]=contact_id[j+1];
                    strcpy(name[j],name[j+1]);
                    strcpy(phone[j],phone[j+1]);
                    strcpy(email[j],email[j+1]);
                    strcpy(address[j],address[j+1]);
                }
                n--;
                count3++;
                printf("\n Contact Deleted Successfully!");
                printf("\n------------------------------");
                break;
            }
        }
        if(count3==0){
            printf("\n\n Contact Not Found!");
        }
        printf("\n\n Delete Another Contact [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
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