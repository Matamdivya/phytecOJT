#include <stdio.h>
int main()
{
	int sensors=5;
	if(sensors&1)
	{
		printf("the value is odd\n");
	}else
	{
		printf("the value is even\n");
	}
	return 0;
}
