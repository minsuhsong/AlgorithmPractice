#include <stdio.h>
#include <stdlib.h>

int array[100000];

int comp(const void* a, const void* b) {
	return(*(int*)a - *(int*)b);
}

int main() {
	int n;
	int i;
	int j;
	int max_g;
	int ans;

	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &array[i]);

	qsort(array, n, sizeof(int), comp);

	i = 0;
	ans = 0;
	while (i < n) {
		max_g = array[i];
		j = 1;
		while (j < max_g) {
			i++;
			if (i >= n) {
				printf("%d\n", ans);
				return 0;
			}
			max_g = array[i];
			j++;
		}
		ans++;
		i++;
	}
	printf("%d\n", ans);
	return 0;
}