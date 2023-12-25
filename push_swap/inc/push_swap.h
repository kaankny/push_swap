/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:20:29 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/12/09 15:51:23 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stacks
{
	int	*stack1;
	int	*stack2;
	int	a_len;
	int	b_len;
}	t_stacks;

void	free_all(char **split, t_stacks *stack, int n, int fl);
void	ft_print_error(t_stacks *stack, int flag);
void	ft_free_all(t_stacks *stack, int flag);
void	create_stacks(t_stacks *stack, int count);
void	init_stacks(int ac, char **av, t_stacks *stack);
int		*ft_reverse_arr(int arr_len, int *arr);
int		ft_min_num(int num1, int num2);
int		ft_check_decimal(char *str);
void	ft_check_all(int ac, char **av);
char	**ft_check_av(int ac, char **av, t_stacks *stack);
void	ft_check_repeat(t_stacks *stack);
int		ft_is_whitespace(char c);
void	ft_check_min_max(char **p, char *str, t_stacks *stack);
int		ft_check_sorted(int arr_len, int *arr);
void	ft_check_sign(char **str, t_stacks *stack);
void	ft_sort_three(t_stacks *stack);
void	ft_sort_five(t_stacks *stack);
void	ft_sort_stack(t_stacks *stacks);
int		ft_find_min_num_index(int arr_len, int *arr);
int		ft_abs(int num);
void	sa(t_stacks *stack);
void	sb(t_stacks *stack);
void	pa(t_stacks *stack);
void	pb(t_stacks *stack);
void	ra(t_stacks *stack, int flag);
void	rb(t_stacks *stack, int flag);
void	rra(t_stacks *stack, int flag);
void	rrb(t_stacks *stack, int flag);

#endif
