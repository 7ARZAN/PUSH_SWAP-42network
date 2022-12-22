/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 7arzan <elakhfif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 05:00:18 by 7arzan            #+#    #+#             */
/*   Updated: 2022/12/04 05:02:14 by 7arzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <common/common.h>

void	read_instructions(t_mem *mem);
int		execute_action(char *name, t_list *mem);

#endif
