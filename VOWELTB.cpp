#include <stdio.h>

int main(){
	char c;
	scanf("%c", &c);
	if (c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O'){
		printf("Vowel\n");
	} else {
		printf("Consonant\n");
	}
	return 0;
}