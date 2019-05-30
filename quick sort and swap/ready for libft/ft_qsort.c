/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanylch <mdanylch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 21:50:49 by mdanylch          #+#    #+#             */
/*   Updated: 2019/05/27 21:51:42 by mdanylch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_qsort(int *arr, int begin, int end)
{
	int		left;
	int		right;
	int		piv;

	left = begin;
	right = end;
	piv = arr[(left + right) / 2];
	while (left <= right)
	{
		while (arr[left] < piv)
			left++;
		while (arr[right] > piv)
			right--;
		if (left <= right)
			ft_swap(&arr[left++], &arr[right--]);
	}
	if (begin < right)
		ft_qsort(arr, begin, right);
	if (end > left)
		ft_qsort(arr, left, end);
}
