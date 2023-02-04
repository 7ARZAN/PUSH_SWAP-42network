/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deal_with_instructions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 04:39:03 by 7arzan            #+#    #+#             */
/*   Updated: 2023/02/04 12:04:50 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap/push_swap.h>

int	calculate_instructions(int position_a, int position_b, int sizea, int sizeb)
{
	int	nb_instructions;

	nb_instructions = 0;
	if (position_a >= sizea / 2)
		nb_instructions = (sizea - 1) - position_a;
	else if (position_a < sizea / 2)
		nb_instructions = position_a + 1;
	if (position_b >= sizeb / 2)
		nb_instructions += (sizeb - 1) - position_b;
	else if (position_b < sizeb / 2)
		nb_instructions += position_b + 1;
	return (nb_instructions);
}
