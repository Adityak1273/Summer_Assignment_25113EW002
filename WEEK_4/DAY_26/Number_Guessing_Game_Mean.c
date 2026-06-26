#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(){
    char arr[5];int user=0,i=0;
    printf("Want to play the game [Yes|No] : ");
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")]='\0';
    if(strcmp(arr,"Yes")==0||strcmp(arr,"YES")==0||strcmp(arr,"yes")==0){
        srand(time(NULL));int com=rand() % 100;
        printf("\nGuess the 2 digit number and [ WIN GAME ]\n         {Guess Max Limit : 50}\n\n");
        while(i<50){
            printf("Enter the number : ");
            scanf("%d",&user);
            if(user==com){
                printf("        __            __ _____ _   _ _   _ _   _ ______ _____\n");
                printf("        \\ \\          / /|_   _| \\ | | \\ | | \\ | |  ____|  __ \\\n");
                printf("         \\ \\   /\\   / /   | | |  \\| |  \\| |  \\| | |__  | |__) |\n");
                printf("          \\ \\ /  \\ / /    | | | . ` | . ` | . ` |  __| |  _  /\n");
                printf("           \\ V /\\ V /    _| |_| |\\  | |\\  | |\\  | |____| | \\ \\\n");
                printf("            \\_/  \\_/    |_____|_| \\_|_| \\_|_| \\_|______|_|  \\_\\    You guessed the number in %d attempts\n\n",i+1);
                break;
            }
            else if(user>com){
                printf("Too High!\n\n");
            }
            else {
                printf("Too Low!\n\n");
            }
            i++;

        }

    }
    else{
        return 0;
    }
}