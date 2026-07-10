#include<stdio.h>
#include<limits.h>
int main(){
	int arr[]={1,5,8,20,3,10};
	int n=6;
	int min=INT_MAX;
	int second_min=INT_MAX;
	int max=INT_MIN;
	int second_max=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]<min){
	        second_min=min;
		min=arr[i];
		}
		else if(arr[i]<second_min && arr[i]!=min){
			second_min=arr[i];
		}
		if(arr[i]>max){
			second_max=max;
			max=arr[i];
		}
		else if(arr[i]>second_max && arr[i]!=max){
			second_max=arr[i];
		}
	}
	printf("smallest value:%d\n",min);
	printf("second smallest:%d\n",second_min);
	printf("second largest:%d\n",second_max);
}

