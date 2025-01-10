/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:04:51 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/10 13:42:18 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	size_node(t_node **stack_a)
{
	t_node	*stack;
	int		i;

	stack = *stack_a;
	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

void	set_set(t_node *stack_a, t_node **stack, int *tmp, int *i)
{
	while (stack_a)
	{
		if (*tmp == (*stack)->data)
		{
			(*stack)->index = *i;
			break ;
		}
		*stack = (*stack)->next;
	}
}

void	set_mois_un(t_node **stack)
{
	while ((*stack))
	{
		(*stack)->index = -1;
		(*stack) = (*stack)->next;
	}
}

t_node	*set_index(t_node *stack_a)
{
	int		i;
	int		size;
	int		tmp;
	t_node	*stack;

	size = size_node(&stack_a);
	i = 0;
	stack = stack_a;
	set_mois_un(&stack);
	while (i < size)
	{
		stack = stack_a;
		tmp = 2147483647;
		while (stack)
		{
			if (tmp > stack->data && stack->index == -1)
				tmp = stack->data;
			stack = stack->next;
		}
		stack = stack_a;
		set_set(stack_a, &stack, &tmp, &i);
		i++;
	}
	return (stack_a);
}

void	free_stack(t_node *stack)
{
	t_node	*tmp;

	while (stack)
	{
		tmp = (stack)->next;
		free(stack);
		stack = tmp;
	}
}
