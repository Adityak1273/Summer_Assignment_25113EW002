#include <stdio.h>
int main(){

    int menu=0,mid_choice=0,arr[100],n=0;
    start:
    printf("\n\n=========================================\n      MENU-DRIVEN ARRAY OPERATIONS\n=========================================\n\n Insert Elements [1]\n Display Array [2]\n Search Element [3]\n Update Element [4]\n Delete Element [5]\n Find Maximum Element [6]\n Find Minimum Element [7]\n Calculate Sum [8]\n Calculate Average [9]\n Sort Array Ascending [10]\n Sort Array Descending [11]\n Exit [12]\n\n Enter Choice : ");
    scanf("%d",&menu);

    if(menu==1){
        insert_again:
        printf("\n\n----------- INSERT ELEMENTS -----------\n\nEnter Number of Elements : ");
        scanf("%d",&n);
        printf("Enter Elements :\n");
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("\n Record Added Successfully!");
        printf("\n\n Insert Again [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto insert_again;
        }
        else if(mid_choice==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==2){
        printf("\n\n----------- DISPLAY ARRAY -----------\n\nArray Elements :\n\n");
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n\n For Menu [1]\n For Exit [2]\n\n Enter Choice : ");
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
        printf("\n\n----------- SEARCH ELEMENT -----------\n\nEnter Element to Search : ");
        int search,count1=0;
        scanf("%d",&search);
        for(int i=0;i<n;i++){
            if(arr[i]==search){
                printf("\n Element Found at Index : %d",i);
                count1++;
                break;
            }
        }
        if(count1==0){
            printf("\n Element Not Found!");
        }
        printf("\n\n Search Again [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
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
        printf("\n\n----------- UPDATE ELEMENT -----------\n\nEnter Index : ");
        int idx,new_val;
        scanf("%d",&idx);
        if(idx<0||idx>=n){
            printf("\n Invalid Index!");
        }
        else{
            printf("Enter New Value : ");
            scanf("%d",&new_val);
            arr[idx]=new_val;
            printf("\n Element Updated Successfully!");
        }
        printf("\n\n Update Again [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
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

    else if(menu==5){
        delete_again:
        printf("\n\n----------- DELETE ELEMENT -----------\n\nEnter Index to Delete : ");
        int del_idx;
        scanf("%d",&del_idx);
        if(del_idx<0||del_idx>=n){
            printf("\n Invalid Index!");
        }
        else{
            for(int j=del_idx;j<n-1;j++){
                arr[j]=arr[j+1];
            }
            n--;
            printf("\n Element Deleted Successfully!");
        }
        printf("\n\n Delete Again [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
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

    else if(menu==6){
        printf("\n\n----------- MAXIMUM ELEMENT -----------\n\n");
        int max=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        printf("Maximum Element : %d",max);
        printf("\n\n For Menu [1]\n For Exit [2]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==7){
        printf("\n\n----------- MINIMUM ELEMENT -----------\n\n");
        int min=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]<min){
                min=arr[i];
            }
        }
        printf("Minimum Element : %d",min);
        printf("\n\n For Menu [1]\n For Exit [2]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==8){
        printf("\n\n----------- SUM OF ARRAY -----------\n\n");
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        printf("Sum = %d",sum);
        printf("\n\n For Menu [1]\n For Exit [2]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==9){
        printf("\n\n----------- AVERAGE OF ARRAY -----------\n\n");
        float sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        float avg=sum/n;
        printf("Average = %.2f",avg);
        printf("\n\n For Menu [1]\n For Exit [2]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==10){
        printf("\n\n----------- SORT ASCENDING -----------\n\n");
        int temp;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n\n For Menu [1]\n For Exit [2]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==11){
        printf("\n\n----------- SORT DESCENDING -----------\n\n");
        int temp;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(arr[j]<arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n\n For Menu [1]\n For Exit [2]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
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