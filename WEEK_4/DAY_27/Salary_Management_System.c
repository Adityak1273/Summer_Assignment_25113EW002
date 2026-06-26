#include <stdio.h>
#include <string.h>
int main(){

    int menu=0,mid_choice=0,mid_choice6=0,mid_choice4=0,n=0,total=0;
    char name[500][30],department[500][30];int id[500],basic_salary[500],bonus[500],total_salary[500],search=0,updates=0,deletes=0;
    start:
    printf("\n            EMPLOYEE MANAGEMENT SYSTEM\n\nAdd Employee Details [1]\nView All Employees Details [2]\nSearch Employee Details [3]\nUpdate Employee Salary [4]\nCalculate Total Salary [5]\nCalculate Average Salary [6]\nDelete Employee Record [7]\n\nEnter Choice : ");
    scanf("%d",&menu);
    getchar();

    if(menu==1){
        add_employee:
        printf("\n\n----------- ADD EMPLOYEE DETAILS -----------");
        printf("\n\nEnter  Employee ID     : ");
        scanf("%d",&id[n]);
        getchar();
        printf("Enter Employee Name  : ");
        fgets(name[n],30,stdin);
        name[n][strcspn(name[n],"\n")]='\0';
        printf("Enter  Department    : ");
        fgets(department[n],30,stdin);
        department[n][strcspn(department[n],"\n")]='\0';
        printf("Enter Basic Salary   : ");
        scanf("%d",&basic_salary[n]);
        printf("Enter Bonus          : ");
        scanf("%d",&bonus[n]);
        total_salary[n]=basic_salary[n]+bonus[n];
        printf("\nRecord Added Successfully!");
        n++;
        printf("\n-------------------------------------------");
        printf("\n\nFor Insert New Employee Data [1]\nFor Menu [2]\nFor Exit [3]\n\nEnter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            getchar();
            goto add_employee;
        }
        else if(mid_choice==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==2){
        printf("\n\n-------- ALL EMPLOYEES DETAILS --------");
        for(int i=0;i<n;i++){
            printf("\n\n Employee ID     : %d",id[i]);
            printf("\n Employee Name  : %s",name[i]);
            printf("\n Department     : %s",department[i]);
            printf("\n Basic Salary   : %d",basic_salary[i]);
            printf("\n Bonus          : %d",bonus[i]);
            printf("\n\n Total Salary    : %d",total_salary[i]);
            printf("\n--------------------------------------");
        }
        printf("\n\nFor Menu [1]\nFor Exit [2]\n\nEnter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==3){
        search_again:
        printf("\n\n-------- SEARCH EMPLOYEE DETAILS --------");
        printf("\n\nEnter Employee ID : ");
        scanf("%d",&search);
        int count1=0;
        for(int i=0;i<n;i++){
            if(id[i]==search){
                printf("\n\n             Record Found!");
                printf("\n\n Employee ID     : %d",id[i]);
                printf("\n Employee Name  : %s",name[i]);
                printf("\n Department : %s",department[i]);    
                printf("\n Basic Salary   : %d",basic_salary[i]);
                printf("\n Bonus          : %d",bonus[i]);
                printf("\n\n Total Salary    : %d",total_salary[i]);
                printf("\n----------------------------------------");
                count1++;
                break;
            }
        }
        if(count1==0){
            printf("\n\nRecord Not Found!");
        }
        printf("\n\nFor Search Another Employee [1]\nFor Menu [2]\nFor Exit [3]\n\nEnter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto search_again;
        }
        else if(mid_choice==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==4){
        update_again:
        printf("\n\n-------- UPDATE EMPLOYEE SALARY --------");
        printf("\n\nEnter Employee ID : ");
        scanf("%d",&updates);
        int update=0,count2=0;
        printf("\n\nWant to update Basic Salary [1]\nWant to update Bonus [2]\n\nEnter Choice : ");
        scanf("%d",&update);
        for(int i=0;i<n;i++){
            if(id[i]==updates){
                if(update==1){
                    int new_basic_salary;
                    printf("\n\n Enter New Basic Salary  : ");
                    scanf("%d",&new_basic_salary);
                    basic_salary[i]=new_basic_salary;
                    total_salary[i]=basic_salary[i]+bonus[i];
                    printf("New Data Entered Successfully!");
                    printf("\n---------------------------------------");
                    count2++;
                    break;
                }
                else{
                    int new_bonus;
                    printf("\n\n Enter New Bonus         : ");
                    scanf("%d",&new_bonus);
                    bonus[i]=new_bonus;
                    total_salary[i]=basic_salary[i]+bonus[i];
                    printf("New Data Entered Successfully!");
                    printf("\n---------------------------------------");
                    count2++;
                    break;
                }
            }
        }
        if(count2==0){
            printf("\n\nNo Record Found!");
        }
        printf("\n\nFor Update Another Record [1]\nFor Menu [2]\nFor Exit [3]\n\nEnter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto update_again;
        }
        else if(mid_choice==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if (menu==5){
        int total=0;
        printf("\n\n-------- COMPANY SALARY REPORT --------");
        for(int i=0;i<n;i++){
            total+=total_salary[i];
        }
        printf("\n\nTotal Salary Expense : %d",total);
        printf("\n--------------------------------------");
        printf("\n\nFor Menu [1]\nFor Exit [2]\n\nEnter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto start;
        }
        else{
            goto exit;
        }
    }
    
    else if (menu==6){
        int total_1=0,avg=0;
        printf("\n\n-------- AVERAGE SALARY --------");
        for(int i=0;i<n;i++){
            total_1+=total_salary[i];
        }
        if(n>0){
            avg=total_1/n;
            printf("\n\nAverage Salary : %d",avg);
        }
        else{
            printf("\n\nNo Employee Records Found!");
        }
        printf("\n--------------------------------------");
        printf("\n\nFor Menu [1]\nFor Exit [2]\n\nEnter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==7){
        delete_again:
        printf("\n\n-------- DELETE EMPLOYEE RECORD --------");
        printf("\n\nEnter Employee ID : ");
        scanf("%d",&deletes);
        int delete=0,count3=0;
        for(int i=0;i<n;i++){
            if(id[i]==deletes){
                for(int j=i; j<n-1; j++){
                    id[j]=id[j+1];
                    strcpy(name[j],name[j+1]);
                    basic_salary[j]=basic_salary[j+1];
                    strcpy(department[j],department[j+1]);
                    total_salary[j]=total_salary[j+1];
                    bonus[j]=bonus[j+1];
                }
                n--;
                count3++;
                printf("Record Deleted Successfully!");
                printf("\n---------------------------------------");
                break;
            }
        }
        if(count3==0){
            printf("\n\nNo Record Found!");
        }
        printf("\n\nFor Delete Another Record [1]\nFor Menu [2]\nFor Exit [3]\n\nEnter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto delete_again;
        }
        else if(mid_choice==2){
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