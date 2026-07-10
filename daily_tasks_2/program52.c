//THIRD LARGEST
#include<stdio.h>
int main(){
	int n,first,second,third;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d of elements:",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	first=second=third=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>first){
			third=second;
			second=first;
			first=arr[i];
		}
		else if(arr[i]>second && arr[i]!=first){
			third=second;
		        second=arr[i];
		}
		else if(arr[i]>third && arr[i]!=second && arr[i]!=first){
			third=arr[i];
		}
		
	}
	printf("third largest element:%d\n",third);
	return 0;
}
