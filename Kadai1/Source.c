#include<stdio.h>

int main() {
	float var;
	//double var;
	int i,j;
	int n = 10;
	for (i = 0; i < 8; i++) {
		var = 0;
		for (j = 0; j < n; j++) {
			var += 0.1;
		}
		printf("%d��0.1�����Z�F%g\n", n, var);
		n *= 10;
	}
	return 0;
}