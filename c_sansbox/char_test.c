/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanylch <mdanylch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:15:28 by mdanylch          #+#    #+#             */
/*   Updated: 2019/06/12 11:27:50 by mdanylch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define CHARI1(s, i) char str[i] = {0}
#define CHARI2(a, ia, b, ib) char a[ia] = {0}, b[ib] = {0}

int		main(void)
{
	CHARI2(str, 10, tmp, 20);
	if (str[9] == '\0' && tmp[19] == '\0')
		write(1, "\n", 1);
	return (0);
}
