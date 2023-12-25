/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:07:11 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/12/09 10:33:11 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../inc/push_swap.h"

void	sa(t_stacks *stack)
{
	int	temp;

	if (stack -> a_len <= 1)
		return ;
	temp = stack -> stack1[stack -> a_len - 1];
	stack -> stack1[stack ->a_len - 1] = stack -> stack1[stack -> a_len - 2];
	stack -> stack1[stack -> a_len - 2] = temp;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stacks *stack)
{
	int	temp;

	if (stack -> b_len <= 1)
		return ;
	temp = stack -> stack2[stack->b_len - 1];
	stack -> stack2[stack->b_len - 1] = stack -> stack2[stack->b_len - 2];
	stack -> stack2[stack->b_len - 2] = temp;
	ft_putstr_fd("sb\n", 1);
}

void	pa(t_stacks *stack)
{
	int	*new_a;
	int	*new_b;

	if (stack->b_len == 0)
		return ;
	new_a = malloc(sizeof(int) * (stack->a_len + 1));
	if (!new_a)
		ft_print_error(stack, 2);
	ft_memcpy(new_a, stack->stack1, sizeof(int) * stack->a_len);
	new_a[stack->a_len] = stack->stack2[stack->b_len - 1];
	if (stack -> a_len > 0)
		free (stack->stack1);
	stack->stack1 = new_a;
	stack->a_len++;
	stack->b_len--;
	if (stack->b_len == 0)
		free(stack->stack2);
	else
	{
		new_b = malloc(sizeof(int) * (stack->b_len));
		ft_memcpy(new_b, stack->stack2, sizeof(int) * (stack->b_len));
		free(stack->stack2);
		stack->stack2 = new_b;
	}
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_stacks *stack)
{
	int	*new_a;
	int	*new_b;

	if (stack->a_len == 0)
		return ;
	new_b = malloc(sizeof(int) * (stack->b_len + 1));
	if (!new_b)
		ft_print_error(stack, 2);
	ft_memcpy(new_b, stack->stack2, sizeof(int) * stack->b_len);
	new_b[stack->b_len] = stack->stack1[stack->a_len - 1];
	if (stack->b_len > 0)
		free (stack->stack2);
	stack->stack2 = new_b;
	stack->b_len++;
	stack->a_len--;
	if (stack->a_len == 0)
		free(stack->stack1);
	else
	{
		new_a = malloc(sizeof(int) * (stack->a_len));
		ft_memcpy(new_a, stack->stack1, sizeof(int) * (stack->a_len));
		free(stack->stack1);
		stack->stack1 = new_a;
	}
	ft_putstr_fd("pb\n", 1);
}
