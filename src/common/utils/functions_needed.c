/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_needed.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:39:37 by 7arzan            #+#    #+#             */
/*   Updated: 2023/03/18 14:44:25 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap/push_swap.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * sign);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	pick_divider(int len, int len_a, int smaller)
{
	if (len > 250 && len_a > 250)
	{
		if (smaller == len_a / 7)
			return (1);
	}
	else if (len > 149 || len_a < 11)
	{
		if (smaller == len_a / 5)
			return (1);
	}
	else if (len < 150 && len_a > 10)
	{
		if (smaller == len_a / 3)
			return (1);
	}
	return (0);
}

int	ft_ato1(const char *str, int *list)
{
	int	i;
	int	tmp;
	int	res;
	int	sign;

	i = 0;
	tmp = 0;
	res = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res == 214748364 && str[i] == '8' && sign == -1)
			return (-2147483648);
		res = res * 10 + str[i] - 48;
		i++;
		if (res < tmp)
		{
			write(1, "broblam\n", 8);
			free(list);
			exit(1);
		}
	}
	return (res * sign);
}
