#include <stdio.h>
int main() {
	int num = 1;
	while (num < 11) {
		printf("%d  ", num);
		if (num % 2 == 0) {
			printf("%d�� ¦���Դϴ�\n", num);
		}
		else {
			printf("%d�� Ȧ���Դϴ�\n", num);
		}
		num++;
	}

}