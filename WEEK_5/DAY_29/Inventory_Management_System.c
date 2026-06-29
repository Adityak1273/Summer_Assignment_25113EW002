#include <stdio.h>
#include <string.h>
int main(){
    int menu=0,mid_choice1=0,mid_choice2=0,mid_choice3=0,n=0,search=0,updates=0,deletes=0,product_id[500],quantity[500];
    char product_name[500][30],category[500][30];
    float price[500];
    start:
    printf("\n\n=========================================\n      INVENTORY MANAGEMENT SYSTEM\n=========================================\n\n Add Product [1]\n View All Products [2]\n Search Product [3]\n Update Product [4]\n Sell Product [5]\n Restock Product [6]\n Delete Product [7]\n Exit [8]\n\n Enter Choice : ");
    scanf("%d",&menu);
    getchar();

    if(menu==1){
        add_product:
        printf("\n\n----------- ADD PRODUCT -----------");
        printf("\n\nProduct ID     : ");
        scanf("%d",&product_id[n]);
        getchar();
        printf("Product Name   : ");
        fgets(product_name[n],sizeof(product_name[n]),stdin);
        product_name[n][strcspn(product_name[n],"\n")]='\0';
        printf("Category       : ");
        fgets(category[n],sizeof(category[n]),stdin);
        category[n][strcspn(category[n],"\n")]='\0';
        printf("Price          : ");
        scanf("%f",&price[n]);
        printf("Quantity       : ");
        scanf("%d",&quantity[n]);
        n++;
        printf("\n-----------------------------------");
        printf("\n Product Added Successfully!");
        printf("\n-----------------------------------");
        printf("\n\n Add Another Product [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice1);
        if(mid_choice1==1){
            goto add_product;
        }
        else if(mid_choice1==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==2){
        printf("\n\n=========================================\n          PRODUCT DETAILS\n=========================================");
        for(int i=0;i<n;i++){
            printf("\n\nProduct ID     : %d\nProduct Name   : %s\nCategory       : %s\nPrice          : Rs.%.0f\nQuantity       : %d",product_id[i],product_name[i],category[i],price[i],quantity[i]);
            if(quantity[i]>0){
                printf("\nStatus         : In Stock");
            }
            else{
                printf("\nStatus         : Out of Stock");
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
        printf("\n\n----------- SEARCH PRODUCT -----------\n\nEnter Product ID : ");
        scanf("%d",&search);
        int count1=0;
        for(int i=0;i<n;i++){
            if(product_id[i]==search){
                printf("\n\n Product Found!\n\nProduct ID     : %d\nProduct Name   : %s\nCategory       : %s\nPrice          : Rs.%.0f\nQuantity       : %d",product_id[i],product_name[i],category[i],price[i],quantity[i]);
                if(quantity[i]>0){
                    printf("\nStatus         : In Stock");
                }
                else{
                    printf("\nStatus         : Out of Stock");
                }
                printf("\n\n-----------------------------------------");
                count1++;
                break;
            }
        }
        if(count1==0){
            printf("\n\n Product Not Found!");
        }
        printf("\n\n Search Another Product [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
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
        printf("\n\n----------- UPDATE PRODUCT -----------\n\nEnter Product ID : ");
        scanf("%d",&updates);
        int update=0,count2=0;
        printf("\n\n Product Name [1]\n Category [2]\n Price [3]\n Quantity [4]\n\n Enter Choice : ");
        scanf("%d",&update);
        for(int i=0;i<n;i++){
            if(product_id[i]==updates){
                if(update==1){
                    getchar();
                    char new_name[30];
                    printf("\n\n Enter New Product Name : ");
                    fgets(new_name,sizeof(new_name),stdin);
                    new_name[strcspn(new_name,"\n")]='\0';
                    strcpy(product_name[i],new_name);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if(update==2){
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
                else if(update==3){
                    float new_price;
                    printf("\n\n Enter New Price : ");
                    scanf("%f",&new_price);
                    price[i]=new_price;
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else{
                    int new_qty;
                    printf("\n\n Enter New Quantity : ");
                    scanf("%d",&new_qty);
                    quantity[i]=new_qty;
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
        printf("\n\n Update Another Product [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
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
        sell_again:
        int count_a=0,sell_qty=0;
        printf("\n\n----------- SELL PRODUCT -----------\n\nEnter Product ID : ");
        scanf("%d",&search);
        printf("Enter Quantity to Sell : ");
        scanf("%d",&sell_qty);
        for(int i=0;i<n;i++){
            if(product_id[i]==search){
                if(sell_qty>quantity[i]){
                    printf("\n Insufficient Stock!");
                }
                else{
                    quantity[i]=quantity[i]-sell_qty;
                    printf("\n Sale Successful!\n Remaining Quantity : %d",quantity[i]);
                }
                count_a++;
                break;
            }
        }
        if(count_a==0){
            printf("\n Product Not Found!");
        }
        printf("\n\n Sell Another Product [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice3);
        if(mid_choice3==1){
            goto sell_again;
        }
        else if(mid_choice3==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==6){
        restock_again:
        int count_b=0,add_qty=0;
        printf("\n\n----------- RESTOCK PRODUCT -----------\n\nEnter Product ID : ");
        scanf("%d",&search);
        printf("Enter Quantity to Add : ");
        scanf("%d",&add_qty);
        for(int i=0;i<n;i++){
            if(product_id[i]==search){
                quantity[i]=quantity[i]+add_qty;
                printf("\n Stock Updated Successfully!\n Current Quantity : %d",quantity[i]);
                count_b++;
                break;
            }
        }
        if(count_b==0){
            printf("\n Product Not Found!");
        }
        printf("\n\n Restock Another Product [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice3);
        if(mid_choice3==1){
            goto restock_again;
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
        printf("\n\n----------- DELETE PRODUCT -----------");
        printf("\n\nEnter Product ID : ");
        scanf("%d",&deletes);
        int count3=0;
        for(int i=0;i<n;i++){
            if(product_id[i]==deletes){
                for(int j=i;j<n-1;j++){
                    product_id[j]=product_id[j+1];
                    strcpy(product_name[j],product_name[j+1]);
                    strcpy(category[j],category[j+1]);
                    price[j]=price[j+1];
                    quantity[j]=quantity[j+1];
                }
                n--;
                count3++;
                printf("\n Product Deleted Successfully!");
                printf("\n------------------------------");
                break;
            }
        }
        if(count3==0){
            printf("\n\n Product Not Found!");
        }
        printf("\n\n Delete Another Product [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
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