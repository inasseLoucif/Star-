#include <stdio.h>
#include <stdlib.h>

int i=0;
int j=0;
int k,s;
int main(int argc, char **argv[]){

	long n = strtol(argv[1], NULL, 10);
	for(i = 0; i < n; i++)
	{	
		for(j = 0; j<n*2; j++)
			printf(" ");
		for(s = n; s > i; s--)
			printf(" ");
		printf("*");
//if (i != 0)
		for(j = 0; j < i*2-1; j++)
			printf(" ");
		if (i!=0)
			printf("*");
		// ending line after each row
		printf("\n");
	}
	for (i = 0; i < (n*2+1); i++)
	printf("*");
	for (i = 0; i < (n*2-1); i++)
	printf(" ");
	for (i = 0; i < (n*2+1); i++)
	printf("*");	
	printf("\n");
	//Second step
	//====================================
	for( i = 0; i < n; i++){
		for (j = 0; j< i; j++)
			printf(" ");
		printf("*");
		for(j = (n*6-(2*i)); j > 0; j--)
				printf(" ");
		printf("*");
		for(j = 1; j < n-1; j++)
			printf(" ");
		printf("\n");
	}
	for (i = n ; i > 0 ; i--){
		for(j = 0; j<i ; j++)
			printf(" ");
		printf("*");
		for(j = (n*6-(2*i)); j > 0; j--)
			printf(" ");
		printf("*");
		for(j=0; j < n-1; j++)
			printf(" ");
		printf("\n");

	}
	// +++++++++++++++++++++++++++++++++++++
	for (i = 0; i < (n*2+1); i++)
	       printf("*");
	for (i = 0; i < (n*2)-1; i++)
		printf(" ");
	for (i = 0; i < (n*2)+1; i++)
		printf("*");
	printf("\n");
	// ======================================
	
	for (i= n; i>0; i--){
		for(j = 0; j < n*2+1; j++)
			printf(" ");
		for(s = n; s > i; s--)
		       printf(" ");
		printf("*");
		for(j = 1; j < (i*2)-2; j++)
			printf(" ");
		if(i != 1)
			printf("*");
		printf("\n");
	
	}
	return 0;
}

