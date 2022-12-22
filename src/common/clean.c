/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 04:03:42 by 7arzan            #+#    #+#             */
/*   Updated: 2022/12/04 04:39:45 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <common/common.h>

void	clear_all(t_mem *mem)
{
	ft_free_list(&(mem->a));
	ft_free_list(&(mem->b));
}

void	exit_error(t_mem *mem)
{
	ft_puterr("MOCHKIL ABRO");
	clear_all(mem);
	exit(EXIT_FAILURE);
}
