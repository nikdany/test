#include <stdio.h>
#include <stdlib.h>
#define SIZE 15

void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void ft_qsort (int *arr, int begin, int end)
{
	// int		tmp = 0;
	int		left;
	int		right;
	int		piv;

	left = begin;
	right = end;
	piv = arr[(left + right) / 2]; // Опорным элементом для примера возьмём средний
	while (left <= right)
	{
		while (arr[left] < piv)
			left++;
		while (arr[right] > piv)
			right--;
		if (left <= right)
			ft_swap(&arr[left++], &arr[right--]);
		// {
		// 	tmp = arr[left];
		// 	arr[left++] = arr[right];
		// 	arr[right--] = tmp;
		// }
	}
	if (begin < right)
		ft_qsort (arr, begin, right);
	if (end > left)
		ft_qsort (arr, left, end);
}


// int		main(void)
// {
// 	int arr[10] = {10, 4, 2, 14, 67, 2, 11, 33, 1, 15};
// 	for (int i = 0; i<10; i++)
// 		printf("%d ", arr[i]);
// 	printf("\n");
// 	ft_qsort(arr, 0, 9);
// 	for (int i = 0; i<10; i++)
// 		printf("%d ", arr[i]);
// 	printf("\n");
// 	return (0);
// }

int main()
{
	int a[SIZE];
	// Заполнение массива случайными числами
	for (int i = 0; i<SIZE; i++)
		a[i] = rand() % 201 - 100;
	// Вывод элементов массива до сортировки
	for (int i = 0; i<SIZE; i++)
		printf("%4d ", a[i]);
	printf("\n");
	ft_qsort(a, 0, SIZE-1); // вызов функции сортировки
			// Вывод элементов массива после сортировки
	for (int i = 0; i<SIZE; i++)
		printf("%4d ", a[i]);
	printf("\n");
	// getchar();
	return 0;
}