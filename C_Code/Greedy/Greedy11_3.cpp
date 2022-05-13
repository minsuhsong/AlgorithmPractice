// 문자열 뒤집기

#include <stdio.h>
int main()
{
	int n = 0;
	char c;
	char prev = 1;

	while (1) {
		scanf_s("%c", &c);
		if (c == '\0' || c == '\n')
			break;
		if (c != prev) {
			prev = c;
			n++;
		}
	}

	printf("%d\n", n / 2);

	return 0;
}