#include <stdio.h>

int main() {
	float n;
	scanf("%f", &n);

	if (1 <= n && n < 2) {
		printf("Very Bad\n");
	} else if (2 <= n && n < 3) {
		printf("Bad\n");
	} else if (3 <= n && n < 4) {
		printf("Neutral\n");
	} else if (4 <= n && n < 5) {
		printf("Good\n");
	} else if (5 <= n && n < 6) {
		printf("Very Good\n");
	} else {
		printf("BLANK!\n");
	}

	return 0;
}
