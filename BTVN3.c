#include <stdio.h>
#include <math.h>

int main(){
	int number =12345;
	int sum = 0;
	int digit1= number % 10;
	int digit2 = (number / 10) % 10;
	int digit3 = (number / 100) % 10;
	int digit4 = (number / 1000) % 10;
	int digit5 = (number / 10000) % 10;
	
	sum = digit1 = digit2 + digit3 + digit4 + digit5;
	printf("sum don vi =%d, chuc = %d, tram = %d, nghin = %d, chuc nghin = %d,\n ket");
}
