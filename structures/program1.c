#include <stdio.h>
struct student
{
	int rollno;
	char name[25];
	float percentage;
};
int main()
{
	struct student s1 = {61,"divya",88.5};
	printf("roll :%d\n",s1.rollno);
	printf("name :%s\n",s1.name);
	printf("percent:%.2f%%\n",s1.percentage);
	return 0;
}

