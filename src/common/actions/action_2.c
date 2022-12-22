/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 03:03:57 by 7arzan            #+#    #+#             */
/*   Updated: 2022/12/04 03:09:49 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <common/common.h>

void	rev_rotate_a(t_mem *mem)
{
	put_bottom_to_top(&(mem->a));
	if (mem->print)
		ft_putstr("rra");
}

void	rev_rotate_b(t_mem *mem)
{
	put_bottom_to_top(&(mem->b));
	if (mem->print)
		ft_putstr("rrb");
}

void	rev_rotate_b_a(t_mem *mem)
{
	put_bottom_to_top(&(mem->b));
	put_bottom_to_top(&(mem->a));
	if (mem->print)
		ft_putstr("rrr");
}

void	rotate_a(t_mem *mem)
{
	put_top_to_bottom(&(mem->a));
	if (mem->print)
		ft_putstr("ra");
}

void	rotate_b(t_mem *mem)
{
	put_top_to_bottom(&(mem->b));
	if (mem->print)
		ft_putstr("rb");
}
