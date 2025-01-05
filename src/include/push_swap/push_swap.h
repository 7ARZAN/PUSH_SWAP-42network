/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:54:37 by 7arzan            #+#    #+#             */
/*   Updated: 2025/01/05 06:11:00 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_calculation
{
	int	min;
	int	max;
	int	next;
}		t_calculation;

void	ra_or_rra(int *stack, int len, int max);
void	rx(int *stack, int len);
void	rrx(int *stack, int len);
void	rb_or_rrb(int *stack, int len_b, int max);
void	sx(int *stack, int len);
void	is_valid(int ac, char **av);
// checking if args are valid !
void	is_duplicated(int *stack, int len);
// checking if we have any double !
void	make_stack(int len, int *stack_a, char **av); // we create stack here !
int		is_middle(int *stack, int len_a, int middle);
// we check if is middle here !
void	speed_is_life(int *a, int *b, int len);
// choosing witch sort we will use !
int		main(int ac, char **av);
int		calculate_position(int *stack, int middle, int len_a, int len);
// where am i?
int		find_middle(int *stack, int len_a, int len);
// oh yeah i found the middle baby !
void	sort_to_end(int *a, int *b, int len);
//sort bigger !
int		sort_b_to_a(int *stack, int len_b, int i, int j);
// sort from stack b to stack a !
void	sort_to_a(int *stack, int len_b);
// sort to Stack A !
void	sort_smaller(int *a, int len);
void	sort_three(int *a);
void	sort_five(int *a, int len);
int		ft_atoi(const char *str);
int		ft_ato1(const char *str, int *list);
size_t	ft_strlen(const char *s);
int		ft_isdigit(int c);
int		pick_divider(int len, int len_a, int smaller);
int		stack_size(int ac, char **av);
int		is_ordered(int *stack, int len);
int		get_biggest_nb(int *stack, int len);
int		get_next_biggest_nb(int *stack, int len);
int		get_smallest_nb(int *stack, int len);
void	error(int *list);

#endif
