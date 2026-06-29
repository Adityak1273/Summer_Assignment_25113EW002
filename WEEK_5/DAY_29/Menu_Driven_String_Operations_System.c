#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int menu=0,mid_choice=0;
    char str1[100],str2[100];
    start:
    printf("\n\n=========================================\n     STRING OPERATIONS SYSTEM\n=========================================\n\n Input String [1]\n Display String [2]\n Find Length [3]\n Copy String [4]\n Concatenate Strings [5]\n Compare Strings [6]\n Reverse String [7]\n Convert to Uppercase [8]\n Convert to Lowercase [9]\n Check Palindrome [10]\n Count Vowels [11]\n Count Consonants [12]\n Search Character [13]\n Replace Character [14]\n Exit [15]\n\n Enter Choice : ");
    scanf("%d",&menu);
    getchar();

    if(menu==1){
        input_again:
        printf("\n\n----------- INPUT STRING -----------\n\nEnter String : ");
        fgets(str1,sizeof(str1),stdin);
        str1[strcspn(str1,"\n")]='\0';
        printf("\n String Stored Successfully!");
        printf("\n\n Input Again [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        getchar();
        if(mid_choice==1){
            goto input_again;
        }
        else if(mid_choice==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==2){
        printf("\n\n----------- DISPLAY STRING -----------\n\nString : %s",str1);
        printf("\n\n For Menu [1]\n For Exit [2]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        getchar();
        if(mid_choice==1){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==3){
        printf("\n\n----------- STRING LENGTH -----------\n\nLength : %d",(int)strlen(str1));
        printf("\n\n For Menu [1]\n For Exit [2]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        getchar();
        if(mid_choice==1){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==4){
        strcpy(str2,str1);
        printf("\n\n----------- COPY STRING -----------\n\nCopied String : %s",str2);
        printf("\n\n For Menu [1]\n For Exit [2]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        getchar();
        if(mid_choice==1){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==5){
        concat_again:
        printf("\n\n----------- CONCATENATE -----------\n\nEnter Second String : ");
        fgets(str2,sizeof(str2),stdin);
        str2[strcspn(str2,"\n")]='\0';
        char temp[100];
        strcpy(temp,str1);
        strcat(temp,str2);
        printf("\nResult : %s",temp);
        printf("\n\n Concatenate Again [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        getchar();
        if(mid_choice==1){
            goto concat_again;
        }
        else if(mid_choice==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==6){
        compare_again:
        printf("\n\n----------- COMPARE STRINGS -----------\n\nEnter Second String : ");
        fgets(str2,sizeof(str2),stdin);
        str2[strcspn(str2,"\n")]='\0';
        if(strcmp(str1,str2)==0){
            printf("\n Strings are Equal");
        }
        else{
            printf("\n Strings are Not Equal");
        }
        printf("\n\n Compare Again [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        getchar();
        if(mid_choice==1){
            goto compare_again;
        }
        else if(mid_choice==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==7){
        printf("\n\n----------- REVERSE STRING -----------\n\n");
        int len=strlen(str1);
        char rev[100];
        for(int i=0;i<len;i++){
            rev[i]=str1[len-1-i];
        }
        rev[len]='\0';
        printf("Reversed String : %s",rev);
        printf("\n\n For Menu [1]\n For Exit [2]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        getchar();
        if(mid_choice==1){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==8){
        printf("\n\n----------- UPPERCASE -----------\n\n");
        for(int i=0;str1[i]!='\0';i++){
            printf("%c",toupper(str1[i]));
        }
        printf("\n\n For Menu [1]\n For Exit [2]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        getchar();
        if(mid_choice==1){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==9){
        printf("\n\n----------- LOWERCASE -----------\n\n");
        for(int i=0;str1[i]!='\0';i++){
            printf("%c",tolower(str1[i]));
        }
        printf("\n\n For Menu [1]\n For Exit [2]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        getchar();
        if(mid_choice==1){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==10){
        printf("\n\n----------- PALINDROME -----------\n\n%s\n",str1);
        int len=strlen(str1),flag=1;
        for(int i=0;i<len/2;i++){
            if(tolower(str1[i])!=tolower(str1[len-1-i])){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("\n Palindrome");
        }
        else{
            printf("\n Not a Palindrome");
        }
        printf("\n\n For Menu [1]\n For Exit [2]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        getchar();
        if(mid_choice==1){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==11){
        printf("\n\n----------- COUNT VOWELS -----------\n\n");
        int count=0;
        for(int i=0;str1[i]!='\0';i++){
            char c=tolower(str1[i]);
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                count++;
            }
        }
        printf("Vowels : %d",count);
        printf("\n\n For Menu [1]\n For Exit [2]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        getchar();
        if(mid_choice==1){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==12){
        printf("\n\n----------- COUNT CONSONANTS -----------\n\n");
        int count=0;
        for(int i=0;str1[i]!='\0';i++){
            char c=tolower(str1[i]);
            if(c>='a'&&c<='z'){
                if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'){
                    count++;
                }
            }
        }
        printf("Consonants : %d",count);
        printf("\n\n For Menu [1]\n For Exit [2]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        getchar();
        if(mid_choice==1){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==13){
        search_again:
        printf("\n\n----------- SEARCH CHARACTER -----------\n\nEnter Character : ");
        char sch;
        scanf("%c",&sch);
        getchar();
        int count1=0;
        for(int i=0;str1[i]!='\0';i++){
            if(str1[i]==sch){
                printf("\n Character Found at Position : %d",i+1);
                count1++;
                break;
            }
        }
        if(count1==0){
            printf("\n Character Not Found!");
        }
        printf("\n\n Search Again [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        getchar();
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

    else if(menu==14){
        replace_again:
        printf("\n\n----------- REPLACE CHARACTER -----------\n\nEnter Character to Replace : ");
        char old_ch,new_ch;
        scanf("%c",&old_ch);
        getchar();
        printf("Enter New Character        : ");
        scanf("%c",&new_ch);
        getchar();
        for(int i=0;str1[i]!='\0';i++){
            if(str1[i]==old_ch){
                str1[i]=new_ch;
            }
        }
        printf("\nUpdated String : %s",str1);
        printf("\n\n Replace Again [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice);
        getchar();
        if(mid_choice==1){
            goto replace_again;
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