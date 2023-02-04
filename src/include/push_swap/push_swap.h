/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:54:37 by 7arzan            #+#    #+#             */
/*   Updated: 2023/02/04 15:03:58 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

struct s_stacks
{
	int	*stack_a;
	int	*stack_b;
}		t_stacks;

int		calculate_instructions(int position_a, int position_b, int sizea,
			int sizeb);
void	swap_sa_sb(int stack[], int size, char character);
void	rotate_ra_rb(int stack[], int size, char character);
void	reverse_rotate(int stack[], int size, char character);
int		push_pa_pb(int stack1[], int stack2[], int size1, int size2);
int		make_stack(int ac, char *av[], int stack[]);
int		main(int ac, char *av[]);
int		is_number(const char *nb);
int		is_duplicated(int stack[], int index, int i);
int		smallest_nb(int stack[], int size);
int		is_sorted(int a[], int sizea);
void	push_to_top(int stack[], int size, int position, char character);

#endif
