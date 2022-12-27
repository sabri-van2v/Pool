/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 05:05:33 by svan-de-          #+#    #+#             */
/*   Updated: 2022/09/29 16:46:59 by svan-de-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	result;

	if (nb < 1 || nb > 2147395600)
		return (0);
	result = 0;
	while (result <= 46340)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}
