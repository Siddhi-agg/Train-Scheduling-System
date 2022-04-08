#include<stdio.h>
#include<string.h>
struct TRAIN_INFO
{
    int train_no;
    char train_name[100];
     char dep_time[100];
    char arr_time[100];
   
    char start_stat[100];
    char end_stat[100];
};
int main(){
    struct TRAIN_INFO x[100];
    x[0].train_no=1001;
    x[1].train_no=1002;
    x[2].train_no=1003;
    x[3].train_no=1004;
    x[4].train_no=1005;
     strcpy(x[0].train_name,"Malwa");
     strcpy(x[1].train_name,"Intercity");
     strcpy(x[2].train_name,"Indore-Bhopal");
     strcpy(x[3].train_name,"Ujjain-jabalpur");
     strcpy(x[4].train_name,"Bhopal-Indore");
     strcpy(x[0].dep_time,"12:00");
     strcpy(x[1].dep_time,"14:00");
     strcpy(x[2].dep_time,"08:00");
     strcpy(x[3].dep_time,"16:00");
     strcpy(x[4].dep_time,"20:00");
     strcpy(x[0].arr_time,"11:00");
     strcpy(x[1].arr_time,"13:00");
     strcpy(x[2].arr_time,"07:00");
     strcpy(x[3].arr_time,"15:00");
     strcpy(x[4].arr_time,"19:00");
     strcpy(x[0].start_stat,"Bhopal");
     strcpy(x[1].start_stat,"Indore");
     strcpy(x[2].start_stat,"Indore");
     strcpy(x[3].start_stat,"Ujjain");
     strcpy(x[4].start_stat,"Bhopal");
     strcpy(x[0].end_stat,"Indore");
     strcpy(x[1].end_stat,"Bhopal");
     strcpy(x[2].end_stat,"Bhopal");
     strcpy(x[3].end_stat,"jabalpur");
     strcpy(x[4].end_stat,"Indore");
     int choice;
     int i=0;
     printf("Train No.           Train Name      Departure Time       Arrival Time         Start Station         End Station\n");
     for(i=0;i<5;i++)
     printf("%5d %20s %20s %20s %20s %20s\n",x[i].train_no,x[i].train_name,x[i].dep_time,x[i].arr_time,x[i].start_stat,x[i].end_stat);
     printf("\n");
     printf("1->List all the trains that depart from a particular station at particular point\n");
     printf("2->List all the trains that depart from a particular station within next one hour of a given time\n");
     printf("3->List all the trains between a pair of  start station and end station.\n");
     printf("4->Exit");
     while(1){
         printf("\nEnter the choice: ");
         scanf("%d",&choice);
         if(choice==1){
             printf("Enter The station Name : ");
             char str[100];
             scanf("%s",str);
     printf("Train No.           Train Name      Departure Time       Arrival Time         Start Station         End Station\n");

             for(int j=0;j<i-1;j++){
                 if(strcmp(str,x[j].start_stat)==0){
     printf("%5d %20s %20s %20s %20s %20s\n",x[j].train_no,x[j].train_name,x[j].dep_time,x[j].arr_time,x[j].start_stat,x[j].end_stat);


                 }
             }
         }
         
         if(choice==2){
             printf("Enter The Station Name: ");
              char str[100];
             scanf("%s",str);
             char c[5];
             printf("Enter The Time :");
             scanf("%s",c);
              printf("Train No.           Train Name      Departure Time       Arrival Time         Start Station         End Station\n");

             for(int j=0;j<i-1;j++){
                 if(strcmp(str,x[j].start_stat)==0  && (x[j].dep_time[1]-c[1]<=1 && x[j].dep_time[1]-c[1]>=0 )){
     printf("%5d %20s %20s %20s %20s %20s\n",x[j].train_no,x[j].train_name,x[j].dep_time,x[j].arr_time,x[j].start_stat,x[j].end_stat);


                 }
             }

         }
         if(choice==3){
              printf("Enter The Start Station Name: ");
              char str1[100];
             scanf("%s",str1); printf("Enter The End Station Name: ");
              char str2[100];
             scanf("%s",str2);
              printf("Train No.           Train Name      Departure Time       Arrival Time         Start Station         End Station\n");

             for(int j=0;j<i-1;j++){
                 if(strcmp(str1,x[j].start_stat)==0  && strcmp(str2,x[j].end_stat)==0){
     printf("%5d %20s %20s %20s %20s %20s\n",x[j].train_no,x[j].train_name,x[j].dep_time,x[j].arr_time,x[j].start_stat,x[j].end_stat);


                 }
             }
             
         }
         if(choice==4){
             return 0;
         }
     }   

}