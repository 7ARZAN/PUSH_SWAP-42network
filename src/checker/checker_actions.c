/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_actions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:57:28 by 7arzan            #+#    #+#             */
/*   Updated: 2023/02/04 12:02:49 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker/checker.h>

void	checker_sa_sb(int stack[], int size)
{
	int	tmp;

	if (size < 2)
		return ;
	size--;
	tmp = stack[size];
	stack[size] = stack[size - 1];
	stack[size - 1] = tmp;
}

void	checker_ra_rb(int stack[], int size)
{
	int	tmp;

	if (size < 2)
		return ;
	size--;
	tmp = stack[size];
	while (size > 0)
	{
		stack[size] = stack[size - 1];
		size--;
	}
	stack[0] = tmp;
}

void	checker_rra_rrb(int stack[], int size)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack[0];
	if (size < 2)
		return ;
	size--;
	while (i < size)
	{
		stack[i] = stack[size + 1];
		i++;
	}
	stack[i] = tmp;
}

int	checker_pa_pb(int stack_a[], int stack_b[], int size_1, int size_2)
{
	size_2--;
	stack_a[size_1] = stack_b[size_2];
	stack_b[size_2] = 0;
	return (size_2);
}
