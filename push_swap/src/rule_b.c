/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:33:59 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/12/09 10:33:14 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../inc/push_swap.h"

void	ra(t_stacks *st, int fl)
{
	int	temp;

	if (st -> a_len <= 1)
		return ;
	temp = st -> stack1[st->a_len - 1];
	ft_memmove(st -> stack1 + 1, st -> stack1, sizeof(int) * (st->a_len - 1));
	st -> stack1[0] = temp;
	if (fl)
		ft_putstr_fd("ra\n", 1);
}

void	rb(t_stacks *st, int fl)
{
	int	temp;

	if (st -> b_len <= 1)
		return ;
	temp = st -> stack2[st->b_len - 1];
	ft_memmove(st -> stack2 + 1, st -> stack2, sizeof(int) * (st->b_len - 1));
	st -> stack2[0] = temp;
	if (fl)
		ft_putstr_fd("rb\n", 1);
}
