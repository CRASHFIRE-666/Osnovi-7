#include <stdio.h>

using namespace std;

int main()
{
	int i, j, b, step;
	int const k = 8;
	int a[k];

	printf("Vvedite massiv\n");
	for (i = 0; i < k; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (step = k/2; step > 0; step = step/2)
	{
		for (i = step; i < k; i++)
		{
			for (j = i - step; j >= 0 && a[j] > a[j + step]; j--)
			{
				b = a[j];
				a[j] = a[j + step];
				a[j + step] = b;
			}
		}
	}

	for (i = 0; i < k; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;

}
