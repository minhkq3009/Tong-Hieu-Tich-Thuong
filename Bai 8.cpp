#include <stdio.h>
#include <conio.h>
main(){
	int num = 10;
	char ch = 'A';
	float f = 25.3;
	double d = 25.3;
	long double ld = 25.3;
	printf("num = %d\t sizeof int in %d byte\n", num, sizeof(int));
	printf("ch = %c\t sizeof char is %d byte\n", ch, sizeof(char));
	printf("f = %.2f\t sizeof float is %d byte\n", f, sizeof(float));
	printf("d = %f\t sizeof double is %d byte\n", d, sizeof(double));
	printf("ld = %f\t sizeof long double is %d byte\n", ld, sizeof(long double));
	getch();
}
