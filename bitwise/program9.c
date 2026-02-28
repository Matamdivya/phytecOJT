#include <stdio.h> 
int main() { 
int arr[] = {4, 7, 4, 9, 7, 4, 9, 12, 12}; 
int result = 0; 
for (int i = 0; i < 9; i++) result ^= arr[i]; 
printf("Number that appears odd times: %d\n", result);  // 4 
return 0; 
}
