#include<stdio.h>
int main()
{
	int start,end,i;
	printf("Enter start and end:");
		scanf("%d %d", &start, &end);
	//loop from start to end
	for(i=start; i<=end; i++)
	{
		//check even
		if(i%2==0)
			printf("%d", i);
	}
return 0;
}



