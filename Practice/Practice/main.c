#include <stdio.h>
int main() {
	int num = 1;
	while (num < 11) {
		printf("%d  ", num);
		if (num % 2 == 0) {
			printf("%d는 짝수입니다\n", num);
		}
		else {
			printf("%d는 홀수입니다\n", num);
		}
		num++;
	}

}