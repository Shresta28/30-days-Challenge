#include <stdio.h>
        int main(){
        int marks1,marks2,marks3,marks4,marks5;
        float total,avg,percentage;
printf("Enter the five subjects marks\n");
scanf("%d%d%d%d%d", &marks1, &marks2, &marks3, &marks4, &marks5);
total = marks1+marks2+marks3+marks4+marks5;
avg = total/5;
percentage = (total/500)*100;
        printf("The total is: %f\n", total);
        printf("The average is: %f\n", avg);
        printf("The percentage is: %f\n", percentage);
return 0;
}
