#include<stdio.h>
	int findMax(int arr[],int n){//function to find max value
	if(n==1)
		return arr[0];
	else{
	
	int max_rest=findMax(arr,n-1);
	if(arr[n-1]<max_rest)
		return max_rest;
	else
		return arr[n-1];
	}
	}
	int findMin(int arr[], int n){//function to find min value
	if(n==1)
		return arr[0];
	else{
			int min_rest=findMin(arr,n-1);
				if(arr[n-1]<min_rest)
					return arr[n-1];
			
				else
					return min_rest;
	}}
		int main(){
			int arr[]={5,2,9,7,10};
			int n=sizeof(arr)/sizeof(arr[0]);
			int MAX=findMax(arr,n);
			int MIN=findMin(arr,n);
			printf("MAX value is :%d\n",MAX);
			printf("MIN value is :%d\n",MIN);
			return 0;
		}


