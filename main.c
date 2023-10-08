#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numb=0;
    char c;

    printf("input a string : ");

    while( (c=getchar()) != '\n' )
    {      
           if( c>='0' && c<='9' )
               numb++;
    }          
    printf("the number of digits is %i\n", numb);

    system("PAUSE");
	return 0;
}
