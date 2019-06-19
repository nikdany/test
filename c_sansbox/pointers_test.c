#include <stdio.h>
#include <stdlib.h>

// int		ft_pointer()
// {

// }

int		main(int argc, char **argv)
{
	int a = 10;
	int *pa = &a;
	printf("address of pointer = %p \n", &pa);		// адрес указателя
	printf("address stored in pointer = %p \n", pa);	// адрес, который хранится в указателе - адрес переменной a         
	printf("value on pointer = %d \n", *pa);			// значение по адресу в указателе - значение переменной a
	
	int		arr[10] = {1,2,3,4,5,6,7,8,9};
	int		*parr = arr;
	int		*pbrr = arr;

	while (*pbrr != 9)
		pbrr++;
	int c = pbrr - parr + 1;
	printf("distance = %d\n", c);

	char	*tmp = argv[1];

	while (*tmp)
		tmp++;
	c = tmp - argv[1];		// strlen
	printf("distance = %d\n", c);
	return (1);
}