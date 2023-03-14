/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 23:02:06 by 7arzan            #+#    #+#             */
/*   Updated: 2023/03/12 13:09:02 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap/push_swap.h>

void	ra_or_rra(int *stack, int len, int max)
{
	int	i;

	i = 0;
	while (stack[i] != max)
		i++;
	if (i == 0)
		return ;
	if (i < len / 2)
	{
		write(1, "ra\n", 3);
		rx(stack, len);
	}
	else
	{
		write(1, "rra\n", 4);
		rrx(stack, len);
	}
}

void	rx(int *stack, int len)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack[i];
	while (++i < len)
		stack[i - 1] = stack[i];
	stack[i - 1] = tmp;
}

void	rrx(int *stack, int len)
{
	int	tmp;

	tmp = stack[len - 1];
	while (--len)
		stack[len] = stack[len - 1];
	stack[len] = tmp;
}

void	rb_or_rrb(int *stack, int len_b, int max)
{
	int	i;

	i = 0;
	while (stack[i] != max)
		i++;
	if (i == 0)
		return ;
	if (i < (len_b / 2) + 1)
	{
		write(1, "rb\n", 3);
		rx(stack, len_b);
	}
	else
	{
		write(1, "rrb\n", 4);
		rrx(stack, len_b);
	}
}

void	sx(int *stack, int swap)
{
	swap = stack[0];
	stack[0] = stack[1];
	stack[1] = swap;
}
