/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 04:20:27 by 7arzan            #+#    #+#             */
/*   Updated: 2023/02/04 12:07:01 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap/push_swap.h>

int	main(int ac, char *av[])
{
	int	sizea;
	int	sizeb;

	t_stack.stack_a = ft_calloc(ac, sizeof(int));
	t_stack.stack_b = ft_calloc(ac, sizeof(int));
	if (!t_stack.stack_a || !t_stack.stack_b)
		return (-1);
	else if (ac > 1024 || ac == 1)
		return (1);
	sizea = make_stack(av, t_stack.stack_a, ac);
	if (sizea == -1)
		return (1);
	else if (is_sorted(t_stack.stack_a, sizea))
		return (0);
	sizeb = (ac - 1) - sizea;
	if (sizea == 2 || sizea == 3)
		sort_two_three(t_stack.stack_a, sizea);
	else if (sizea == 4 || sizea == 5)
		sort_five(t_stack.stack_a, t_stack.stack_b, sizea);
	else if (sizea > 5)
		sort_to_ends(t_stack.stack_a, t_stack.stack_b, sizea, sizeb);
	free(t_stack.stack_a);
	free(t_stack.stack_b);
}
