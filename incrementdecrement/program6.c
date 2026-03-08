#include <stdio.h>  
int main() {  
    int arr[] = {1,2,3,4,5};  
    printf("Size: %zu", sizeof(arr)/sizeof(arr[0]));  
}
