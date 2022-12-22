/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 03:10:06 by 7arzan            #+#    #+#             */
/*   Updated: 2022/12/04 03:13:49 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <common/common.h>

void	rotate_b_a(t_mem *mem)
{
	put_top_to_bottom(&(mem->a));
	put_top_to_bottom(&(mem->b));
	if (mem->print)
		ft_putstr("rr");
}

void	ft_puterr(char *str)
{
	int		i;
	char	n;

	i = 0;
	while (str[i])
		i++;
	n = '\n';
	write(2, str, i);
	write(2, &n, 1);
}
