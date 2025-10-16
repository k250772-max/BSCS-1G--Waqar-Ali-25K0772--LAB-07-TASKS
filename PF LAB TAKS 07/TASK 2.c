#include<stdio.h>
int main(){
	int arr[10], n, i, count=0;
		printf("Enter 10 numbers: \n");
	for (i=0;i<10;++i){
		scanf("%d", &arr[i]);
}
    printf("Enter a number you want to search: ");
    scanf("%d", &n);
 for(i=0;i<10;++i){
 	if (n==arr[i]){
 		count++;
	 }
}
	 if(count>0){
	 	printf("%d is repeated %d times", n, count);
	 }
	 else {
	 	printf("NO NUMBER FOUND");
	 }
 

 return 0;
}