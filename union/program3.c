#include <stdio.h> 
union Test { 
    int x; 
    char ch[4]; 
}; 
int main() { 
    union Test t = {0x41424344};   // 'A','B','C','D' 
    union Test *ptr = &t; 
    printf("%c %c %c %c\n", ptr->ch[0], ptr->ch[1], ptr->ch[2], ptr->ch[3]); 
    return 0; 
} 

