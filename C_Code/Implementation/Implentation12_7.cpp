#include <stdio.h>
#include <string.h>

int main()
{
	char arr[10];
	scanf_s("%s", arr);

	int length = strlen(arr);
	int temp = length / 2;
	int sum = 0;
	int i;

	//왼쪽 부분의 자릿수 합 더하기
	for (i = 0; i < temp; i++) {
		sum += arr[i] - '0';
	}

	//오른쪽 부분의 자릿수 합 빼기
	for (i = temp; i < length; i++) {
		sum -= arr[i] - '0';
	}

	//왼쪽 부분과 오른쪽 부분의 자릿수 합이 동일한지 검사
	if (sum == 0)
		printf("LUCKY");
	else
		printf("READY");

	return 0;
}