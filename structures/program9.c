#include <stdio.h> 
typedef struct { 
int hours; 
int minutes; 
} Time; 
Time addTime(Time t1, Time t2) { 
Time result; 
int total_min = t1.minutes + t2.minutes; 
result.minutes = total_min % 60; 
result.hours   = t1.hours + t2.hours + (total_min / 60); 
return result; 
} 
int main() { 
Time t1 = {3, 45}; 
Time t2 = {2, 30}; 
Time sum = addTime(t1, t2); 
printf("%02d:%02d + %02d:%02d = %02d:%02d\n", 
t1.hours, t1.minutes, t2.hours, t2.minutes, 
sum.hours, sum.minutes); 
return 0; 
} 
