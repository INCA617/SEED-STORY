#include <stdio.h>
int fibonaci(int n);
int main()
{
	printf("%d ", 1);
	fibonaci(10, 1, 1);
	return 0;
}
int fibonaci(int n, int num2, int num3)
{
	printf("%d ", num3);
	if (n == 1){
		return 0;
	}
	return fibonaci(--n, num3, num2 + num3);
}