/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:52:31 by 7arzan            #+#    #+#             */
/*   Updated: 2023/02/04 14:49:22 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTER_H
# define SORTER_H

# include <common/push_swap.h>

int		find_position(int stack_a[], int size, int nb);
void	instructions(int stack_a[], int stack_b[], int sizea, int sizeb);
int		next_to_sort_six(int stack_a[], int stack_b[], int sizea, int sizeb);
void	sort_to_ends(int stack_a[], int stack_b[], int sizea, int sizeb);
int		check_order(int stack_a[]);
void	sort_three(int stack_a[], int sizea);
void	sort_five(int stack_a[], int stack_b[], int sizea, int sizeb);
int		small_int(int stack[], int size);
int		big_int(int stack[], int size);

#endif
