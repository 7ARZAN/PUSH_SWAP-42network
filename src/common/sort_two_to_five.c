/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two_to_five.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 07:52:28 by 7arzan            #+#    #+#             */
/*   Updated: 2023/03/12 21:55:41 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap/push_swap.h>

void	sort_smaller(int stack_a[])
{
	if (len == 2)
		write(1, "sa\n", 3);
	else if (len > 2 && len < 6)
	{
		if (len == 3)
			sort_three(a);
		else
			sort_five(a, len);
	}
}

void	sort_three(int *a)
{
	int	first;
	int	second;
	int	third;

	first = a[0];
	second = a[1];
	third = a[2];
	//need if conditions for every case !
}

void	sort_five(int *a, int len)
{
	int	min;
	int	i;
	int	len_b;

	i = 0;
	len_b = len;
	while (len > 3)
	{
		min = get_smallest_nb(a + i, len);
		ra_or_rra(a + i, len, min);
		if (a[i] == get_smallest_nb(a + i, len))
		{
			write(1, "pb\n", 3);
			len--;
			i++;
		}
	}
	sort_three(a + i);
	while (len_b > len)
	{
		write(1, "pa\n", 3);
		len_b--;
	}
}
