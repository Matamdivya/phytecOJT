#include <stdio.h>  
int main() {  
    printf("%d", 10 - 5 + 2); //7 left-to-right  
    int x, y=3; x = y = 5;  
    printf("x=%d", x); //5 right-to-left  
}
