#include <stdio.h>
int main() {
float expense, s_total=0, m_total=0, l_total=0, total=0;
int s_count = 0,m_count=0,l_count=0,total_count=0;
do { printf("Enter expense (0 to stop):\n");
scanf("%f",&expense);
if (expense==0) {break;}
if (expense<0)  {
printf("Invalid enter Again:\n");
scanf("%f",&expense);}
if(expense>0){
total_count++;
total+=expense;}
if(expense>0 && expense<100){
s_count++;
s_total+=expense;}
if(expense>=100 && expense<500){
m_count++;
m_total+=expense;}
if(expense>=500){
l_count++;
l_total+=expense;}}
while(expense != 0);
if(total_count>0){
printf("SUMMMARY OF EXPENSES\n");
printf("Valid expenses: %d\n", total_count);
printf("Total: %f\n", total);
printf("Small expenses: count=%d total=%f\n", s_count, s_total);
printf("Medium expenses: count=%d total=%f\n", m_count, m_total);
printf("Large expenses: count=%d total=%f\n", l_count, l_total);
printf("Average expense: %f\n", total/total_count);}
else printf("No valid expenses\n");
return 0;
}
