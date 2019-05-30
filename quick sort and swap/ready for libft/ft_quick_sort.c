/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanylch <mdanylch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 21:54:33 by mdanylch          #+#    #+#             */
/*   Updated: 2019/05/27 21:54:43 by mdanylch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_qsort(int *arr, int begin, int end)
{
	int left;
	int right;
	int	piv;

	left = begin;
	right = end;
	piv = arr[left];
	while (left < right)
	{
		while ((arr[right] >= piv) && (left < right))
			right--;
		if (left != right)
			arr[left++] = arr[right];
		while ((arr[left] <= piv) && (left < right))
			left++;
		if (left != right)
			arr[right--] = arr[left];
	}
	arr[left] = piv;
	if (begin < left)
		ft_qsort(arr, begin, left - 1);
	if (end > left)
		ft_qsort(arr, left + 1, end);
}
