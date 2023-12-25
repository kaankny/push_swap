/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:49:50 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/12/09 15:50:46 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../libft/libft.h"
#include <stdlib.h>

void	free_all(char **split, t_stacks *stack, int n, int fl)
{
	int	i;

	i = -1;
	if (fl)
	{
		while (split[++i])
			free(split[i]);
	}
	free(split);
	if (n)
		ft_print_error(stack, n);
}

void	ft_check_sign(char **str, t_stacks *stack)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if ((str[i][0] == '-' || str[i][0] == '+') && !str[i][1])
		{
			free_all(str, stack, 0, 1);
			ft_print_error(stack, 1);
		}
		j = 1;
		while (str[i][j])
		{
			if (str[i][j] == '-' || str[i][j] == '+')
			{
				free_all(str, stack, 0, 1);
				ft_print_error(stack, 1);
			}
			j++;
		}
		i++;
	}
}

void	create_stacks(t_stacks *stack, int count)
{
	stack->stack1 = malloc(sizeof(int) * count);
	if (stack->stack1 == 0)
		ft_print_error(stack, 1);
	stack->a_len = count;
	stack->b_len = 0;
}

void	init_stacks(int ac, char **av, t_stacks *stack)
{
	int		i;
	char	**p;

	p = ft_check_av(ac, av, stack);
	if (ac == 2)
	{
		free(stack->stack1);
		i = 0;
		while (p[i])
			i++;
		stack->stack1 = malloc(sizeof(int) * i);
	}
	i = 0;
	while (p[i])
	{
		ft_check_min_max(p, p[i], stack);
		stack->stack1[i] = ft_atoi(p[i]);
		i++;
	}
	stack->a_len = i;
	if (ac == 2)
		free_all(p, stack, 0, 1);
	ft_reverse_arr(stack->a_len, stack->stack1);
}
