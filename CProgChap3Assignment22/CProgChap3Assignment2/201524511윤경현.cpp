#include <stdio.h>

void unitConversion(float unit);

int main() {
	float cup;

	printf("cup단위로 입력해주세요:");
	scanf("%f", &cup);
	getchar();

	unitConversion(cup);
	getchar();

	return 0;
}

void unitConversion(float unit) {
	printf("%fcup(s) is %fpint(s)\n", unit, unit*0.5);
	printf("%fcup(s) is %founces\n", unit, 8 * unit);
	printf("%fcup(s) is %ftablespoons\n", unit, 16 * unit);
	printf("%fcup(s) is %fteaspoons\n", unit, 48 * unit);
}