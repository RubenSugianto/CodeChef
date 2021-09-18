#include <stdio.h>
int main(){
	int l, b;
	int a, p;
	scanf("%d\n%d", &l, &b);
	a = l * b;
	p = 2 * (l+b);
	if (a>p) {
		printf("Area\n%d\n", a);
	} else if (p>a) {
		printf("Peri\n%d\n", p);
	} else {
		printf("Eq\n%d\n", p);
	}
	return 0;
}