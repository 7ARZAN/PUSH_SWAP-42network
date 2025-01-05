/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:49:11 by 7arzan            #+#    #+#             */
/*   Updated: 2025/01/05 06:00:01 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

struct	s_check
{
	int	*stack_a;
	int	*stack_b;
}		s_check;

size_t	ft_atoi(const char *str);
int		ft_isdigit(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		is_sorted(int a[], int sizea);
int		make_stack(char *av[], int stack[], int ac);
void	tester(int sizea, int sizeb, int ac);
int		main(int ac, char *av[]);
void	checker_sa_sb(int stack[], int size);
void	checker_ra_rb(int stack[], int size);
void	checker_rra_rrb(int stack[], int size);
int		checker_pa_pb(int stack_a[], int stack_b[], int size_1, int size_2);
void	do_swap_sa_sb(char *buffer, int sizea, int sizeb);
int		do_push_pa_pb(char *buffer, int sizea, int sizeb);
void	do_rotate_ra_rb(char *buffer, int sizea, int sizeb);
int		validation_instruction(char *str);
char	*ft_substr(const char *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);

#endif
