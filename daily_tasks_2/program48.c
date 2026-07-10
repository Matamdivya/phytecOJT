//SIZEOF
#include<stdio.h>
int main(){
	int a=10;
	float b=20.0;
	char c='A';
	double d=3.145556566;
	printf("size of int: %zu\n",sizeof(a));
	printf("size of float:%zu\n",sizeof(b));
	printf("size of char:%zu\n",sizeof(c));
	printf("size of double:%zu\n",sizeof(d));
	return 0;
}

