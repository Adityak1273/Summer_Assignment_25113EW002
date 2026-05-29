#include <stdio.h>
int main(){
    int n,start,add=0,end,a,notprime;
    printf("Enter the range Starting Number : ");
    scanf("%d",&start);
    printf("Enter the range Ending Number : ");
    scanf("%d",&end);
    a=(end+1)-start;
    int arr[a];
    for(int i=start;i<=end;i++){
        for(int j=2;j<i;j++){
            if(i!=0 && i!=1){
                if(i%j==0){
                    notprime=i;
                }    
            }
        }
        if(i!=notprime){
            arr[add]=i;
            add++;

        }
        
    }
    printf("All prime numbers in the range are : ");
    for(int z=0;z<add;z++){
        printf("%d",arr[z]);
        if(z!=add-1){
            printf(", ");
        }
    }
    return 0;
}