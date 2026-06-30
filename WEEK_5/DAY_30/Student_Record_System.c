#include <stdio.h>
#include <string.h>
int main(){

    int menu=0,mid_choice1=0,mid_choice2=0,mid_choice3=0,mid_choice4=0,n=0;
    char name[n][30];int roll[500],age[500],year[500],gpa[500],search=0,updates=0,deletes=0;
    start:
    printf("\n            STUDENT RECORD MANAGEMENT SYSTEM\n\nAdd Student [1]\nView All Students [2]\nSearch Student [3]\nUpdate Student [4]\nDelete Student [5]\nExit [6]\n\nEnter Choice : ");
    scanf("%d",&menu);
    getchar();

    if(menu==1){
        add_student:
        printf("\n\n----------- ADD STUDENT -----------");
        printf("\n\nEnter  Roll No : ");
        scanf("%d",&roll[n]);
        getchar();
        printf("Enter Name : ");
        fgets(name[n],sizeof(name[n]),stdin);
        name[n][strcspn(name[n],"\n")]='\0';
        printf("Enter Age : ");
        scanf("%d",&age[n]);
        printf("Enter  college Year : ");
        scanf("%d",&year[n]);
        printf("Enter GPA : ");
        scanf("%d",&gpa[n]);
        n++;
        printf("\n---------------------------------");
        printf("\n\nFor Insert New Student Data [1]\nFor Menu [2]\nFor Exit [3]\n\nEnter Choice : ");
        scanf("%d",&mid_choice1);
        if(mid_choice1==1){
            goto add_student;
        }
        else if(mid_choice1==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==2){
        printf("\n\n-------- ALL STUDENTS --------");
        for(int i=0;i<n;i++){
            printf("\n\n Roll No : %d",roll[i]);
            printf("\n Name : %s",name[i]);
            printf("\n Age : %d",age[i]);
            printf("\n college Year : %d",year[i]);
            printf("\n GPA : %d",gpa[i]);
            printf("\n------------------------------");
        }
        printf("\n\nFor Menu [1]\nFor Exit [2]\n\nEnter Choice : ");
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
        printf("\n\n-------- SEARCH STUDENT --------");
        printf("\n\nEnter Roll No : ");
        scanf("%d",&search);
        int count1=0;
        for(int i=0;i<n;i++){
            if(roll[i]==search){
                printf("\n\n             Record Found!");
                printf("\n\n Roll No : %d",roll[i]);
                printf("\n Name : %s",name[i]);
                printf("\n Age : %d",age[i]);
                printf("\n college Year : %d",year[i]);
                printf("\n GPA : %d",gpa[i]);
                printf("\n------------------------------");
                count1++;
                break;
            }
        }
        if(count1==0){
            printf("\n\nRecord Not Found!");
        }
        printf("\n\nFor Search Another Student [1]\nFor Menu [2]\nFor Exit [3]\n\nEnter Choice : ");
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
        printf("\n\n-------- UPDATE STUDENT --------");
        printf("\n\nEnter Roll No : ");
        scanf("%d",&updates);
        int update=0,count2=0;
        printf("\n\nWant to update Roll No [1]\nWant to update Name [2]\nWant to update Age [3]\nWant to update Year [4]\nWant to update GPA [5]\n\nEnter Choice : ");
        scanf("%d",&update);
        for(int i=0;i<n;i++){
            if(roll[i]==updates){
                if(update==1){
                    int new_roll;
                    printf("\n\n Enter New Roll No : ");
                    scanf("%d",&new_roll);
                    roll[i]=new_roll;
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if(update==2){
                    char new_name[30];
                    printf("\n\n Enter New name : ");
                    fgets(new_name,sizeof(new_name),stdin);
                    getchar();
                    new_name[strcspn(new_name,"\n")]='\0';
                    strcpy(name[i],new_name);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if(update==3){
                    int new_age;
                    printf("\n\n Enter New Age : ");
                    scanf("%d",&new_age);
                    age[i]=new_age;
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if (update==4){
                    int new_year;
                    printf("\n\n Enter New College Year : ");
                    scanf("%d",&new_year);
                    year[i]=new_year;
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else{
                    int new_gpa;
                    printf("\n\n Enter New GPA : ");
                    scanf("%d",&new_gpa);
                    gpa[i]=new_gpa;
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
        printf("\n\nFor Update Another Record [1]\nFor Menu [2]\nFor Exit [3]\n\nEnter Choice : ");
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
        printf("\n\n-------- DELETE STUDENT --------");
        printf("\n\nEnter Roll No : ");
        scanf("%d",&deletes);
        int delete=0,count3=0;
        for(int i=0;i<n;i++){
            if(roll[i]==deletes){
                for(int j=i; j<n-1; j++){
                    roll[j]=roll[j+1];
                    strcpy(name[j],name[j+1]);
                    age[j]=age[j+1];
                    year[j]=year[j+1];
                    gpa[j]=gpa[j+1];
                }
                n--;
                count3++;
                printf("Record Deleted Successfully!");
                printf("\n------------------------------");
                break;
            }
        }
        if(count3==0){
            printf("\n\nNo Record Found!");
        }
        printf("\n\nFor Delete Another Record [1]\nFor Menu [2]\nFor Exit [3]\n\nEnter Choice : ");
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