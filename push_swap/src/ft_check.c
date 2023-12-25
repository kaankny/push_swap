/* ************************************************************************** */
/*					                                                          */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:17:34 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/12/06 15:19:57 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../libft/libft.h"

char	**ft_check_av(int ac, char **av, t_stacks *stack)
{
	int		i;
	int		j;
	char	**s;

	if (ac == 2)
	{
		i = -1;
		while (av[1][++i])
			if (!ft_isdigit(av[1][i]) && av[1][i] != ' '
				&& av[1][i] != '-' && av[1][i] != '+')
				ft_print_error(stack, 1);
		s = ft_split(av[1], ' ');
		return (ft_check_sign(s, stack), s);
	}
	i = 1;
	while (i < ac)
	{
		j = -1;
		while (av[i][++j])
			if (!ft_isdigit(av[i][j])
				&& av[i][j] != '-' && av[i][j] != '+')
				ft_print_error(stack, 1);
		i++;
	}
	return (ft_check_sign(av + 1, stack), av + 1);
}

void	ft_check_repeat(t_stacks *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->a_len)
	{
		j = 0;
		while (j < stack->a_len)
		{
			if (stack->stack1[i] == stack->stack1[j] && i != j)
				ft_print_error(stack, 1);
			j++;
		}
		i++;
	}
}

void	ft_check_min_max(char **p, char *str, t_stacks *stack)
{
	int			sign;
	long int	result;
	int			i;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	if (result * sign > 2147483647 || result * sign < -2147483648)
	{
		free_all(p, stack, 0, 1);
		ft_print_error(stack, 2);
	}
}

int	ft_check_sorted(int arr_len, int *arr)
{
	int	i;
	int	j;

	i = 0;
	if (arr_len == 0)
		return (0);
	while (i < arr_len - 1)
	{
		j = i + 1;
		while (j < arr_len)
		{
			if (arr[i] < arr[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_decimal(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && str[i] != '-' && str[i] != '+')
			return (0);
		i++;
	}
	return (1);
}
