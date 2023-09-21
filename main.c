#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a;
	int b;
	
	printf("enter a numerator: ");
	scanf("%d", &a);
	
	printf ("enter a demoniator: ");
	scanf("%d", &b);
	
	printf("The result of division is %f\n",(float)a/b);
	system("PAUSE");
}
