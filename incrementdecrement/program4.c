#include <stdio.h>  
int main() {  
    int n = -5;  
    printf("%d is %s", n, (n>0)?"positive":(n<0)?"negative":"zero");  
}
