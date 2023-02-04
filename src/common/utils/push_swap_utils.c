/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 04:46:53 by 7arzan            #+#    #+#             */
/*   Updated: 2023/02/04 12:07:29 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap/push_swap.h>

int	is_number(const char *nb)
{
	while (*nb)
	{
		if (*nb == '-' || *nb == '+')
			nb++;
		if (!ft_isdigit(*nb))
			return (0);
		nb++;
	}
	return (1);
}

int	is_duplicated(int stack[], int index, int i)
{
	while (index >= 0)
	{
		if (stack[index] == i)
			return (0);
		index--;
	}
	return (1);
}

int	smallest_nb(int stack[], int size)
{
	int	nb;
	int	index;

	size--;
	index = size;
	nb = stack[size];
	while (size >= 0)
	{
		if (stack[size] < nb)
		{
			nb = stack[size];
			index = size;
		}
		size--;
	}
	return (index);
}

void	push_to_top(int stack[], int size, int position, char character)
{
	if (position >= size / 2)
	{
		while (size - position > 0)
		{
			if (position == size - 1)
				return ;
			rotate_ra_rb(stack, size, character);
			position++;
		}
	}
	else
	{
		while (position >= 0)
		{
			reverse_rotate(stack, size, character);
			position--;
		}
	}
}

int	is_sorted(int a[], int sizea)
{
	sizea--;
	while ((sizea - 1) >= 0)
	{
		if (a[sizea] < a[sizea - 1])
			sizea--;
		else
			return (0);
	}
	return (1);
}
