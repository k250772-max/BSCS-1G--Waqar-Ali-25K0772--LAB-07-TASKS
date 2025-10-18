#include<stdio.h>
int main(){
	int arr[9];
	 int i, high, low;
	printf("Enter 10 numbers: \n");
	for (i=0 ; i<9 ; i++){
		scanf("%d", &arr[i]);
	}
	high=arr[0];
	low=arr[0];
for (i=1 ; i<9 ; i++){
	if(arr[i]>high){
		high=arr[i];
	}
		if(arr[i]<low){
		low=arr[i];
	}
}
	printf("THE HIGHEST NUM IS %d AND LOWEST NUM IS %d\n ", high,low);
	printf("THE DIFFERENCE IS %d ", high-low);
}
