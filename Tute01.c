/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   int mark1, mark2, sum;
   float avg;
   
   
   printf("Enter marks for 1st subject : ");
   scanf("%d", &mark1);
   printf("Enter marks for 2nd subject : ");
   scanf("%d", &mark2);
   
   sum = mark1 + mark2;
   avg = sum/2.0;
   
   printf("Average marks : %.2f", avg);
  
  return 0;
}

