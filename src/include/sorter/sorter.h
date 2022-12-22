/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 06:04:28 by 7arzan            #+#    #+#             */
/*   Updated: 2022/12/04 06:26:58 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTER_H
# define SORTER_H

# include <common/common.h>

t_list	*closest_in_group(t_list *list, int cur_group, int group_sz);
void	prepare_five(t_mem *mem);
void	tag_list(t_list *start, t_mem *mem);
void	double_rotate(t_mem *mem, int *rot_a, int *rot_b);
void	rotate(t_mem *mem, int rot_a, int rot_b);
void	init_resolve(t_mem *mem);
void	calculate_b_rotation(t_mem *m, int max_dist, int *rot_a, int *rot_b);
void	populate_b(t_mem *m);
void	resolve(t_mem *m, int cur_group);
int		has_tag(t_list *list, int tag);
int		loop_list(t_list *list, t_list *start, int set);
int		find_biggest_loop(t_list *start, int set);
int		distance_to_top(t_list *a, int tag);
int		distance_to_tag(int tag, int size);
int		can_swap(t_list *list);
int		insert_distance(t_list *list, int t, int size);

#endif
