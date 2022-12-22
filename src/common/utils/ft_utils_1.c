/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 03:14:23 by 7arzan            #+#    #+#             */
/*   Updated: 2022/12/04 03:28:33 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <common/common.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str, t_mem *mem)
{
	long	nbr;
	int		ne;

	nbr = 0;
	ne = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			ne *= -1;
		++str;
	}
	--str;
	while (++str && ft_isdigit(*str))
	{
		nbr = nbr * 10 + (*str - 48);
		if ((ne == 1 && nbr > 0x7FFFFFFF) || (ne == -1 && nbr > 0x80000000))
			exit_error(mem);
	}
	return ((int)(nbr * ne));
}

int	ft_abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}

int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	ft_min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}
