/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 02:46:28 by 7arzan            #+#    #+#             */
/*   Updated: 2022/12/04 02:52:43 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker/checker.h>

int	main(int argc, char **argv)
{
	t_mem	mem;

	mem.a = NULL;
	mem.b = NULL;
	mem_print = 0;
	if (argc <= 1)
		return (0);
	read_args(argc, argv, &mem);
	read_instructions(&mem);
	if (is_ordered(&mem))
		ft_putstr("KAYN A ZBI!");
	else
		ft_putstr("ACH KTKHWER AZBI?");
	clear_all(&mem);
	return (0);
}
