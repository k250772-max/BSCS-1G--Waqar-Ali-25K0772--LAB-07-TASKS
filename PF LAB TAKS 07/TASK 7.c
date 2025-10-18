#include <stdio.h>

int main() {
    int a[10];
    int b[1000]; 
    int i;
    printf("Enter 10 elements:\n");
    
    for ( i = 0; i < 10; i++) 
	{
        scanf("%d", &a[i]);
        
		if (b[a[i]] == 1) 
		{
            a[i] = -1; 
        } 
		else 
		{
            b[a[i]] = 1;
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

