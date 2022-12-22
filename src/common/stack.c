/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 04:03:52 by 7arzan            #+#    #+#             */
/*   Updated: 2022/12/04 04:58:36 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <common/common.h>

void	push_init(t_list **stack, int value, int tag, t_mem *mem)
{
	t_list	*elem;
	t_list	*last;

	last = *stack;
	if (list_contains_value(*stack, value))
		exit_error(mem);
	elem = malloc(sizeof(t_list));
	if (!elem)
		exit_error(mem);
	elem->next = NULL;
	elem->next_sort = NULL;
	elem->value = value;
	elem->index = tag;
	if (last == NULL)
	{
		*stack = elem;
		return ;
	}
	while (last->next)
		last = last->next;
	last->next = elem;
	last->next_sort = elem;
}

void	swap_private(t_list **stack)
{
	t_list	*tmp;
	t_list	*third;

	if (!*stack || !(*stack)->next)
		return ;
	third = (*stack)->next->next;
	tmp = *stack;
	*stack = (*stack)->next;
	(*stack)->next = tmp;
	tmp->next = third;
}

void	push_top_x1_on_x2(t_list **x1, t_list **x2)
{
	t_list	*top;

	if (!*x1)
		return ;
	top = *x1;
	*x1 = top->next;
	if (*x2)
		top->next = (*x2);
	else
		top->next = NULL;
	*x2 = top;
}

void	put_top_to_bottom(t_list **x)
{
	t_list	*top;
	t_list	*tmp;

	if (!*x || !(*x)->next)
		return ;
	top = *x;
	*x = (*x)->next;
	tmp = *x;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = top;
	top->next = NULL;
}

void	put_bottom_to_top(t_list **x)
{
	t_list	*last;
	t_list	*prev;

	if (!*x || !(*x)->next)
		return ;
	last = *x;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	last->next = (*x);
	*x = last;
	prev->next = NULL;
}
