#include <stdio.h>
#define MAXLINE 20

char arr[MAXLINE];

int main()
{
	int result = 0;
	int n = 1;

	scanf_s("%s", &arr);
	result = arr[0] - 48;

	while (1) {
		if (arr[n] == '\n' || arr[n] == '\0')
			break;

		if (arr[n] == 48 || arr[n] == 49)
			result = result + arr[n] - 48;
		else
			result = result * (arr[n] - 48);

		n++;
	}

	printf("%d\n", result);
	return 0;
}