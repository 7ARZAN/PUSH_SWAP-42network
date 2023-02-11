/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 04:20:27 by 7arzan            #+#    #+#             */
/*   Updated: 2023/02/10 16:00:37 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap/push_swap.h>

int	main(int ac, char *av[])
{
	int	sizea;
	int	sizeb;

	t_stacks.stack_a = calloc(ac, sizeof(int));
	t_stacks.stack_b = calloc(ac, sizeof(int));
	if (!t_stacks.stack_a || !t_stacks.stack_b)
		return (-1);
	else if (ac > 1024 || ac == 1)
		return (1);
	sizea = make_stack(av, t_stacks.stack_a, ac);
	if (sizea == -1)
		return (1);
	else if (is_sorted(t_stacks.stack_a, sizea))
		return (0);
	sizeb = (ac - 1) - sizea;
	if (sizea == 2 || sizea == 3)
		sort_two_three(t_stacks.stack_a, sizea);
	else if (sizea == 4 || sizea == 5)
		sort_five(t_stacks.stack_a, t_stacks.stack_b, sizea, sizeb);
	else if (sizea > 5)
		sort_to_ends(t_stacks.stack_a, t_stacks.stack_b, sizea, sizeb);
	free(t_stacks.stack_a);
	free(t_stacks.stack_b);
}
