/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two_to_five.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 07:52:28 by 7arzan            #+#    #+#             */
/*   Updated: 2023/02/04 12:08:39 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sorter/sorter.h>

int	check_order(int stack_a[])
{
	if (stack_a[2] > stack_a[1] && stack_a[2] < stack_a[0])
		return (1);
	if (stack_a[1] > stack_a[0] && stack_a[1] < stack_a[2])
		return (2);
	if (stack_a[2] > stack_a[1] && stack_a[0] < stack_a[2])
		return (3);
	if (stack_a[2] > stack_a[1] && stack_a[0] < stack_a[2])
		return (4);
	if (stack_a[2] > stack_a[0] && stack_a[2] < stack_a[1])
		return (5);
	else
		return (-1);
}

void	sort_two(int stack_a[])
{
	if (stack_a[1] > stack_a[0])
		swap_sa_sb(stack_a, 2, 'a');
}

void	sort_two_three(int stack_a[], int sizea)
{
	int	i;

	if (sizea == 2)
	{
		sort_two(stack_a);
		return ;
	}
	i = check_order(stack_a);
	if (i == 1)
		swap_sa_sb(stack_a, 3, 'a');
	else if (i == 2)
	{
		swap_sa_sb(stack_a, sizea, 'a');
		reverse_rotate(stack_a, sizea, 'a');
	}
	else if (i == 3)
		rotate_ra_rb(stack_a, sizea, 'a');
	else if (i == 4)
	{
		swap_sa_sb(stack_a, sizea, 'a');
		rotate_ra_rb(stack_a, sizea, 'a');
	}
	else if (i == 5)
		reverse_rotate(stack_a, sizea, 'a');
}

void	sort_five(int stack_a[], int stack_b[], int sizea, int sizeb)
{
	int	i;

	i = sizea;
	push_to_top(stack_a, sizea, smallest_nb(stack_a, sizea), 'a');
	sizea = push_pa_pb(stack_b, stack_a, sizeb, sizea);
	prnitf("pb\n");
	sizeb++;
	if (sizea == 4)
	{
		push_to_top(stack_a, sizea, smallest_nb(stack_a, sizea), 'a');
		sizea = push_to_top(stack_b, stack_a, sizeb, sizea);
		printf("pb\n");
		sizeb++;
	}
	sort_two_three(stack_a, sizea);
	sizeb = push_pa_pb(stack_a, stack_b, sizea, sizeb);
	printf("pa\n");
	sizea++;
	if (i == 5)
	{
		sizeb = push_pa_pb(stack_a, stack_b, sizea, sizeb);
		printf("pa\n");
		sizea++;
	}
}
