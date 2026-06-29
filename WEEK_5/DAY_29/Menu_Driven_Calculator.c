#include <stdio.h>
#include <math.h>
int main(){
    int menu=0,mid_choice=0,num1,num2;
    float result;
    start:
    printf("\n\n====================================\n        MENU-DRIVEN CALCULATOR\n====================================\n\n Addition [1]\n Subtraction [2]\n Multiplication [3]\n Division [4]\n Modulus [5]\n Power [6]\n Square [7]\n Square Root [8]\n Exit [9]\n\n Enter Choice : ");
    scanf("%d",&menu);

    if(menu==1){
        printf("\n\n----------- ADDITION -----------\n\nEnter First Number  : ");
        scanf("%d",&num1);
        printf("Enter Second Number : ");
        scanf("%d",&num2);
        result=num1+num2;
        printf("\nResult : %.0f",result);
        printf("\n\n Calculate Again [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto start;
        }
        else if(mid_choice==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==2){
        printf("\n\n----------- SUBTRACTION -----------\n\nEnter First Number  : ");
        scanf("%d",&num1);
        printf("Enter Second Number : ");
        scanf("%d",&num2);
        result=num1-num2;
        printf("\nResult : %.0f",result);
        printf("\n\n Calculate Again [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto start;
        }
        else if(mid_choice==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==3){
        printf("\n\n----------- MULTIPLICATION -----------\n\nEnter First Number  : ");
        scanf("%d",&num1);
        printf("Enter Second Number : ");
        scanf("%d",&num2);
        result=num1*num2;
        printf("\nResult : %.0f",result);
        printf("\n\n Calculate Again [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto start;
        }
        else if(mid_choice==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==4){
        printf("\n\n----------- DIVISION -----------\n\nEnter First Number  : ");
        scanf("%d",&num1);
        printf("Enter Second Number : ");
        scanf("%d",&num2);
        if(num2==0){
            printf("\n Cannot Divide By Zero!");
        }
        else{
            result=(float)num1/num2;
            printf("\nResult : %.2f",result);
        }
        printf("\n\n Calculate Again [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto start;
        }
        else if(mid_choice==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==5){
        printf("\n\n----------- MODULUS -----------\n\nEnter First Number  : ");
        scanf("%d",&num1);
        printf("Enter Second Number : ");
        scanf("%d",&num2);
        result=num1%num2;
        printf("\nResult : %.0f",result);
        printf("\n\n Calculate Again [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto start;
        }
        else if(mid_choice==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==6){
        printf("\n\n----------- POWER -----------\n\nEnter Base     : ");
        scanf("%d",&num1);
        printf("Enter Exponent : ");
        scanf("%d",&num2);
        result=pow(num1,num2);
        printf("\nResult : %.0f",result);
        printf("\n\n Calculate Again [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto start;
        }
        else if(mid_choice==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==7){
        printf("\n\n----------- SQUARE -----------\n\nEnter Number : ");
        scanf("%d",&num1);
        result=num1*num1;
        printf("\nResult : %.0f",result);
        printf("\n\n Calculate Again [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto start;
        }
        else if(mid_choice==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==8){
        printf("\n\n----------- SQUARE ROOT -----------\n\nEnter Number : ");
        scanf("%d",&num1);
        result=sqrt(num1);
        printf("\nResult : %.2f",result);
        printf("\n\n Calculate Again [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        if(mid_choice==1){
            goto start;
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
        printf("\n Thank You For Using Calculator!\n\n");
        return 0;
    }
}