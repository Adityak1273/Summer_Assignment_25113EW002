#include <stdio.h>
#include <string.h>
int main(){

    int menu=0,mid_choice1=0,mid_choice2=0,mid_choice3=0,mid_choice4=0,n=0;
    char book_name[500][30],author_name[500][30],category[500][30];int quantity[500],id[500],search=0,updates=0,deletes=0,issue=0,return1=0;
    start:
    printf("\n\n=========================================\n       LIBRARY MANAGEMENT SYSTEM\n=========================================\n\n Add Book [1]\n View All Books [2]\n Search Book [3]\n Update Book Details [4]\n Issue Book [5]\n Return Book [6]\n Delete Book [7]\n Exit [8]\n\n Enter Choice : ");
    scanf("%d",&menu);
    getchar();

    if(menu==1){
        add_student:
        printf("\n\n----------- ADD BOOK -----------");
        printf("\n\nEnter  Book ID : ");
        scanf("%d",&id[n]);
        getchar();
        printf("Enter Book Name : ");
        fgets(book_name[n],sizeof(book_name[n]),stdin);
        book_name[n][strcspn(book_name[n],"\n")]='\0';
        printf("Enter Author Name : ");
        fgets(author_name[n],sizeof(author_name[n]),stdin);
        author_name[n][strcspn(author_name[n],"\n")]='\0';
        printf("Enter Category : ");
        fgets(category[n],sizeof(category[n]),stdin);
        category[n][strcspn(category[n],"\n")]='\0';
        printf(" Enter the Quantity : ");
        scanf("%d",&quantity[n]);
        n++;
        printf("\n---------------------------------");
        printf("\n\n Insert New Book [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
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
        printf("\n\n=========================================\n            BOOK DETAILS\n=========================================");
        for(int i=0;i<n;i++){
            printf("\n\n Book ID      : %d\n Book Name    : %s\n Author       : %s\n Category     : %s\n Quantity     : %d",id[i],book_name[i],author_name[i],category[i],quantity[i]);
            if(quantity[i]>0){
                printf("\n Status       : Available");
            }
            else{
                printf("\n Status       : Unavailable");
            }
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
        printf("\n\n----------- SEARCH BOOK -----------\n\n Enter Book ID : ");
        scanf("%d",&search);
        int count1=0;
        for(int i=0;i<n;i++){
            if(id[i]==search){
                printf("\n\n             Record Found!");
                printf("\n\n Book ID      : %d\n Book Name    : %s\n Author       : %s\n Category     : %s\n Quantity     : %d",id[i],book_name[i],author_name[i],category[i],quantity[i]);
                if(quantity[i]>0){
                    printf("\n Status       : Available");
                }
                else{
                    printf("\n Status       : Unavailable");
                }
                printf("\n\n-----------------------------------------");
                count1++;
                break;
            }
        }
        if(count1==0){
            printf("\n\n Record Not Found!");
        }
        printf("\n\n Search Another Book [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
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
        printf("\n\n-------- UPDATE BOOK --------\n\n Enter Book ID : ");
        scanf("%d",&updates);
        int update=0,count2=0;
        printf("\n\n Update Book Name [1]\n Update Author Name [2]\n Update Category [3]\n Update Quantity [4]\n\n Enter Choice : ");
        scanf("%d",&update);
        for(int i=0;i<n;i++){
            if(id[i]==updates){
                if(update==1){
                    char new_book_name[30];
                    getchar();
                    printf("\n\n Enter New Book Name : ");
                    fgets(new_book_name,sizeof(new_book_name),stdin);
                    new_book_name[strcspn(new_book_name,"\n")]='\0';
                    strcpy(book_name[i],new_book_name);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if(update==2){
                    getchar();
                    char new_author_name[30];
                    printf("\n\n Enter New Author Name : ");
                    fgets(new_author_name,sizeof(new_author_name),stdin);
                    new_author_name[strcspn(new_author_name,"\n")]='\0';
                    strcpy(author_name[i],new_author_name);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if(update==3){
                    getchar();
                    char new_category[30];
                    printf("\n\n Enter New Category : ");
                    fgets(new_category,sizeof(new_category),stdin);
                    new_category[strcspn(new_category,"\n")]='\0';
                    strcpy(category[i],new_category);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else{
                    int new_quantity;
                    printf("\n\n Enter New Quantity : ");
                    scanf("%d",&new_quantity);
                    quantity[i]=new_quantity;
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
        printf("\n\n Update Another Book Record [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
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
    else if (menu==5){
        issue1 :
        int count_a=0;
        printf("-------- ISSUE BOOK --------\n\n Enter Book ID : ");
        scanf("%d",&issue);
        for(int i=0;i<n;i++){
            if(id[i]==issue){
                if(quantity[i]>0){
                    quantity[i]=quantity[i]-1;
                    printf("\n Book Issued Successfully!\n Remaining Quantity : %d",quantity[i]);
                    count_a++;
                }
                break;
            }
        }
        if(count_a==0){
            printf("\n Book Not Available!");
        }
        printf("\n\n Issue Another Book [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice3);
        if(mid_choice3==1){
            goto issue1;
        }
        else if(mid_choice3==2){
            goto start;
        }
        else{
            goto exit;
        }
    }
    else if (menu==6){
        return2:
        int count_b=0;
        printf("-------- RETURN BOOK --------\n\n Enter Book ID : ");
        scanf("%d",&return1);
        for(int i=0;i<n;i++){
            if(id[i]==return1){
                quantity[i]=quantity[i]+1;
                printf("\n Book Returned Successfully!\n Available Quantity : %d",quantity[i]);
                break;
                count_b++;
            }
        }
        if(count_b==0){
            printf("\n Record Not Found!");
        }
        printf("\n\n Return Another Book [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice3);
        if(mid_choice3==1){
            goto return2;
        }
        else if(mid_choice3==2){
            goto start;
        }
        else{
            goto exit;
        }
    }
    else if(menu==7){
        delete_again:
        printf("\n\n-------- DELETE STUDENT --------");
        printf("\n\nEnter Roll No : ");
        scanf("%d",&deletes);
        int delete=0,count3=0;
        for(int i=0;i<n;i++){
            if(id[i]==deletes){
                for(int j=i; j<n-1; j++){
                    strcpy(author_name[j],author_name[j+1]);
                    strcpy(book_name[j],book_name[j+1]);
                    strcpy(category[j],category[j+1]);
                    quantity[j]=quantity[j+1];
                    id[j]=id[j+1];
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