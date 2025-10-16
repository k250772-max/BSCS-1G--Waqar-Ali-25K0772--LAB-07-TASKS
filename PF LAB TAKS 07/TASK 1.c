#include<stdio.h>
int main(){
	int arr[5];
	int i,last;
	printf("Enter a number: \n");
	for (i=0;i<5;++i){
		scanf("%d", &arr[i]);
	}
	last=arr[4];
	for(i=3;i>=0;i--){
		arr[i+1]= arr[i];
	}
	arr[0]=last;
	for (i=0;i<5;++i){
		printf("%d", arr[i]);		
}
return 0;
}