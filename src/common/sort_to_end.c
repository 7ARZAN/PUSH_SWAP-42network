/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_to_end.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:15:13 by 7arzan            #+#    #+#             */
/*   Updated: 2023/03/14 23:28:37 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap/push_swap.h>

int	calculate_position(int *stack, int middle, int len_a, int len)
{
	int	smaller;
	int	i;

	i = 0;
	smaller = 0;
	while (i < len_a)
	{
		if (stack[i] < middle)
			smaller++;
		i++;
	}
	if (pick_divider(len, len_a, smaller) == 1)
		return (1);
	return (0);
}

int	find_middle(int *stack, int len_a, int len)
{
	int	i;

	i = 0;
	while (i < len_a)
	{
		if (calculate_position(stack, stack[i], len_a, len))
			return (stack[i]);
		i++;
	}
	return (0);
}

void	sort_to_end(int *a, int *b, int len)
{
	int	i;
	int	middle;
	int	len_a;

	len_a = len;
	i = 0;
	while (len_a > 5)
	{
		middle = find_middle(a + i, len_a, len);
		while (is_middle(a + i, len_a, middle) && len_a > 5)
		{
			if (a[i] < middle)
			{
				write(1, "pb\n", 3);
				--len_a;
				b[len_a] = a[i];
				i++;
				continue ;
			}
			rx(a + i, len_a);
			write(1, "ra\n", 3);
		}
	}
	sort_five(a + i, len_a);
	sort_to_a(b + len_a, len - len_a);
}

int	sort_b_to_a(int *stack, int len_b, int i, int j)
{
	static int		fd;
	t_calculation	c;

	while (len_b > 0)
	{
		c.min = get_smallest_nb(stack + i, len_b);
		c.max = get_biggest_nb(stack + i, len_b);
		c.next = get_next_biggest_nb(stack + i, len_b);
		rb_or_rrb(stack + i, len_b, c.max);
		if (stack[i] == c.max || (stack[i] == c.next && !fd)
			|| stack[i] == c.min)
		{
			write(1, "pa\n", 3);
			if (stack[i] == c.next && fd == 0)
				fd = 1;
			else if (fd == 1 && stack[i] == c.max)
				write(fd--, "sa\n", 3);
			else if (stack[i] == c.min && ++j)
				write(1, "ra\n", 3);
			--len_b;
			i++;
		}
	}
	return (j);
}

void	sort_to_a(int *stack, int len_b)
{
	int	i;
	int	small_nb;
	int	rra_min_from_bottom;

	i = 0;
	small_nb = 0;
	rra_min_from_bottom = sort_b_to_a(stack, len_b, i, small_nb);
	while (rra_min_from_bottom > 0)
	{
		write(1, "rra\n", 4);
		rra_min_from_bottom--;
	}
}
