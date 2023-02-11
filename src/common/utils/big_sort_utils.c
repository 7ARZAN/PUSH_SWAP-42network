/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 04:32:53 by 7arzan            #+#    #+#             */
/*   Updated: 2023/02/10 15:57:18 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap/push_swap.h>

int	small_int(int stack[], int size)
{
	int	nb;

	size--;
	nb = stack[size];
	while (size >= 0)
	{
		if (stack[size] < nb)
			nb = stack[size];
		size--;
	}
	return (nb);
}

int	big_int(int stack[], int size)
{
	int	nb;

	size--;
	nb = stack[size];
	while (size >= 0)
	{
		if (stack[size] > nb)
			nb = stack[size];
		size--;
	}
	return (nb);
}
