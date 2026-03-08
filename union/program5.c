#include <stdio.h> 
union Number { 
    int i; 
    double d; 
}; 
int main() { 
    union Number arr[4]; 
    arr[0].i = 100; 
arr[1].d = 3.14159; 
printf("%d   %.4f\n", arr[0].i, arr[1].d); 
return 0; 
}
