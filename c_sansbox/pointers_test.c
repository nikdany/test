#include <stdio.h>
#include <stdlib.h>

void	ft_distance(char *str)
{
	printf("\t==== count distance in array ====\n");
	int		arr[10] = {1,2,3,4,5,6,7,8,9};
	int		*parr = arr;
	int		*pbrr = arr;

	while (*pbrr != 9)
		pbrr++;
	int c = pbrr - parr + 1;
	printf("distance = %d\n", c);

	char	*tmp = str;

	while (*tmp)
		tmp++;
	c = tmp - str;		// strlen
	printf("distance = %d\n", c);
}

int		ft_count_size(void)
{
	printf("\t==== count size of array ====\n");

	int a[3][4] = { {1, 2, 3, 4} , {5, 6, 7, 8}, {9, 10, 11, 12}};
	int n = sizeof(a)/sizeof(a[0]);			// число строк
	printf("size of array = %d, size of string = %d, number of strings = %d\n\n",
			sizeof(a), sizeof(a[0]), n);

	int m = sizeof(a[0])/sizeof(a[0][0]);	// число столбцов
	printf("string size = %d, size of element = %d, number of columns = %d\n\n",
			sizeof(a[0]), sizeof(a[0][0]), m);

	int k = sizeof(a)/sizeof(a[0][0]);			// число элементов
	printf("size of array = %d, size of element = %d, number of elements = %d\n\n",
			sizeof(a), sizeof(a[0][0]), k);

	int *final = a[0] + n*m - 1;		// указатель на самый последний элемент
	int *ptr = a[0];
	int i = 1;
	while(ptr <= final)
	{
		printf("%d \t", *ptr);
		// если остаток от целочисленного деления равен 0,
		// переходим на новую строку
		if(i % m == 0)  // количество элементов в строке
			printf("\n");
		ptr++;
		i++;
	}

	char *fruit[] = {"cherry", "apple", "banana", "lemon", "pear", "plum"};
	int l = sizeof(fruit)/sizeof(fruit[0]);
	i = 0;
	while (i < l)
		printf("%s \t", fruit[i++]);
	printf("\n");
	return (0);
}

int		main(int argc, char **argv)
{
	int a = 10;
	int *pa = &a;
	printf("address of pointer = %p \n", &pa);		// адрес указателя
	printf("address stored in pointer = %p \n", pa);	// адрес, который хранится в указателе - адрес переменной a         
	printf("value on pointer = %d \n", *pa);			// значение по адресу в указателе - значение переменной a
	ft_distance(argv[1]);
	ft_count_size();

	return (1);
}