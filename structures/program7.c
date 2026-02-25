#include <stdio.h> 
typedef struct { 
char model[30]; 
int year; 
float price; 
} Car; 
int main() { 
Car c1 = {"audi", 2023, 8.2}; 
Car c2 = {"benz", 2024, 13.5}; 
printf("%-15s  %d  ₹ %.2f Lakh\n", c1.model, c1.year, c1.price); 
printf("%-15s  %d  ₹ %.2f Lakh\n", c2.model, c2.year, c2.price); 
return 0; 
} 

