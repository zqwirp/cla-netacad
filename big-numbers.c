#include <stdio.h>

int main() {
	int octet1, octet2, octet3, octet4;
	scanf("%d", &octet1);
	scanf("%d", &octet2);
	scanf("%d", &octet3);
	scanf("%d", &octet4);

	if (octet1 < 0 || octet1 > 255 || octet2 < 0 || octet2 > 255 || octet3 < 0 || octet3 > 255 || octet4 < 0 || octet4 > 255) {
		printf("\nIncorrect IP Address.\n");
		return 1;
	}

	unsigned int r = (octet1 * 256 * 256 * 256) + (octet2 * 256 * 256) + (octet3 * 256) + octet4;

	printf("Human-readable IP address is: %d.%d.%d.%d\n", octet1, octet2, octet3, octet4);
	printf("IP address as a 32-bit number: %lu\n", r);
	return 0;
}
