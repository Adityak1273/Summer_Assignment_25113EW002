#include <stdio.h>
#include <string.h>
int main(){

    int menu=0,mid_choice1=0,mid_choice2=0,mid_choice3=0,mid_choice4=0,n=0;
    char name[n][30],department[n][30];int id[500],age[500],salary[500],search=0,updates=0,deletes=0;
    start:
    printf("\n            EMPLOYEE MANAGEMENT SYSTEM\n\nAdd Employee Details [1]\nView All Employees Details [2]\nSearch Employee Details [3]\nUpdate Employee Details [4]\nDelete Employee Record [5]\n\nEnter Choice : ");
    scanf("%d",&menu);
    getchar();

    if(menu==1){
        add_employee:
        printf("\n\n----------- ADD EMPLOYEE DETAILS -----------");
        printf("\n\nEnter  Employee ID : ");
        scanf("%d",&id[n]);
        getchar();
        printf("Enter Employee Name : ");
        fgets(name[n],sizeof(name[n]),stdin);
        name[n][strcspn(name[n],"\n")]='\0';
        printf("Enter Age : ");
        scanf("%d",&age[n]);
        getchar();
        printf("Enter  Department : ");
        fgets(department[n],sizeof(department[n]),stdin);
        department[n][strcspn(department[n],"\n")]='\0';
        printf("Enter Salary : ");
        scanf("%d",&salary[n]);
        n++;
        printf("\n---------------------------------");
        printf("\n\nFor Insert New Employee Data [1]\nFor Menu [2]\nFor Exit [3]\n\nEnter Choice : ");
        scanf("%d",&mid_choice1);
        if(mid_choice1==1){
            goto add_employee;
        }
        else if(mid_choice1==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==2){
        printf("\n\n-------- ALL EMPLOYEES DETAILS --------");
        for(int i=0;i<n;i++){
            printf("\n\n Employee ID : %d",id[i]);
            printf("\n Employee Name : %s",name[i]);
            printf("\n Age : %d",age[i]);
            printf("\n Department : %s",department[i]);
            printf("\n Salary : %d",salary[i]);
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
        printf("\n\n-------- SEARCH EMPLOYEE DETAILS --------");
        printf("\n\nEnter Employee ID : ");
        scanf("%d",&search);
        int count1=0;
        for(int i=0;i<n;i++){
            if(id[i]==search){
                printf("\n\n             Record Found!");
                printf("\n\n Employee ID : %d",id[i]);
                printf("\n Employee Name : %s",name[i]);
                printf("\n Age : %d",age[i]);
                printf("\n Department : %s",department[i]);
                printf("\n Salary : %d",salary[i]);
                printf("\n------------------------------");
                count1++;
                break;
            }
        }
        if(count1==0){
            printf("\n\nRecord Not Found!");
        }
        printf("\n\nFor Search Another Employee [1]\nFor Menu [2]\nFor Exit [3]\n\nEnter Choice : ");
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
        printf("\n\n-------- UPDATE EMPLOYEE DETAILS --------");
        printf("\n\nEnter Employee ID : ");
        scanf("%d",&updates);
        int update=0,count2=0;
        printf("\n\nWant to update Employee ID [1]\nWant to update Employee Name [2]\nWant to update Age [3]\nWant to update Department [4]\nWant to update Salary [5]\n\nEnter Choice : ");
        scanf("%d",&update);
        for(int i=0;i<n;i++){
            if(id[i]==updates){
                if(update==1){
                    int new_id;
                    printf("\n\n Enter New Employee ID : ");
                    scanf("%d",&new_id);
                    id[i]=new_id;
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if(update==2){
                    char new_name[30];
                    printf("\n\n Enter New Employee name : ");
                    getchar();
                    fgets(new_name,sizeof(new_name),stdin);
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
                    char new_depart[30];
                    printf("\n\n Enter New Department : ");
                    fgets(new_depart,sizeof(new_depart),stdin);
                    getchar();
                    new_depart[strcspn(new_depart,"\n")]='\0';
                    strcpy(department[i],new_depart);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else{
                    int new_salary;
                    printf("\n\n Enter New Salary : ");
                    scanf("%d",&new_salary);
                    salary[i]=new_salary;
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
        printf("\n\n-------- DELETE EMPLOYEE RECORD --------");
        printf("\n\nEnter Employee ID : ");
        scanf("%d",&deletes);
        int delete=0,count3=0;
        for(int i=0;i<n;i++){
            if(id[i]==deletes){
                for(int j=i; j<n-1; j++){
                    id[j]=id[j+1];
                    strcpy(name[j],name[j+1]);
                    age[j]=age[j+1];
                    strcpy(department[j],department[j+1]);
                    salary[j]=salary[j+1];
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