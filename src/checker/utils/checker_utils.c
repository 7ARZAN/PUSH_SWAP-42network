/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:22:32 by 7arzan            #+#    #+#             */
/*   Updated: 2023/02/04 12:03:45 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker/checker.h>

int	is_number(const char *nb)
{
	while (*nb)
	{
		if (*nb == '-' || *nb == '+')
			nb++;
		else if (!is_digit(*nb))
			return (0);
		nb++;
	}
	return (1);
}

int	is_duplicated(int stack[], int position, int i)
{
	while (position >= 0)
	{
		if (stack[position] == i)
			return (0);
		position--;
	}
	return (1);
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

int	make_stack(int ac, char *av[], int stack[])
{
	int	a;
	int	b;

	a = 0;
	b = ac - 1;
	while (a < b)
	{
		if (ft_atoi(av[b - a]) >= 2147483648)
			return (-1);
		stack[a] = ft_atoi(av[b - a]);
		if (!is_duplicated(stack, (a - 1), stack[a]) || !is_number(av[b - a]))
			return (-1);
		a++;
	}
	return (a);
}

int	validation_instruction(char *str)
{
	if ((ft_strncmp(str, "pa", 2) == 0) || (ft_strncmp(str, "pb", 2) == 0)
		|| (ft_strncmp(str, "sa", 2) == 0) || (ft_strncmp(str, "sb", 2) == 0)
		|| (ft_strncmp(str, "ra", 2) == 0) || (ft_strncmp(str, "rb", 2) == 0)
		|| (ft_strncmp(str, "rra", 2) == 0) || (ft_strncmp(str, "rrb", 2) == 0))
		return (1);
	else
		return (0);
}
