// 만들 수 없는 금액

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 1000000

int comp(const void* a, const void* b) {		//compare 함수
	return(*(int*)a - *(int*)b);
}

int array[MAXLINE];

int main()
{
	int n, i;
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
		scanf_s("%d", &array[i]);

	qsort(array, n, sizeof(int), comp);

	int target = 1;		i = 0;
	while (1) {
		if (array[i] == '\0' || array[i] == '\n')
			break;
		if (target < array[i])
			break;
		target += array[i];
		i++;
	}

	printf("%d", target);

	return 0;
}