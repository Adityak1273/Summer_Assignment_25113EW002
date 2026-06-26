#include <stdio.h>
#include <string.h>
int main(){

    int menu=0,mid_choice1=0,mid_choice2=0,mid_choice3=0,mid_choice4=0,n=0;
    char name[500][30];int roll[500],physics[500],class[500],english[500],maths[500],chemistry[500],hindi[500],computer[500],total_marks[500],percentage[500],search=0,updates=0,deletes=0;
    start:
    printf("\n            MARKSHEET GENERATION SYSTEM\n\nAdd Student Marksheet [1]\nView All Maeksheets [2]\nSearch Student Marksheet [3]\nUpdate details [4]\nDelete Student Marksheet [5]\nExit [6]\n\nEnter Choice : ");
    scanf("%d",&menu);
    getchar();

    if(menu==1){
        add_student:
        printf("\n\n----------- ADD STUDENT MARKSHEET DETAILS -----------");
        printf("\n\nEnter  Roll No : ");
        scanf("%d",&roll[n]);
        getchar();
        printf("Enter Student Name : ");
        fgets(name[n],sizeof(name[n]),stdin);
        name[n][strcspn(name[n],"\n")]='\0';
        printf("Enter Class : ");
        scanf("%d",&class[n]);
        printf("Enter Physics Marks : ");
        scanf("%d",&physics[n]);
        printf("Enter Chemisty Marks : ");
        scanf("%d",&chemistry[n]);
        printf("Enter Mathematics Marks : ");
        scanf("%d",&maths[n]);
        printf("Enter English Marks : ");
        scanf("%d",&english[n]);
        printf("Enter Hindi Marks : ");
        scanf("%d",&hindi[n]);
        printf("Enter Computer Science Marks : ");
        scanf("%d",&computer[n]);
        total_marks[n]=physics[n]+chemistry[n]+maths[n]+english[n]+hindi[n]+computer[n];
        n++;
        printf("\n------------------------------------------------------\n            Record Added Successfully!\n------------------------------------------------------");
        printf("\n\nGenerate New Student Marksheet [1]\nFor Menu [2]\nFor Exit [3]\n\nEnter Choice : ");
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
        printf("\n\n-------- ALL STORED MARKSHEET --------\n");
        for(int i=0;i<n;i++){
            printf("\n\n==========================================================\n                   STUDENT MARKSHEET\n==========================================================");
            printf("\n\n Name    : %s",name[i]);
            printf("\n Roll No : %d",roll[i]);
            printf("\n Class   : %d",class[i]);
            printf("\n\n----------------------------------------------------------\nSubject                    Marks (Out of 100)\n----------------------------------------------------------");
            printf("\n\n Physics          : %d",physics[i]);
            printf("\n Chemisty         : %d",chemistry[i]);
            printf("\n Mathematics      : %d",maths[i]);
            printf("\n English          : %d",english[i]);
            printf("\n Hindi            : %d",hindi[i]);
            printf("\n Computer Science : %d",computer[i]);
            printf("\n\n----------------------------------------------------------");
            printf("\n\n Total Marks                      %d  / 500\n Percentage                       %d  %",total_marks[i],((total_marks[i])*100)/500);
            if((((total_marks[i])*100)/500)>=90){
                printf("\nGrade                            A+ ");
            }
            else if((((total_marks[i])*100)/500)>=80||(((total_marks[i])*100)/500)<90){
                printf("\nGrade                            A ");
            }
            else if((((total_marks[i])*100)/500)>=70||(((total_marks[i])*100)/500)<80){
                printf("\nGrade                            B ");
            }
            else if((((total_marks[i])*100)/500)>=60||(((total_marks[i])*100)/500)<70){
                printf("\nGrade                            C ");
            }
            else if((((total_marks[i])*100)/500)>=50||(((total_marks[i])*100)/500)<60){
                printf("\nGrade                            D ");
            }
            else{
                printf("\nGrade                            F ");
            }
            if(physics[i]<33||chemistry[i]<33||maths[i]<33||hindi[i]<33||english[i]<33||computer[i]<33){
                printf("\nResult                          FAIL");
            }
            else{
                printf("\nResult                          PASS");
            }
            printf("\n\n----------------------------------------------------------");
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
        printf("\n\n Enter Roll No : ");
        printf("\n\n Record Found!");
        scanf("%d",&search);
        int count1=0;
        for(int i=0;i<n;i++){
            if(roll[i]==search){
                printf("\n\n==========================================================\n                   STUDENT MARKSHEET\n==========================================================");
                printf("\n\n Name    : %s",name[i]);
                printf("\n Roll No : %d",roll[i]);
                printf("\n\n Class   : %d",class[i]);
                printf("\n----------------------------------------------------------\nSubject                    Marks (Out of 100)\n----------------------------------------------------------");
                printf("\n\n Physics          : %d",physics[i]);
                printf("\n Chemisty         : %d",chemistry[i]);
                printf("\n Mathematics      : %d",maths[i]);
                printf("\n English          : %d",english[i]);
                printf("\n Hindi            : %d",hindi[i]);
                printf("\n Computer Science : %d",computer[i]);
                printf("\n\n----------------------------------------------------------");
                printf("\n\n Total Marks                      &d  / 500\nPercentage                       %d  %\nResult                           %d ",total_marks[i],((total_marks[i])*100)/500);
                if((((total_marks[i])*100)/500)>=90){
                    printf("\nGrade                            A+ ");
                }
                else if((((total_marks[i])*100)/500)>=80||(((total_marks[i])*100)/500)<90){
                    printf("\nGrade                            A ");
                }
                else if((((total_marks[i])*100)/500)>=70||(((total_marks[i])*100)/500)<80){
                    printf("\nGrade                            B ");
                }
                else if((((total_marks[i])*100)/500)>=60||(((total_marks[i])*100)/500)<70){
                    printf("\nGrade                            C ");
                }
                else if((((total_marks[i])*100)/500)>=50||(((total_marks[i])*100)/500)<60){
                    printf("\nGrade                            D ");
                }
                else{
                    printf("\nGrade                            F ");
                }
                if(physics[i]<33||chemistry[i]<33||maths[i]<33||hindi[i]<33||english[i]<33||computer[i]<33){
                    printf("\nResult                          FAIL");
                }
                else{
                    printf("\nResult                          PASS");
                }
                printf("\n\n----------------------------------------------------------");
                count1++;
                break;
            }
        }
        if(count1==0){
            printf("\n\n Record Not Found!");
        }
        printf("\n\nSearch Another Student [1]\nFor Menu [2]\nFor Exit [3]\n\nEnter Choice : ");
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
        printf("\n\nWant to update Roll No [1]\nWant to update Name [2]\nWant to update Class [3]\nWant to update Physics Marks [4]\nWant to update Chemistry Marks [5]\nWant to update Mathematics Marks [6]\nWant to update English Marks [7]\nWant to update Hindi Marks [8]\nWant to update Computer Science Marks [9]\n\nEnter Choice : ");
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
                    printf("\n\n Enter New Class : ");
                    scanf("%d",&new_age);
                    class[i]=new_age;
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if (update==4){
                    int new_year;
                    printf("\n\n Enter New Physics Marks : ");
                    scanf("%d",&new_year);
                    physics[i]=new_year;
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if (update==5){
                    int new_chemistry;
                    printf("\n\n Enter New Chemistry Marks : ");
                    scanf("%d",&new_chemistry);
                    chemistry[i]=new_chemistry;
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if (update==6){
                    int new_maths;
                    printf("\n\n Enter New Mathematics Marks : ");
                    scanf("%d",&new_maths);
                    maths[i]=new_maths;
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if (update==7){
                    int new_english;
                    printf("\n\n Enter New English Marks : ");
                    scanf("%d",&new_english);
                    english[i]=new_english;
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if (update==8){
                    int new_hindi;
                    printf("\n\n Enter New Physics Marks : ");
                    scanf("%d",&new_hindi);
                    hindi[i]=new_hindi;
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else{
                    int new_computer;
                    printf("\n\n Enter New Computer Science Marks : ");
                    scanf("%d",&new_computer);
                    computer [i]=new_computer;
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                total_marks[i]=physics[i]+chemistry[i]+maths[i]+english[i]+hindi[i]+computer[i];
        
            }
        }
        if(count2==0){
            printf("\n\n No Record Found!");
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
                    class[j]=class[j+1];
                    physics[j]=physics[j+1];
                    chemistry[j]=chemistry[j+1];
                    maths[j]=maths[j+1];
                    english[j]=english[j+1];
                    hindi[j]=hindi[j+1];
                    computer[j]=computer[j+1];
                    total_marks[j]=total_marks[j+1];
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