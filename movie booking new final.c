#include <stdio.h>
void displayplace(char places[10][25]);
void selectplace();
void displaytheatre(int Number);
void selectTheater_karur();
void ajantha();
void thinnapa();
void kalaiarangam();
void select_karur_slot();
void selectTheater_namakkal();
void select_namakkal_slot();
/*void ks_cineplex();
void salaar_booking();
void sabanayagan_booking();
void 3_booking();
void lmr_cinemas();
void mgm_theatres();*/
void displayplace(char places[10][25]) {
    printf("==========WELCOME===================\n");
    printf("==========PLACES AVAILABLE==========\n");
    for (int i = 0; i < 2; i++) {
        printf("%s\n", places[i]);
    }
    printf("======================================================\nSelect a Number to select place : ");
    selectplace();
}

void selectplace() {
    int Number = 0;
    scanf("%d", &Number);
    displaytheatre(Number);
}

void displaytheatre(int Number) {
    char places[10][25] = {"1.Karur", "2.Namakkal","Velur"};
    char karur_theatre[3][25] = {"1.AjanthaandEllora", "2.Thinnapa", "3.Kalaiarangam"};
    char namakkal_theatre[3][25] = {"1.KS cineplex","2.LMR cinemas"};
    int target = Number;
    if (target == 1) {
        printf("THEATRES AVAILABLE IN KARUR\n");
        for (int i = 0; i < 3; i++) {
            printf("%s \n", karur_theatre[i]);
        }
        printf("======================================================\n");
        selectTheater_karur();
    }
    else if(target == 2){
        printf("THEATRES AVAILABLE IN namakkal\n");
        for (int i = 0; i < 3; i++) {
            printf("%s \n", namakkal_theatre[i]);
        }
        printf("======================================================\n");
        selectTheater_namakkal();
    }
}
/////////////////////////////////////////////////////////////////////namakkal
void selectTheater_namakkal() {
    int theatre_num;
    printf("Select theatre : ");
    scanf("%d", &theatre_num);
    if (theatre_num == 1) {
        ks_cineplex();
    }
     else if (theatre_num == 2) {
        lmr_cinemas();
    }
}
void ks_cineplex() {
    int movie_choice;
    char ks_movies[3][25] = {"1.Salaar", "2.Sabanayagan", "3.3"};
    for (int i = 0; i < 3; i++) {
        printf("%s \n", ks_movies[i]);
    }
    printf("======================================================\n");
    printf("Select movie : ");
    scanf("%d", &movie_choice);
    if (movie_choice == 1) {
        printf("Movie available in Screen 1 at 8:00a.m to 11:00a.m\n");
        printf("Movie available in Screen 2 at 02:00p.m to 05:00p.m\n");
        printf("Movie available in Screen 3 at 06:00p.m to 09:00p.m\n");
    }
    if (movie_choice == 2) {
        printf("Movie available in Screen 1 at 02:00p.m to 05:00p.m\n");
        printf("Movie available in Screen 2 at 8:00a.m to 11:00a.m\n");
        printf("Movie available in Screen 3 at 06:00p.m to 09:00p.m\n");
    }
    if (movie_choice == 3) {
        printf("Movie available in Screen 1 at 06:00p.m to 09:00p.m\n");
        printf("Movie available in Screen 2 at 02:00p.m to 05:00p.m\n");
        printf("Movie available in Screen 3 at 8:00a.m to 11:00a.m\n");
    }
    printf("======================================================\n");
    select_namakkal_slot();
}
void lmr_cinemas() {
    int movie_choice;
    char lmr_movies[3][25] = {"1.ruthran", "2.hi nana", "3.good night"};
    for (int i = 0; i < 3; i++) {
        printf("%s \n", lmr_movies[i]);
    }
    printf("======================================================\n");
    printf("Select movie : ");
    scanf("%d", &movie_choice);
    if (movie_choice == 1) {
        printf("Movie available in Screen 1 at 8:00a.m to 11:00a.m\n");
        printf("Movie available in Screen 2 at 02:00p.m to 05:00p.m\n");
        printf("Movie available in Screen 3 at 06:00p.m to 09:00p.m\n");
    }
    if (movie_choice == 2) {
        printf("Movie available in Screen 1 at 02:00p.m to 05:00p.m\n");
        printf("Movie available in Screen 2 at 8:00a.m to 11:00a.m\n");
        printf("Movie available in Screen 3 at 06:00p.m to 09:00p.m\n");
    }
    if (movie_choice == 3) {
        printf("Movie available in Screen 1 at 06:00p.m to 09:00p.m\n");
        printf("Movie available in Screen 2 at 02:00p.m to 05:00p.m\n");
        printf("Movie available in Screen 3 at 8:00a.m to 11:00a.m\n");
    }
    printf("======================================================\n");
    select_namakkal_slot();
}
void select_namakkal_slot(){
    int namakkal_booked_slot;
    printf("Click 1 to book Screen-1\n");
    printf("Click 2 to book Screen-2\n");
    printf("Click 3 to book Screen-3\n");
    scanf("%d",&namakkal_booked_slot);
    if(namakkal_booked_slot == 1){
        salaar_screen1_booking();
    }
    else if(namakkal_booked_slot == 2){
        salaar_screen2_booking();
    }
}

/////////////////////////////////////////////////////////////////////namakkal
//////////////////////////////////////////////////////////////////// karur
void selectTheater_karur() {
    int theatre_num;
    printf("Select theatre : ");
    scanf("%d", &theatre_num);
    if (theatre_num == 1) {
        ajantha();
    } else if (theatre_num == 2) {
        thinnapa();
    } else {
        kalaiarangam();
    }
}

void ajantha() {
    int movie_choice;
    char ajantha_movies[3][25] = {"1.Salaar", "2.Sabanayagan", "3.joe"};
    for (int i = 0; i < 3; i++) {
        printf("%s \n", ajantha_movies[i]);
    }
    printf("======================================================\n");
    printf("Select movie : ");
    scanf("%d", &movie_choice);
    if (movie_choice == 1) {
        printf("Movie available in Screen 1 at 8:00a.m to 11:00a.m\n");
        printf("Movie available in Screen 2 at 02:00p.m to 05:00p.m\n");
        printf("Movie available in Screen 3 at 06:00p.m to 09:00p.m\n");
    }
    if (movie_choice == 2) {
        printf("Movie available in Screen 1 at 02:00p.m to 05:00p.m\n");
        printf("Movie available in Screen 2 at 8:00a.m to 11:00a.m\n");
        printf("Movie available in Screen 3 at 06:00p.m to 09:00p.m\n");
    }
    if (movie_choice == 3) {
        printf("Movie available in Screen 1 at 06:00p.m to 09:00p.m\n");
        printf("Movie available in Screen 2 at 02:00p.m to 05:00p.m\n");
        printf("Movie available in Screen 3 at 8:00a.m to 11:00a.m\n");
    }
    printf("======================================================\n");
    select_karur_slot();
}
void select_karur_slot(){
    int karur_booked_slot;
    printf("Click 1 to book Screen-1\n");
    printf("Click 2 to book Screen-2\n");
    printf("Click 3 to book Screen-3\n");
    scanf("%d",&karur_booked_slot);
    if(karur_booked_slot == 1){
        salaar_screen1_booking();
    }
    else if(karur_booked_slot == 2){
        salaar_screen2_booking();
    }
    else if(karur_booked_slot == 3){
        salaar_screen3_booking();
    }
}
struct salaar_ticket { //screen 1
    char name[500];
    char gender[100];
    long long phone;
};
typedef struct salaar_ticket t;
void salaar_screen1_booking(){
    t t1[100];
    int count=1;
    int seat_no[100];
    for(int i=1;i<=100;i++)
    {
        seat_no[i-1] = i;
    }
    int c=0,alpha=74;
    for(int i=10;i>=1;i--)
    {   printf("Row %c: ",alpha);
        alpha--;
        for(int j=0 ; j<10 ; j++){
             if(seat_no[c]%5 == 0){
                printf("%3d   ",seat_no[c]);
             }
             else{
                printf("%3d ",seat_no[c]);
             }
             c++;
        }printf("\n");
    }
    int no_of_visitors;
    printf("Enter the no of Visitors: ");
    scanf("%d", &no_of_visitors);
    int booking_seat_no,valid=0, check=no_of_visitors;
    for(int i=0;i<no_of_visitors;i++)
    while(valid <no_of_visitors)
    {
        printf("Choose Seat No: ");
        scanf("%d", &booking_seat_no);
            if(seat_no[booking_seat_no -1]!=0){
                printf("Seat successfully Booked\n");
                seat_no[booking_seat_no-1]=0;
                valid++;
            }
            else {
                printf("Seat not available..Book another seat\n");
            }
    }
    printf("\t==========TICKET BOOKING=========\n");

    for (int i = 0; i < no_of_visitors; i++) {
        printf("Visitor: %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", t1[i].name);

        printf("Gender [M/F]: ");
        scanf("%s", t1[i].gender);

        printf("Phone number: ");
        scanf("%lld", &t1[i].phone);
    } salaar_seat_availability(seat_no);

}
void salaar_seat_availability(int seat_no[100]){
    int p=0,alph=74,index=0;
    int seat_fee=0,double_amount=0;
    for(int i=10;i>=1;i--)
    {
        printf("Row %c: ",alph);
        alph--;
        for(int j=0 ; j<10 ; j++){
             if(seat_no[p]%5 == 0 ||(seat_no[p]==0 && p %5==0)){
                printf("%3d   ",seat_no[p]);
             }
             else{
                printf("%3d ",seat_no[p]);
             }
             if( index+1 >=51 && index+1 <=100 && seat_no[p] == 0){
                seat_fee++;
             }
             else if(index+1 >=1 && index+1 <=50  && seat_no[p] == 0){
                double_amount++;
             }
             p++;
             index++;
        }printf("\n");}
    booking_fee(seat_fee,double_amount);
}
//*************************
struct salaar_ticket_screen2 {
    char name[500];
    char gender[100];
    long long phone;
};
typedef struct salaar_ticket_screen2 s2;
void salaar_screen2_booking(){
    s2 t1[100];
    int count=1;
    int seat_no[100];
    for(int i=1;i<=100;i++)
    {
        seat_no[i-1] = i;
    }
    int c=0,alpha=74;
    for(int i=10;i>=1;i--)
    {   printf("Row %c: ",alpha);
        alpha--;
        for(int j=0 ; j<10 ; j++){
             if(seat_no[c]%5 == 0){
                printf("%3d   ",seat_no[c]);
             }
             else{
                printf("%3d ",seat_no[c]);
             }
             c++;
        }printf("\n");
    }
    int no_of_visitors;
    printf("Enter the no of Visitors: ");
    scanf("%d", &no_of_visitors);
    int booking_seat_no,valid=0, check=no_of_visitors;
    for(int i=0;i<no_of_visitors;i++)
    while(valid <no_of_visitors)
    {
        printf("Choose Seat No: ");
        scanf("%d", &booking_seat_no);
            if(seat_no[booking_seat_no -1]!=0){
                printf("Seat successfully Booked\n");
                seat_no[booking_seat_no-1]=0;
                valid++;
            }
            else {
                printf("Seat not available..Book another seat\n");
            }
    }for (int i = 0; i < no_of_visitors; i++) {
        printf("Visitor: %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", t1[i].name);

        printf("Gender [M/F]: ");
        scanf("%s", t1[i].gender);

        printf("Phone number: ");
        scanf("%lld", &t1[i].phone);
    }
    salaar2_seat_availability(seat_no);

}
void salaar2_seat_availability(int seat_no[100]){
    int seat_fee=0,double_amount=0,index=0;
    int p=0,alph=74;
    for(int i=10;i>=1;i--)
    {
        printf("Row %c: ",alph);
        alph--;
        for(int j=0 ; j<10 ; j++){
             if(seat_no[p]%5 == 0 ||(seat_no[p]==0 && p %5==0)){
                printf("%3d   ",seat_no[p]);
             }
             else{
                printf("%3d ",seat_no[p]);
             }
             if( index+1 >=51 && index+1 <=100 && seat_no[p] == 0){
                seat_fee++;
             }
             else if(index+1 >=1 && index+1 <=50  && seat_no[p] == 0){
                double_amount++;
             }
             p++;
             index++;
        }printf("\n");}
    booking_fee(seat_fee,double_amount);
}
//**************************
struct salaar_ticket_screen3 {
    char name[500];
    char gender[100];
    long long phone;
};
typedef struct salaar_ticket_screen3 s3;
void salaar_screen3_booking(){
    s3 t1[100];
    int count=1;
    int seat_no[100];
    for(int i=1;i<=100;i++)
    {
        seat_no[i-1] = i;
    }
    int c=0,alpha=74;
    for(int i=10;i>=1;i--)
    {   printf("Row %c: ",alpha);
        alpha--;
        for(int j=0 ; j<10 ; j++){
             if(seat_no[c]%5 == 0 ){
                printf("%3d   ",seat_no[c]);
             }
             else{
                printf("%3d ",seat_no[c]);
             }
             c++;
        }printf("\n");
    }
    int no_of_visitors;
    printf("Enter the no of Visitors: ");
    scanf("%d", &no_of_visitors);
    int booking_seat_no,valid=0, check=no_of_visitors;
    for(int i=0;i<no_of_visitors;i++)
    while(valid <no_of_visitors)
    {
        printf("Choose Seat No: ");
        scanf("%d", &booking_seat_no);
            if(seat_no[booking_seat_no -1]!=0){
                printf("Seat successfully Booked\n");
                seat_no[booking_seat_no-1]=0;
                valid++;
            }
            else {
                printf("Seat not available..Book another seat\n");
            }
    }for (int i = 0; i < no_of_visitors; i++) {
        printf("Visitor: %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", t1[i].name);

        printf("Gender [M/F]: ");
        scanf("%s", t1[i].gender);

        printf("Phone number: ");
        scanf("%lld", &t1[i].phone);
    }
    salaar3_seat_availability(seat_no);

}
void salaar3_seat_availability(int seat_no[100]){
    int seat_fee=0,double_amount=0,index=0;
    int p=0,alph=74;
    for(int i=10;i>=1;i--)
    {
        printf("Row %c: ",alph);
        alph--;
        for(int j=0 ; j<10 ; j++){
             if(seat_no[p]%5 == 0 ||(seat_no[p]==0 && p %5==0)){
                printf("%3d   ",seat_no[p]);
             }
             else{
                printf("%3d ",seat_no[p]);
             }
             if( index+1 >=51 && index+1 <=100 && seat_no[p] == 0){
                seat_fee++;
             }
             else if(index+1 >=1 && index+1 <=50  && seat_no[p] == 0){
                double_amount++;
             }
             p++;
             index++;
        }printf("\n");}
    booking_fee(seat_fee,double_amount);
}


void thinnapa() {
    int movie_choice;
    char thinnapa_movies[3][25] = {"1.Good Night", "2.Kushi", "3.Love today"};
    for (int i = 0; i < 3; i++) {
        printf("%s \n", thinnapa_movies[i]);
    }
    printf("======================================================\n");
    printf("Select movie : ");
    scanf("%d", &movie_choice);
    if (movie_choice == 1) {
        printf("Movie available in Screen 1 at 8:00a.m to 11:00a.m\n");
        printf("Movie available in Screen 2 at 02:00p.m to 05:00p.m\n");
        printf("Movie available in Screen 3 at 06:00p.m to 09:00p.m\n");
    }
    if (movie_choice == 2) {
        printf("Movie available in Screen 1 at 02:00p.m to 05:00p.m\n");
        printf("Movie available in Screen 2 at 8:00a.m to 11:00a.m\n");
        printf("Movie available in Screen 3 at 06:00p.m to 09:00p.m\n");
    }
    if (movie_choice == 3) {
        printf("Movie available in Screen 1 at 06:00p.m to 09:00p.m\n");
        printf("Movie available in Screen 2 at 02:00p.m to 05:00p.m\n");
        printf("Movie available in Screen 3 at 8:00a.m to 11:00a.m\n");
    }
    printf("======================================================\n");
    select_karur_slot1();
}
void select_karur_slot1(){
    int karur_booked_slot1;
    printf("Click 1 to book Screen-1\n");
    printf("Click 2 to book Screen-2\n");
    printf("Click 3 to book Screen-3\n");
    scanf("%d",&karur_booked_slot1);
    if(karur_booked_slot1 == 1){
        good_night_booking();
    }
    if(karur_booked_slot1==2)
    {
        kushi_booking();
    }
    if(karur_booked_slot1==3)
    {
        love_today_booking();
    }
}


struct good_night_ticket {
    char name[500];
    char gender[100];
    long long phone;
};
typedef struct good_night_ticket t2;
void good_night_booking(){
    t2 t3[100];
    int count=1;
    int seat_no[100];
    for(int i=1;i<=100;i++)
    {
        seat_no[i-1] = i;
    }
    int c=0,alpha=74;
    for(int i=10;i>=1;i--)
    {   printf("Row %c: ",alpha);
        alpha--;
        for(int j=0 ; j<10 ; j++){
             if(seat_no[c]%5 == 0){
                printf("%3d   ",seat_no[c]);
             }
             else{
                printf("%3d ",seat_no[c]);
             }
             c++;
        }printf("\n");
    }
    int no_of_visitors;
    printf("Enter the no of Visitors: ");
    scanf("%d", &no_of_visitors);
    int booking_seat_no,valid=0, check=no_of_visitors;
    for(int i=0;i<no_of_visitors;i++)
    while(valid <no_of_visitors)
    {
        printf("Choose Seat No: ");
        scanf("%d", &booking_seat_no);
            if(seat_no[booking_seat_no -1]!=0){
                printf("Seat Booked\n");
                seat_no[booking_seat_no-1]=0;
                valid++;
            }
            else {
                printf("Seat not available..Book another seat\n");
            }
    }for (int i = 0; i < no_of_visitors; i++) {
        printf("Visitor: %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", t3[i].name);

        printf("Gender [M/F]: ");
        scanf("%s", t3[i].gender);

        printf("Phone number: ");
        scanf("%lld", &t3[i].phone);
    }
    good_night_seat_availability(seat_no);

}
void good_night_seat_availability(int seat_no[100]){
    int seat_fee=0,double_amount=0,index=0;
    int p=0,alph=74;
    for(int i=10;i>=1;i--)
    {
        printf("Row %c: ",alph);
        alph--;
        for(int j=0 ; j<10 ; j++){
             if(seat_no[p]%5 == 0 ||(seat_no[p]==0 && p %5==0)){
                printf("%3d   ",seat_no[p]);
             }
             else{
                printf("%3d ",seat_no[p]);
             }
             if( index+1 >=51 && index+1 <=100 && seat_no[p] == 0){
                seat_fee++;
             }
             else if(index+1 >=1 && index+1 <=50  && seat_no[p] == 0){
                double_amount++;
             }
             p++;
             index++;
        }printf("\n");}
    booking_fee(seat_fee,double_amount);
}


struct kushi_ticket {
    char name[500];
    char gender[100];
    long long phone;
};
typedef struct kushi_ticket t4;
void kushi_booking(){
    t4 t5[100];
    int count=1;
    int seat_no[100];
    for(int i=1;i<=100;i++)
    {
        seat_no[i-1] = i;
    }
    int c=0,alpha=74;
    for(int i=1;i<=10;i++)
    {   printf("Row %c: ",alpha);
        alpha--;
        for(int j=0 ; j<10 ; j++){
             if(seat_no[c]%5 == 0){
                printf("%d   ",seat_no[c]);
             }
             else{
                printf("%d ",seat_no[c]);
             }
             c++;
        }printf("\n");
    }
    int no_of_visitors;
    printf("Enter the no of Visitors: ");
    scanf("%d", &no_of_visitors);
    int booking_seat_no,valid=0, check=no_of_visitors;
    for(int i=0;i<no_of_visitors;i++)
    while(valid <no_of_visitors)
    {
        printf("Choose Seat No: ");
        scanf("%d", &booking_seat_no);
            if(seat_no[booking_seat_no -1]!=0){
                printf("Seat Booked\n");
                seat_no[booking_seat_no-1]=0;
                valid++;
            }
            else {
                printf("Seat not available..Book another seat\n");
            }
    }for (int i = 0; i < no_of_visitors; i++) {
        printf("Visitor: %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", t5[i].name);

        printf("Gender [M/F]: ");
        scanf("%s", t5[i].gender);

        printf("Phone number: ");
        scanf("%lld", &t5[i].phone);
    }
    kushi_seat_availability(seat_no);

}
void kushi_seat_availability(int seat_no[100]){
    int seat_fee=0,double_amount=0,index=0;
    int p=0,alph=74;
    for(int i=10;i>=1;i--)
    {
        printf("Row %c: ",alph);
        alph--;
        for(int j=0 ; j<10 ; j++){
             if(seat_no[p]%5 == 0 ||(seat_no[p]==0 && p %5==0)){
                printf("%3d   ",seat_no[p]);
             }
             else{
                printf("%3d ",seat_no[p]);
             }
             if( index+1 >=51 && index+1 <=100 && seat_no[p] == 0){
                seat_fee++;
             }
             else if(index+1 >=1 && index+1 <=50  && seat_no[p] == 0){
                double_amount++;
             }
             p++;
             index++;
        }printf("\n");}
    booking_fee(seat_fee,double_amount);
}


struct love_today_ticket {
    char name[500];
    char gender[100];
    long long phone;
};
typedef struct love_today_ticket t6;
void love_today_booking(){
    t6 t7[100];
    int count=1;
    int seat_no[100];

    for (int i = 1; i <= 100; i++) {
        seat_no[i - 1] = i;
    }

    int c = 0, alpha = 74;

    for (int i = 10; i >= 1; i--) {
        printf("Row %c: ", alpha);
        alpha--;

        for (int j = 0; j < 10; j++) {
            if (seat_no[c] % 5 == 0) {
                printf("%3d   ", seat_no[c]);
            } else {
                printf("%3d ", seat_no[c]);
            }
            c++;
        }
        printf("\n");
    }
    int no_of_visitors;
    printf("Enter the no of Visitors: ");
    scanf("%d", &no_of_visitors);
    int booking_seat_no,valid=0, check=no_of_visitors;
    for(int i=0;i<no_of_visitors;i++)
    while(valid <no_of_visitors)
    {
        printf("Choose Seat No: ");
        scanf("%d", &booking_seat_no);
            if(seat_no[booking_seat_no -1]!=0){
                printf("Seat Booked\n");
                seat_no[booking_seat_no-1]=0;
                valid++;
            }
            else {
                printf("Seat not available..Book another seat\n");
            }
    }for (int i = 0; i < no_of_visitors; i++) {
        printf("Visitor: %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", t7[i].name);

        printf("Gender [M/F]: ");
        scanf("%s", t7[i].gender);

        printf("Phone number: ");
        scanf("%lld", &t7[i].phone);
    }
    love_today_seat_availability(seat_no);

}
void love_today_seat_availability(int seat_no[100]){
    int seat_fee=0,double_amount=0,index=0;
    int p=0,alph=74;
    for(int i=10;i>=1;i--)
    {
        printf("Row %c: ",alph);
        alph--;
        for(int j=0 ; j<10 ; j++){
             if(seat_no[p]%5 == 0 ||(seat_no[p]==0 && p %5==0)){
                printf("%3d   ",seat_no[p]);
             }
             else{
                printf("%3d ",seat_no[p]);
             }
             if( index+1 >=51 && index+1 <=100 && seat_no[p] == 0){
                seat_fee++;
             }
             else if(index+1 >=1 && index+1 <=50  && seat_no[p] == 0){
                double_amount++;
             }
             p++;
             index++;
        }printf("\n");}
    booking_fee(seat_fee,double_amount);
}


void kalaiarangam() {
    int movie_choice;
    char kalaiarangam_movies[3][25] = {"1.Salaar", "2.Sabanayagan", "3.joe"};
    for (int i = 0; i < 3; i++) {
        printf("%s \n", kalaiarangam_movies[i]);
    }
    printf("======================================================\n");
    printf("Select movie : ");
    scanf("%d", &movie_choice);
    if (movie_choice == 1) {
        printf("Movie available in Screen 1 at 8:00a.m to 11:00a.m\n");
        printf("Movie available in Screen 2 at 02:00p.m to 05:00p.m\n");
        printf("Movie available in Screen 3 at 06:00p.m to 09:00p.m\n");
    }
    if (movie_choice == 2) {
        printf("Movie available in Screen 1 at 02:00p.m to 05:00p.m\n");
        printf("Movie available in Screen 2 at 8:00a.m to 11:00a.m\n");
        printf("Movie available in Screen 3 at 06:00p.m to 09:00p.m\n");
    }
    if (movie_choice == 3) {
        printf("Movie available in Screen 1 at 06:00p.m to 09:00p.m\n");
        printf("Movie available in Screen 2 at 02:00p.m to 05:00p.m\n");
        printf("Movie available in Screen 3 at 8:00a.m to 11:00a.m\n");
    }
    printf("======================================================\n");
    select_karur_slot();
}
////////////////////////////////////////////////////////////karur
void booking_fee(int seat_fee,int double_amount){
    int first_class=500,second_class=250;
    if(double_amount > 0){
         printf("Seat Booked at first class: %d\n",double_amount);
         printf("Fees per seat : 500\n");
    }
    if(seat_fee > 0){
        printf("Seat Booked at second class : %d\n",seat_fee);

        printf("Fees per seat : 250\n");
    }

    printf("Total No. of tickets : %d\n",seat_fee + double_amount);
    printf("Total amount : %d\n",(second_class*seat_fee) + (first_class *double_amount ));
    printf("Book more? 1 to continue and 0 to exit");
    int choice;
    scanf("%d",&choice);
    char places[10][25] = {"1.Karur", "2.Namakkal","Velur"};
    if(choice == 1 || choice == 1){
      displayplace(places);
    }
    else{
        return 0;
    }
}


int main() {
    char places[10][25] = {"1.Karur", "2.Namakkal","Velur"};
    displayplace(places);
}
