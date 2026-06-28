#include <stdio.h>
#include <string.h>
int main(){

    int menu=0,mid_choice1=0,mid_choice2=0,mid_choice3=0,n=0,search=0,updates=0,cancels=0,ticket_id[500],age[500],ticket_price[500];
    char passenger_name[500][30],source[500][30],destination[500][30],seat_no[500][10];
    start:
    printf("\n\n=========================================\n         TICKET BOOKING SYSTEM\n=========================================\n\n Book Ticket [1]\n View All Bookings [2]\n Search Booking [3]\n Update Booking [4]\n Cancel Ticket [5]\n Exit [6]\n\n Enter Choice : ");
    scanf("%d",&menu);
    getchar();

    if(menu==1){
        book_ticket:
        printf("\n\n----------- BOOK TICKET -----------");
        printf("\n\nTicket ID      : ");
        scanf("%d",&ticket_id[n]);
        getchar();
        printf("Passenger Name : ");
        fgets(passenger_name[n],sizeof(passenger_name[n]),stdin);
        passenger_name[n][strcspn(passenger_name[n],"\n")]='\0';
        printf("Age            : ");
        scanf("%d",&age[n]);
        getchar();
        printf("Source         : ");
        fgets(source[n],sizeof(source[n]),stdin);
        source[n][strcspn(source[n],"\n")]='\0';
        printf("Destination    : ");
        fgets(destination[n],sizeof(destination[n]),stdin);
        destination[n][strcspn(destination[n],"\n")]='\0';
        printf("Seat Number    : ");
        fgets(seat_no[n],sizeof(seat_no[n]),stdin);
        seat_no[n][strcspn(seat_no[n],"\n")]='\0';
        printf("Ticket Price   : ");
        scanf("%d",&ticket_price[n]);
        n++;
        printf("\n-----------------------------------");
        printf("\n Ticket Booked Successfully!");
        printf("\n-----------------------------------");
        printf("\n\n Book Another Ticket [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
        scanf("%d",&mid_choice1);
        if(mid_choice1==1){
            goto book_ticket;
        }
        else if(mid_choice1==2){
            goto start;
        }
        else{
            goto exit;
        }
    }

    else if(menu==2){
        printf("\n\n=========================================\n         BOOKING DETAILS\n=========================================");
        for(int i=0;i<n;i++){
            printf("\n\nTicket ID      : %d\nPassenger Name : %s\nAge            : %d\nSource         : %s\nDestination    : %s\nSeat Number    : %s\nTicket Price   : Rs.%d",ticket_id[i],passenger_name[i],age[i],source[i],destination[i],seat_no[i],ticket_price[i]);
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
        printf("\n\n----------- SEARCH BOOKING -----------\n\nEnter Ticket ID : ");
        scanf("%d",&search);
        int count1=0;
        for(int i=0;i<n;i++){
            if(ticket_id[i]==search){
                printf("\n\n Booking Found!\n\nTicket ID      : %d\nPassenger Name : %s\nAge            : %d\nSource         : %s\nDestination    : %s\nSeat Number    : %s\nTicket Price   : Rs.%d",ticket_id[i],passenger_name[i],age[i],source[i],destination[i],seat_no[i],ticket_price[i]);
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
        printf("\n\n----------- UPDATE BOOKING -----------\n\nEnter Ticket ID : ");
        scanf("%d",&updates);
        int update=0,count2=0;
        printf("\n\n Passenger Name [1]\n Age [2]\n Source [3]\n Destination [4]\n Seat Number [5]\n Ticket Price [6]\n\n Enter Choice : ");
        scanf("%d",&update);
        for(int i=0;i<n;i++){
            if(ticket_id[i]==updates){
                if(update==1){
                    getchar();
                    char new_name[30];
                    printf("\n\n Enter New Passenger Name : ");
                    fgets(new_name,sizeof(new_name),stdin);
                    new_name[strcspn(new_name,"\n")]='\0';
                    strcpy(passenger_name[i],new_name);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if(update==2){
                    int new_age;
                    printf("\n\n Enter New Age : ");
                    scanf("%d",&new_age);
                    age[i]=new_age;
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if(update==3){
                    getchar();
                    char new_source[30];
                    printf("\n\n Enter New Source : ");
                    fgets(new_source,sizeof(new_source),stdin);
                    new_source[strcspn(new_source,"\n")]='\0';
                    strcpy(source[i],new_source);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if(update==4){
                    getchar();
                    char new_dest[30];
                    printf("\n\n Enter New Destination : ");
                    fgets(new_dest,sizeof(new_dest),stdin);
                    new_dest[strcspn(new_dest,"\n")]='\0';
                    strcpy(destination[i],new_dest);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else if(update==5){
                    getchar();
                    char new_seat[10];
                    printf("\n\n Enter New Seat Number : ");
                    fgets(new_seat,sizeof(new_seat),stdin);
                    new_seat[strcspn(new_seat,"\n")]='\0';
                    strcpy(seat_no[i],new_seat);
                    printf("New Data Entered Successfully!");
                    printf("\n------------------------------");
                    count2++;
                    break;
                }
                else{
                    int new_price;
                    printf("\n\n Enter New Ticket Price : ");
                    scanf("%d",&new_price);
                    ticket_price[i]=new_price;
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
        cancel_again:
        printf("\n\n----------- CANCEL TICKET -----------");
        printf("\n\nEnter Ticket ID : ");
        scanf("%d",&cancels);
        int count3=0;
        for(int i=0;i<n;i++){
            if(ticket_id[i]==cancels){
                for(int j=i;j<n-1;j++){
                    ticket_id[j]=ticket_id[j+1];
                    strcpy(passenger_name[j],passenger_name[j+1]);
                    age[j]=age[j+1];
                    strcpy(source[j],source[j+1]);
                    strcpy(destination[j],destination[j+1]);
                    strcpy(seat_no[j],seat_no[j+1]);
                    ticket_price[j]=ticket_price[j+1];
                }
                n--;
                count3++;
                printf("\n Ticket Cancelled Successfully!");
                printf("\n------------------------------");
                break;
            }
        }
        if(count3==0){
            printf("\n\n Booking Not Found!");
        }
        printf("\n\n Cancel Another Ticket [1]\n For Menu [2]\n For Exit [3]\n\n Enter Choice : ");
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