#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum=0;
    int inputnum;
    int i;

    printf("input a number : ");
    scanf("%i", &inputnum);

    for( i=0; i<=inputnum; i++ )
    {
    	sum = sum + i;
	}
	
	printf("the result is %i\n", sum);

    system("PAUSE");
	return 0;
}
