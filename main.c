#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2;
	char op;
	
	printf("input num1, num2, op: "); 
	scanf("%i %i %c", &num1, &num2, &op);
	
	switch(op){
		case '+':
			printf("%i\n", num1+num2);
			break;
		case '-':
			printf("%i\n", num1-num2);
			break;
		case '*':
			printf("%i\n", num1*num2);
			break;
		case '/':
			printf("%f\n", num1/num2);
			break;
		default:
			printf("값을 잘못 입력하셨습니다.");
	}
	
    system("PAUSE");
	return 0;
}
