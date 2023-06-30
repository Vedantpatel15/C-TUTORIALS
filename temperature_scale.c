#include <stdio.h>

int main() {
   float fahrenheit, celsius;
   
   // Prompt the user to enter temperature in Fahrenheit
   printf("Enter temperature in Fahrenheit: ");
   scanf("%f", &fahrenheit);
   
   // Convert Fahrenheit to Celsius
   celsius = (fahrenheit - 32) * 5/9;
   
   // Display the converted temperature in Celsius
   printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);

   return 0;
}
