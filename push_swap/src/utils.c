/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:49:29 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/12/07 13:53:14 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include <stdlib.h>

int	*ft_reverse_arr(int arr_len, int *arr)
{
	int	i;
	int	temp;

	i = 0;
	while (i < arr_len / 2)
	{
		temp = arr[i];
		arr[i] = arr[arr_len - i - 1];
		arr[arr_len - i - 1] = temp;
		i++;
	}
	return (arr);
}

int	ft_abs(int num)
{
	if (num < 0)
		return (-num);
	return (num);
}

int	ft_min_num(int num1, int num2)
{
	if (ft_abs(num1) < ft_abs(num2))
		return (num1);
	return (num2);
}

void	close(int ac)
{
	if (ac == 2)
		exit(0);
	else
		ft_print_error(0, -1);
}

void	ft_check_all(int ac, char **av)
{
	int	i;
	int	j;
	int	fl;

	fl = 0;
	i = 0;
	while (++i < ac)
	{
		j = -1;
		if (av[i][0] == '\0')
			close(ac);
		while (av[i][++j])
			if (!ft_is_whitespace(av[i][j]))
				fl = 1;
	}
	if (fl == 0)
		close(ac);
}
