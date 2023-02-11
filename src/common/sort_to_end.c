/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_to_end.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:15:13 by 7arzan            #+#    #+#             */
/*   Updated: 2023/02/10 15:56:40 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap/push_swap.h>

int	find_position(int stack_a[], int size, int nb)
{
	int	position;

	size--;
	position = size;
	if (stack_a[size] > nb && stack_a[0] < nb)
		return (size);
	while (stack_a[position] > nb || stack_a[position - 1] < nb)
		position--;
	return (position - 1);
}

void	instructions(int stack_a[], int stack_b[], int sizea, int sizeb)
{
	int	position;
	int	position_a;
	int	position_b;
	int	actions;
	int	tmp;

	actions = sizeb + sizea;
	tmp = sizeb - 1;
	while (tmp >= 0)
	{
		position = find_position(stack_a, sizea, stack_b[tmp]);
		if (calculate_instructions(position, tmp, sizea, sizeb) < actions)
		{
			actions = calculate_instructions(position, tmp, sizea, sizeb);
			position_b = tmp;
			position_a = position;
		}
		tmp--;
	}
	push_to_top(stack_a, sizea, position_a, 'a');
	push_to_top(stack_b, sizeb, position_b, 'b');
}

int	next_to_sort_six(int stack_a[], int stack_b[], int sizea, int *sizeb)
{
	sizea = push_pa_pb(stack_b, stack_a, *sizeb, sizea);
	write(1, "pb\n", 3);
	*sizeb += 1;
	return (sizea);
}

void	sort_to_ends(int stack_a[], int stack_b[], int sizea, int sizeb)
{
	int	cmp;

	cmp = sizea + 10;
	while (cmp > 0 && !is_sorted(stack_a, sizea))
	{
		if ((stack_a[sizea - 1] < stack_a[sizea - 2]
				&& stack_a[sizea - 1] > stack_a[0])
			|| stack_a[sizea - 1] == small_int(stack_a, sizea)
			|| stack_a[sizea - 1] == big_int(stack_a, sizea))
			rotate_ra_rb(stack_a, sizea, 'a');
		else
			sizea = next_to_sort_six(stack_a, stack_b, sizea, &sizeb);
		cmp--;
	}
	while (sizeb > 0)
	{
		instructions(stack_a, stack_b, sizea, sizeb);
		sizeb = push_pa_pb(stack_a, stack_b, sizea, sizeb);
		sizea++;
		write(1, "pa\n", 3);
	}
	push_to_top(stack_a, sizea, smallest_nb(stack_a, sizea), 'a');
}
