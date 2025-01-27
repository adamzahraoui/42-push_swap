/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_satck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:28:25 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/27 10:09:57 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5_stack(t_node **stack_a)
{
	int		len;
	t_node	*stack_b;
	t_node	*stack;

	stack = *stack_a;
	stack_b = NULL;
	len = size_node(stack_a);
	while (len--)
	{
		if ((stack)->index == 0 || (stack)->index == 1)
			push_stack_b(&stack, &stack_b);
		else
			rotat_stack_a(&stack);
	}
	sort_3_stack(&stack);
	push_stack_a(&stack, &stack_b);
	push_stack_a(&stack, &stack_b);
	if ((stack)->index > (stack)->next->index)
		swap_stack_a(&stack);
}

void	sort_3_stack(t_node **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->index;
	second = (*stack_a)->next->index;
	third = (*stack_a)->next->next->index;
	if (first > second && first < third)
		swap_stack_a(stack_a);
	else if (first > second && first > third && second < third)
		rotat_stack_a(stack_a);
	else if (first > second && first > third && second > third)
	{
		swap_stack_a(stack_a);
		rr_a(stack_a);
	}
	else if (second > first && second > third && first > third)
		rr_a(stack_a);
	else if (second > first && third > first && second > third)
	{
		swap_stack_a(stack_a);
		rotat_stack_a(stack_a);
	}
}

void	sort_stack(t_node **stack_a)
{
	t_node	*stack;
	t_node	*stack_b;
	int		len;

	len = size_node(stack_a);
	stack_b = NULL;
	stack = *stack_a;
	if (wach_a_mrtba(stack_a, len))
		return (free_stack(*stack_a), free_stack(stack_b));
	else if (len == 2)
	{
		if (stack->data > stack->next->data)
			swap_stack_a(stack_a);
	}
	else if (len == 3)
		sort_3_stack(stack_a);
	else if (len == 5)
		sort_5_stack(stack_a);
	else
		sort_big_stack(stack_a, &stack_b, len);
	free_stack(*stack_a);
	free_stack(stack_b);
}
