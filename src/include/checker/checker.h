/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:49:11 by 7arzan            #+#    #+#             */
/*   Updated: 2023/02/04 15:05:15 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <common/push_swap.h>

struct s_check
{
	int	*stack_a;
	int	*stack_b;
}		s_check;

void	tester(int sizea, int sizeb, int ac);
int		main(int ac, char *av[]);
void	checker_sa_sb(int stack[], int size);
void	checker_ra_rb(int stack[], int size);
void	checker_rra_rrb(int stack[], int size);
int		checker_pa_pb(int stack_a[], int stack_b[], int size_1, int size_2);
void	do_swap_sa_sb(char *buffer, int sizea, int sizeb);
int		do_push_pa_pb(char *buffer, int sizea, int sizeb);
void	do_rotate_ra_rb(char *buffer, int sizea, int sizeb);
int		validation_instruction(char *str);

#endif
