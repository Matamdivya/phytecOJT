#include <stdio.h> 
int findOddOne(int arr[], int size) { 
int result = 0; 
for (int i = 0; i < size; i++) 
result ^= arr[i]; 
return result; 
} 
int main() { 
int faults[] = {3, 5, 3, 7, 5, 7, 9, 5, 7, 3, 9}; 
printf("The fault code that occurred odd times: %d\n", findOddOne(faults, 11)); 
return 0; 
}
