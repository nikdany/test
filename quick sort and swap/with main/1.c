#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
// Функция быстрой сортировки
void ft_quick_sort(int *numbers, int left, int right)
{
int pivot; // разрешающий элемент
  int l_hold = left; //левая граница
  int r_hold = right; // правая граница
  pivot = numbers[left];
  while (left < right) // пока границы не сомкнутся
  {
    while ((numbers[right] >= pivot) && (left < right))
      right--; // сдвигаем правую границу пока элемент [right] больше [pivot]
    if (left != right) // если границы не сомкнулись
    {
      numbers[left] = numbers[right]; // перемещаем элемент [right] на место разрешающего
      left++; // сдвигаем левую границу вправо 
    }
    while ((numbers[left] <= pivot) && (left < right))
      left++; // сдвигаем левую границу пока элемент [left] меньше [pivot]
    if (left != right) // если границы не сомкнулись
    {
      numbers[right] = numbers[left]; // перемещаем элемент [left] на место [right]
      right--; // сдвигаем правую границу вправо 
    }
  }
  numbers[left] = pivot; // ставим разрешающий элемент на место
  pivot = left;
  left = l_hold;
  right = r_hold;
  if (left < pivot) // Рекурсивно вызываем сортировку для левой и правой части массива
    ft_quick_sort(numbers, left, pivot - 1);
  if (right > pivot)
    ft_quick_sort(numbers, pivot + 1, right);
}

int main()
{
  // Заполнение массива случайными числами
  int a[10] = {10, 4, 2, 14, 67, 2, 11, 33, 1, 15};
  // Вывод элементов массива до сортировки
  for (int i = 0; i<10; i++)
    printf("%4d ", a[i]);
  printf("\n");
  ft_quick_sort(a, 0, 10-1); // вызов функции сортировки
            // Вывод элементов массива после сортировки
  for (int i = 0; i<10; i++)
    printf("%4d ", a[i]);
  printf("\n");
  getchar();
  return 0;
}


