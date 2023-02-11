/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:41:53 by 7arzan            #+#    #+#             */
/*   Updated: 2023/02/11 18:01:35 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker/checker.h>
#include <string.h>

void	tester(int sizea, int sizeb, int ac)
{
	char	*buffer;

	buffer = get_next_line(0);
	while (buffer != NULL)
	{
		if (validation_instruction(buffer) == 0)
		{
			write(2, "ERROR\n", 6);
			free(buffer);
			exit(1);
		}
		if (ft_strncmp(buffer, "s", 1) == 0)
			do_swap_sa_sb(buffer, sizea, sizeb);
		else if (ft_strncmp(buffer, "r", 1) == 0)
			do_rotate_ra_rb(buffer, sizea, sizeb);
		else
		{
			sizea = do_push_pa_pb(buffer, sizea, sizeb);
			sizeb = (ac - 1) - sizea;
		}
		free(buffer);
		buffer = get_next_line(0);
	}
	free(buffer);
}

int	main(int ac, char *av[])
{
	int	sizea;
	int	sizeb;

	s_check.stack_a = calloc(ac, sizeof(int));
	s_check.stack_b = calloc(ac, sizeof(int));
	sizea = make_stack(av, s_check.stack_a, ac);
	if (sizea < 0)
	{
		free(s_check.stack_a);
		free(s_check.stack_b);
		write(2, "ERROR\n", 6);
		return (-1);
	}
	sizeb = (ac - 1) - sizea;
	tester(sizea, sizeb, ac);
	if (is_sorted(s_check.stack_a, sizea) && ac > 1)
		write(1, "OK\n", 3);
	else if (!is_sorted(s_check.stack_a, sizea) && ac > 1)
		write(1, "KO\n", 3);
	free(s_check.stack_a);
	free(s_check.stack_b);
	return (0);
}
