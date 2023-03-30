/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 04:46:53 by 7arzan            #+#    #+#             */
/*   Updated: 2023/03/29 23:43:29 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap/push_swap.h>

int	stack_size(int ac, char **av)
{
	int			len;
	int			i;
	static int	j;

	len = 0;
	while (++j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			if (av[j][i] == '+' || av[j][i] == '-')
				i++;
			else if (ft_isdigit(av[j][i]))
				len++;
			else if (av[j][i] != ' ' && av[j][i] != '\t')
				return (write(2, "ERROR!\n", 7), -1);
			while (ft_isdigit(av[j][i]))
				i++;
			if (av[j][i] && av[j][i] != ' ' && av[j][i] != '\t')
				return (write(2, "ERROR!\n", 7), -1);
			while (av[j][i] == '\t' || av[j][i] == ' ')
				i++;
		}
	}
	return (len);
}

int	is_ordered(int *stack, int len)
{
	int	i;

	i = 1;
	while (i < len)
	{
		if (!stack[i])
			return (0);
		else if (stack[i - 1] > stack[i])
			return (0);
		i++;
	}
	return (1);
}

int	get_biggest_nb(int *stack, int len)
{
	int	i;
	int	max;

	i = 0;
	max = *stack;
	while (i < len)
	{
		if (max < stack[i])
			max = stack[i];
		i++;
	}
	return (max);
}

int	get_next_biggest_nb(int *stack, int len)
{
	int	i;
	int	max;
	int	next_max;

	i = 0;
	max = get_biggest_nb(stack, len);
	next_max = *stack;
	if (len > 1 && next_max == max)
		next_max = stack[1];
	while (i < len)
	{
		if (next_max < stack[i] && stack[i] != max)
			next_max = stack[i];
		i++;
	}
	return (next_max);
}

int	get_smallest_nb(int *stack, int len)
{
	int	i;
	int	min;

	i = 0;
	min = *stack;
	while (i < len)
	{
		if (min > stack[i])
			min = stack[i];
		i++;
	}
	return (min);
}
