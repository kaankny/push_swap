/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:45:14 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/12/06 15:35:50 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../libft/libft.h"
#include <stdlib.h>

void	ft_print_error(t_stacks *stack, int flag)
{
	if (flag >= 1 && stack->a_len > 0)
		free(stack->stack1);
	if (flag == 2 && stack->b_len > 0)
		free(stack->stack1);
	if (flag >= 0)
		free(stack);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	ft_free_all(t_stacks *stack, int flag)
{
	if (flag > 0 && stack->a_len > 0)
		free(stack->stack1);
	if (flag > 1 && stack->b_len > 0)
		free(stack->stack2);
	if (flag >= 0)
		free(stack);
	exit(0);
}
