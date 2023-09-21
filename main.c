#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a;
	int b;
	float i;
	
	printf("enter a numerator: ");
	scanf("%d", &a);
	
	printf ("enter a demoniator: ");
	scanf("%d", &b);
	
	i= (float)a/b;
	printf("The result of division is %f\n",i);
	system("PAUSE");
}
