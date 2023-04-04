/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 04:20:27 by 7arzan            #+#    #+#             */
/*   Updated: 2023/03/29 20:48:40 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap/push_swap.h>

int	main(int ac, char **av)
{
	int	*a;
	int	*b;
	int	stack_len;

	if (ac < 2)
		return (0);
	is_valid(ac, av);
	stack_len = stack_size(ac, av);
	a = (int *)malloc(sizeof(int) * (stack_len));
	make_stack(stack_len, a, av);
	b = (int *)malloc((stack_len) * sizeof(int));
	if (is_ordered(a, stack_len) == 0)
		speed_is_life(a, b, stack_len);
	free(a);
	free(b);
	return (0);
}

void	error(int *list)
{
	write(2, "Error!\n", 7);
	free(list);
	exit(1);
}
