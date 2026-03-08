#include <stdio.h>  
int main() {  
    int a = 5, b;  
    b = a--; printf("i--: a=%d, b=%d", a, b); // 4, 5  
    a = 5;  
    b = --a; printf("--i: a=%d, b=%d", a, b); // 4, 4  
}
