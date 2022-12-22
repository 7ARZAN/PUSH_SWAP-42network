/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   looper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:08:46 by 7arzan            #+#    #+#             */
/*   Updated: 2022/12/04 17:18:16 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sorter/sorter.h>

int	loop_list(t_list *list, t_list *start, int set)
{
	t_list	*loop;
	int		max_tag;
	int		count;

	max_tag = -1;
	count = 0;
	loop = start;
	while (loop)
	{
		if (set)
			loop->keep = 0;
		if (loop->index > max_tag)
		{
			max_tag = loop->index;
			count++;
			if (set)
				loop->keep = 1;
		}
		loop = loop->next;
		if (loop == NULL)
			loop = list;
		if (loop == start)
			break ;
	}
	return (count);
}

int	find_biggest_loop(t_list *start, int set)
{
	t_list	*max_keep;
	t_list	*t;
	int		max;
	int		count;

	max = 0;
	t = start;
	while (t)
	{
		count = loop_list(start, t, 0);
		if (count > max)
		{
			max = count;
			max_keep = t;
		}
		t = t->next;
	}
	if (set)
		loop_list(start, max_keep, 1);
	return (max);
}
