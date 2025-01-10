/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:23:09 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/10 11:51:44 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_min(t_node **stack_a)
{
	t_node	*stack;
	t_node	*min;

	min = *stack_a;
	stack = *stack_a;
	while (stack)
	{
		if (stack->data < min->data)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

t_node	*find_max(t_node **stack_a)
{
	t_node	*stack;
	t_node	*max;

	max = *stack_a;
	stack = *stack_a;
	while (stack)
	{
		if (stack->data > max->data)
			max = stack;
		stack = stack->next;
	}
	return (max);
}

int	wach_mrtb(t_node **stack_a)
{
	t_node	*stack;

	stack = *stack_a;
	while (stack->next)
	{
		if (stack->data > stack->next->data)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	wach_a_mrtba(t_node **stack_a, int len)
{
	int	i;

	i = size_node(stack_a);
	if (i != len)
		return (0);
	if (wach_mrtb(stack_a) == 0)
		return (0);
	return (1);
}

t_node	*ft_lstlast(t_node *lst)
{
	if (!lst)
		return (lst);
	while (lst->next != 0)
		lst = lst->next;
	return (lst);
}
