#include <stdio.h>
int main(){
    int menu=0,q1=0,q2=0,q3=0,q4=0,q5=0,q6=0,q7=0,q8=0,q9=0,q10=0;
    play_again1:
    printf("\n               QUIZ APPLICATION");
    printf("\n\nStart Quiz [1]\nView Score [2]\nExit [3]\n\nEnter Choice : ");
    scanf("%d",&menu);
    int submit=0,score=0,sub=0,play_again=0;
    if(menu==1){
        printf("\n\nQ1. Capital of India?\n\n1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n\nEnter Your Option : ");
        scanf("%d",&q1);
        if(q1==2){
            printf("\nCorrect Answer!");
            score++;
        }
        else{
            printf("\nWrong Answer!");
            sub++;
        }
        printf("\n\nQ2. How many continents are there?\n\n1. 5\n2. 6\n3. 7\n4. 8\n\nEnter Your Option : ");
        scanf("%d",&q2);
        if(q2==3){
            printf("\nCorrect Answer!");
            score++;
        }
        else{
            printf("\nWrong Answer!");
            sub++;
        }
        printf("\n\nQ3. Which planet is known as the Red Planet?\n\n1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n\nEnter Your Option : ");
        scanf("%d",&q3);
        if(q3==2){
            printf("\nCorrect Answer!");
            score++;
        }
        else{
            printf("\nWrong Answer!");
            sub++;
        }
        printf("\n\nQ4. What is 12 X 8?\n\n1. 96\n2. 88\n3. 108\n4. 92\n\nEnter Your Option : ");
        scanf("%d",&q4);
        if(q4==1){
            printf("\nCorrect Answer!");
            score++;
        }
        else{
            printf("\nWrong Answer!");
            sub++;
        }
        printf("\n\nQ5. Who is known as the Father of Computers?\n\n1. Alan Turing\n2. Bill Gates\n3. Charles Babbage\n4. Steve Jobs\n\nEnter Your Option : ");
        scanf("%d",&q5);
        if(q5==3){
            printf("\nCorrect Answer!");
            score++;
        }
        else{
            printf("\nWrong Answer!");
            sub++;
        }
        printf("\n\nQ6. Which language is primarily used for Android development?\n\n1. Java\n2. Python\n3. C\n4. PHP\n\nEnter Your Option : ");
        scanf("%d",&q6);
        if(q6==1){
            printf("\nCorrect Answer!");
            score++;
        }
        else{
            printf("\nWrong Answer!");
            sub++;
        }
        printf("\n\nQ7. Which is the largest ocean in the world?\n\n1. Atlantic\n2. Indian\n3. Arctic\n4. Pacific\n\nEnter Your Option : ");
        scanf("%d",&q7);
        if(q7==4){
            printf("\nCorrect Answer!");
            score++;
        }
        else{
            printf("\nWrong Answer!");
            sub++;
        }
        printf("\n\nQ8. What does CPU stand for?\n\n1. Central Process Unit\n2. Central Processing Unit\n3. Computer Processing Unit\n4. Core Processing Unit\n\nEnter Your Option : ");
        scanf("%d",&q8);
        if(q8==2){
            printf("\nCorrect Answer!");
            score++;
        }
        else{
            printf("\nWrong Answer!");
            sub++;
        }
        printf("\n\nQ9. Which data type is used to store decimal numbers in C?\n\n1. int\n2. char\n3. float\n4. string\n\nEnter Your Option : ");
        scanf("%d",&q9);
        if(q9==3){
            printf("\nCorrect Answer!");
            score++;
        }
        else{
            printf("\nWrong Answer!");
            sub++;
        }
        printf("\n\nQ10. Which company developed the C language?\n\n1. Microsoft\n2. Apple\n3. Bell Labs\n4. Google\n\nEnter Your Option : ");
        scanf("%d",&q10);
        if(q10==3){
            printf("\nCorrect Answer!");
            score++;
        }
        else{
            printf("\nWrong Answer!");
            sub++;
        }
        printf("\n\nFor Submit Enter [1]\nFor Exit Enter [2]\nEnter Choice : ");
        scanf("%d",&submit);
        if(submit==1){
            goto View_Score;
        }
        else{
            goto Exit;
        }
    }
    else if(menu==2){
        View_Score:
        printf("\n\n       QUIZ RESULT\n\nCorrect Answers : %d\nWrong Answers   : %d\nScore           : %d/10\n\nThank You For Playing!",score,sub,score);
        printf("\n\nWant to play again [1]\nExit [2]\n\nEnter Choice : ");
        scanf("%d",&play_again);
        if(play_again==1){
            goto play_again1;
        }
        else{
            goto Exit;
        }
    }
    else{
        Exit:
        return 0;
    }
}