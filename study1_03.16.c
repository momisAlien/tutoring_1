#include <stdio.h>

int main(void) {
	int num = 100;
	printf("%d\n", num++);
	printf("%d\n", ++num);
	printf("%d\n", num+3);
	printf("%d\n", num-2);
	printf("%d\n", ++num - 1);
	printf("%d\n", num-- + 1);
	printf("%d\n", num);
	
	
	return 0;
}
