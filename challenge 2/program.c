#include <stdio.h>
int main(){
float fuel,fuelprice,netfuelprice,distance,mileage;
        printf("Enter distance:\n");
                scanf("%f",&distance);
        printf("Enter fuel price:\n");
                scanf("%f",&fuelprice);
        printf("Enter mileage:\n");
                scanf("%f",&mileage);
  fuel=distance/mileage;
  netfuelprice=fuel*fuelprice;
        printf("The fuel required is:%f\n",fuel);
        printf("The net fuel price is:%f\n",netfuelprice);
return 0;
}
