#include <stdio.h>
#include <string.h>
int main(){

    int menu=0,mid_choice1=0,mid_choice2=0,mid_choice3=0,n=0,search=0,updates=0,cancels=0,booking_id[500],age[500],room_number[500],days[500];
    char customer_name[500][30],mobile[500][15],room_type[500][20],status[500][20];
    float room_rent[500],total_bill[500];
    start:
    printf("\n\n=========================================\n       HOTEL ROOM BOOKING SYSTEM\n=========================================\n\n Book Room [1]\n View All Bookings [2]\n Search Booking [3]\n Update Booking [4]\n Check In [5]\n Check Out [6]\n Cancel Booking [7]\n Exit [8]\n\n Enter Choice : ");
    scanf("%d",&menu);
    getchar();

    if(menu==1){
        book_room:
        printf("\n\n----------- BOOK ROOM -----------");
        printf("\n\nBooking ID      : ");
        scanf("%d",&booking_id[n]);
        getchar();
        printf("Customer Name   : ");
        fgets(customer_name[n],sizeof(customer_name[n]),stdin);
        customer_name[n][strcspn(customer_name[n],"\n")]='\0';
        printf("Age             : ");
        scanf("%d",&age[n]);
        getchar();
        printf("Mobile Number   : ");
        fgets(mobile[n],sizeof(mobile[n]),stdin);
        mobile[n][strcspn(mobile[n],"\n")]='\0';
        printf("Room Number     : ");
        scanf("%d",&room_number[n]);
        getchar();
        printf("Room Type       : ");
        fgets(room_type[n],sizeof(room_type[n]),stdin);
        room_type[n][strcspn(room_type[n],"\n")]='\0';
        printf("Number of Days  : ");
        scanf("%d",&days[n]);
        printf("Room Rent/Day   : ");
        scanf("%f",&room_rent[n]);
        total_bill[n]=days[n]*room_rent[n];
        strcpy(status[n],"Booked");
        n++;
        printf("\n---------------------------------");
        printf("\n Booking Successful!");
        printf("\n---------------------------------");
        printf("\n\n Book Another Room [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice1);
        if(mid_choice1==1){
            goto book_room;
        }
        else if(mid_choice1==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==2){
        printf("\n\n=========================================\n          BOOKING DETAILS\n=========================================");
        for(int i=0;i<n;i++){
            printf("\n\nBooking ID      : %d\nCustomer Name   : %s\nAge             : %d\nMobile Number   : %s\nRoom Number     : %d\nRoom Type       : %s\nDays            : %d\nRoom Rent/Day   : Rs.%.0f\nTotal Bill      : Rs.%.0f\nStatus          : %s",booking_id[i],customer_name[i],age[i],mobile[i],room_number[i],room_type[i],days[i],room_rent[i],total_bill[i],status[i]);
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
        printf("\n\n----------- SEARCH BOOKING -----------\n\nEnter Booking ID : ");
        scanf("%d",&search);
        int count1=0;
        for(int i=0;i<n;i++){
            if(booking_id[i]==search){
                printf("\n\n Booking Found!\n\nBooking ID      : %d\nCustomer Name   : %s\nAge             : %d\nMobile Number   : %s\nRoom Number     : %d\nRoom Type       : %s\nDays            : %d\nRoom Rent/Day   : Rs.%.0f\nTotal Bill      : Rs.%.0f\nStatus          : %s",booking_id[i],customer_name[i],age[i],mobile[i],room_number[i],room_type[i],days[i],room_rent[i],total_bill[i],status[i]);
                printf("\n\n-----------------------------------------");
                count1++;
                break;
            }
        }
        if(count1==0){
            printf("\n\n Booking Not Found!");
        }
        printf("\n\n Search Another Booking [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
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
        printf("\n\n----------- UPDATE BOOKING -----------\n\nEnter Booking ID : ");
        scanf("%d",&updates);
        int update=0,count2=0;
        printf("\n\n Customer Name [1]\n Mobile Number [2]\n Room Number [3]\n Room Type [4]\n Number of Days [5]\n Room Rent/Day [6]\n\n Enter Choice : ");
        scanf("%d",&update);
        for(int i=0;i<n;i++){
            if(booking_id[i]==updates){
                if(update==1){
                    getchar();
                    char new_name[30];
                    printf("\n\n Enter New Customer Name : ");
                    fgets(new_name,sizeof(new_name),stdin);
                    new_name[strcspn(new_name,"\n")]='\0';
                    strcpy(customer_name[i],new_name);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if(update==2){
                    getchar();
                    char new_mobile[15];
                    printf("\n\n Enter New Mobile Number : ");
                    fgets(new_mobile,sizeof(new_mobile),stdin);
                    new_mobile[strcspn(new_mobile,"\n")]='\0';
                    strcpy(mobile[i],new_mobile);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if(update==3){
                    int new_room;
                    printf("\n\n Enter New Room Number : ");
                    scanf("%d",&new_room);
                    room_number[i]=new_room;
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if(update==4){
                    getchar();
                    char new_type[20];
                    printf("\n\n Enter New Room Type : ");
                    fgets(new_type,sizeof(new_type),stdin);
                    new_type[strcspn(new_type,"\n")]='\0';
                    strcpy(room_type[i],new_type);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if(update==5){
                    int new_days;
                    printf("\n\n Enter New Number of Days : ");
                    scanf("%d",&new_days);
                    days[i]=new_days;
                    total_bill[i]=days[i]*room_rent[i];
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else{
                    float new_rent;
                    printf("\n\n Enter New Room Rent/Day : ");
                    scanf("%f",&new_rent);
                    room_rent[i]=new_rent;
                    total_bill[i]=days[i]*room_rent[i];
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
        printf("\n\n Update Another Booking [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
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
        checkin_again:
        printf("\n\n----------- CHECK IN -----------\n\nEnter Booking ID : ");
        scanf("%d",&search);
        int count_10=0;
        for(int i=0;i<n;i++){
            if(booking_id[i]==search){
                strcpy(status[i],"Checked In");
                printf("\n Check In Successful!\n Status : Checked In");
                count_10++;
                break;
            }
        }
        if(count_10==0){
            printf("\n Booking Not Found!");
        }
        printf("\n\n Check In Another [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice3);
        if(mid_choice3==1){
            goto checkin_again;
        }
        else if(mid_choice3==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==6){
        checkout_again:
        printf("\n\n----------- CHECK OUT -----------\n\nEnter Booking ID : ");
        scanf("%d",&search);
        int count_12=0;
        for(int i=0;i<n;i++){
            if(booking_id[i]==search){
                printf("\n Total Bill : Rs.%.0f",total_bill[i]);
                strcpy(status[i],"Checked Out");
                printf("\n\n Check Out Successful!\n Status : Checked Out");
                count_12++;
                break;
            }
        }
        if(count_12==0){
            printf("\n Booking Not Found!");
        }
        printf("\n\n Check Out Another [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice3);
        if(mid_choice3==1){
            goto checkout_again;
        }
        else if(mid_choice3==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==7){
        cancel_again:
        printf("\n\n----------- CANCEL BOOKING -----------");
        printf("\n\nEnter Booking ID : ");
        scanf("%d",&cancels);
        int count3=0;
        for(int i=0;i<n;i++){
            if(booking_id[i]==cancels){
                for(int j=i;j<n-1;j++){
                    booking_id[j]=booking_id[j+1];
                    strcpy(customer_name[j],customer_name[j+1]);
                    age[j]=age[j+1];
                    strcpy(mobile[j],mobile[j+1]);
                    room_number[j]=room_number[j+1];
                    strcpy(room_type[j],room_type[j+1]);
                    days[j]=days[j+1];
                    room_rent[j]=room_rent[j+1];
                    total_bill[j]=total_bill[j+1];
                    strcpy(status[j],status[j+1]);
                }
                n--;
                count3++;
                printf("\n Booking Cancelled Successfully!");
                printf("\n------------------------------");
                break;
            }
        }
        if(count3==0){
            printf("\n\n Booking Not Found!");
        }
        printf("\n\n Cancel Another Booking [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice3);
        if(mid_choice3==1){
            goto cancel_again;
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