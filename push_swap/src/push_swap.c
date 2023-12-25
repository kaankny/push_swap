/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:55:17 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/12/07 15:35:18 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../inc/push_swap.h"
#include <stdlib.h>

int	ft_is_whitespace(char c)
{
	return (c == 32 || c == 9 || c == 10 || c == 1 || c == 12 || c == 13);
}

static void	ft_sort_list(t_stacks *stack)
{
	if (ft_check_sorted(stack->a_len, stack->stack1))
		ft_free_all(stack, 1);
	else if (stack->a_len == 2)
		sa(stack);
	else if (stack->a_len == 3)
		ft_sort_three(stack);
	else if (stack->a_len <= 5)
		ft_sort_five(stack);
	else
		ft_sort_stack(stack);
}

int	main(int ac, char **av)
{
	t_stacks	*stack;

	if (ac < 2)
		exit(0);
	ft_check_all(ac, av);
	stack = malloc(sizeof(t_stacks));
	if (!stack)
		ft_print_error(stack, -1);
	else
	{
		create_stacks(stack, ac - 1);
		init_stacks(ac, av, stack);
		ft_check_repeat(stack);
		ft_sort_list(stack);
		ft_free_all(stack, 2);
	}
	return (0);
}
