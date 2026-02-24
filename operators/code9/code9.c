#include <stdio.h>
int main()
{
	int totalseconds,hours,minutes,seconds,remaining;
	printf("enter total seconds:");
	scanf("%d",&totalseconds);
	hours=totalseconds/3600;
	remaining=totalseconds%3600;
	minutes=remaining/60;
	seconds=remaining%60;
	printf("hours:%d\n",hours);
	printf("minutes:%d\n",minutes);
	printf("seconds:%d\n",seconds);
	return 0;
}

