#include <stdio.h>
#include <string.h>
struct Variant { 
    char type;           // 'i','f','s' 
    union { 
        int    ival; 
        float  fval; 
        char   sval[32]; 
    } value; 
}; 
int main() { 
    struct Variant v; 
    v.type = 's'; 
    strcpy(v.value.sval,"Dynamic"); 
    printf("Type%c→ %s\n",v.type,v.value.sval); 
    return 0; 
}
