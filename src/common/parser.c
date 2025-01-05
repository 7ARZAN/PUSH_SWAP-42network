/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 04:12:47 by 7arzan            #+#    #+#             */
/*   Updated: 2025/01/05 06:07:06 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap/push_swap.h>

void	is_valid(int ac, char **av)
{
	int		j;
	size_t	i;
	size_t	space;

	j = 0;
	while (++j < ac)
	{
		if (ft_strlen(av[j]) == 0)
			return ;
		i = 0;
		space = 0;
		while (i < ft_strlen(av[j]))
		{
			if (av[j][i] == ' ')
				space++;
			i++;
		}
		if (ft_strlen(av[j]) == space)
		{
			write(1, "Error!\n", 6);
			exit(1);
		}
	}
}

void	is_duplicated(int *stack, int len)
{
	int	i;
	int	j;

	j = 0;
	while (j < len)
	{
		i = j + 1;
		while (i < len)
		{
			if (stack[j] == stack[i])
			{
				write(1, "Error!\n", 7);
				exit(1);
			}
			i++;
		}
		j++;
	}
}

void	make_stack(int len, int *stack_a, char **av)
{
	int	i;
	int	index;
	int	j;

	j = 0;
	index = 0;
	while (++j && index < len)
	{
		i = 0;
		while (av[j][i])
		{
			while (av[j][i] == ' ' || av[j][i] == '+')
				i++;
			if (ft_isdigit(av[j][i]) || av[j][i] == '-')
				stack_a[index++] = ft_ato1(&av[j][i], stack_a);
			if (av[j][i] == '-' || av[j][i] == '+')
				i++;
			while (ft_isdigit(av[j][i]))
				i++;
			while (av[j][i] == ' ' || av[j][i] == '\t')
				i++;
		}
	}
	is_duplicated(stack_a, len);
}

int	is_middle(int *stack, int len_a, int middle)
{
	int	i;

	i = 0;
	while (i < len_a)
	{
		if (stack[i] < middle)
			return (1);
		i++;
	}
	return (0);
}

void	speed_is_life(int *a, int *b, int len)
{
	if (len > 1 && len < 6)
		sort_smaller(a, len);
	else if (len > 5)
		sort_to_end(a, b, len);
}
