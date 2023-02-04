/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_instructions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:48:05 by 7arzan            #+#    #+#             */
/*   Updated: 2023/02/04 12:03:14 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker/checker.h>

void	do_swap_sa_sb(char *buffer, int sizea, int sizeb)
{
	if (ft_strncmp(buffer, "sa", 2) == 0)
		checker_sa_sb(s_check.stack_a, sizea);
	else if (ft_strncmp(buffer, "sb", 2) == 0)
		checker_sa_sb(s_check.stack_b, sizeb);
}

int	do_push_pa_pb(char *buffer, int sizea, int sizeb)
{
	if (ft_strncmp(buffer, "pa", 2) == 0)
	{
		sizeb = checker_pa_pb(s_check.stack_a, s_check.stack_b, sizea, sizeb);
		sizea++;
	}
	else if (ft_strncmp(buffer, "pb", 2) == 0)
	{
		sizea = checker_pa_pb(s_check.stack_b, s_check.stack_a, sizeb, sizea);
		sizeb++;
	}
	return (sizea);
}

void	do_rotate_ra_rb(char *buffer, int sizea, int sizeb)
{
	if (ft_strncmp(buffer, "rra", 2) == 0)
		checker_rra_rrb(s_check.stack_a, sizea);
	else if (ft_strncmp(buffer, "rrb", 2) == 0)
		checker_rra_rrb(s_check.stack_b, sizeb);
	if (ft_strncmp(buffer, "ra", 2) == 0)
		checker_ra_rb(s_check.stack_a, sizea);
	else if (ft_strncmp(buffer, "rb", 2) == 0)
		checker_ra_rb(s_check.stack_b, sizeb);
}
