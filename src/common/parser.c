/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 04:12:47 by 7arzan            #+#    #+#             */
/*   Updated: 2023/02/04 12:06:31 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap/push_swap.h>

int	make_stack(int ac, char *av[], int stack[])
{
	int	a;
	int	b;

	a = 0;
	b = ac - 1;
	while (a < b)
	{
		if (ft_atoi(av[b - a]) >= 2147483648)
		{
			write(1, "mochkila\n", 9);
			return (-1);
		}
		stack[a] = ft_atoi(av[b - a]);
		if (!is_duplicated(stack, (a - 1), stack[a]) || !is_number(av[b - a]))
		{
			write(2, "mochkila tany\n", 14);
			return (-1);
		}
		a++;
	}
	return (a);
}
