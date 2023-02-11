/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:54:37 by 7arzan            #+#    #+#             */
/*   Updated: 2023/02/11 20:50:45 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

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
int		make_stack(char *av[], int stack[], int ac);
int		main(int ac, char *av[]);
int		is_number(const char *nb);
int		is_duplicated(int stack[], int index, int i);
int		smallest_nb(int stack[], int size);
int		is_sorted(int a[], int sizea);
void	push_to_top(int stack[], int size, int position, char character);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
long		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
//void	ft_calloc(size_t count, size_t size);
int		ft_isdigit(int c);
int		find_position(int stack_a[], int size, int nb);
void	instructions(int stack_a[], int stack_b[], int sizea, int sizeb);
int		next_to_sort_six(int stack_a[], int stack_b[], int sizea, int *sizeb);
void	sort_to_ends(int stack_a[], int stack_b[], int sizea, int sizeb);
int		check_order(int stack_a[]);
void	sort_three(int stack_a[], int sizea);
void	sort_five(int stack_a[], int stack_b[], int sizea, int sizeb);
int		small_int(int stack[], int size);
int		big_int(int stack[], int size);
void	sort_two_three(int stack_a[], int sizea);

#endif
