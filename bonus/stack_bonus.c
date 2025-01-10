/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:55:23 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/10 17:18:57 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

int	str_cmp(char *str, char *dest)
{
	int	i;

	i = 0;
	while (str[i] && dest[i] && dest[i] == str[i])
		i++;
	return (str[i] - dest[i]);
}

int	sort_stack_bonus(t_node **stack_a, t_node **stack_b, char *str)
{
	int	i;

	while (str)
	{
		i = 0;
		while (str[i] && str[i] != '\n')
			i++;
		str[i] = '\0';
		if (!str_cmp(str, "sa") || !str_cmp(str, "sb") || !str_cmp(str, "ss"))
			op_swap(stack_a, stack_b, str);
		else if (!str_cmp(str, "pa") || !str_cmp(str, "pb"))
			op_push(stack_a, stack_b, str);
		else if (!str_cmp(str, "ra") || !str_cmp(str, "rb") || (!str_cmp(str,
					"rr") || !str_cmp(str, "rra") || !str_cmp(str, "rrb")
				|| !str_cmp(str, "rrr")))
			op_r(stack_a, stack_b, str);
		else
		{
			write(2, "Error\n", 6);
			return (free(str), 0);
		}
		free(str);
		str = get_next_line(0);
	}
	return (1);
}

void	check_stack_get(t_node **stack_a)
{
	t_node	*stack_b;
	char	*str;
	int		len;

	stack_b = NULL;
	len = size_node(stack_a);
	str = get_next_line(0);
	if (sort_stack_bonus(stack_a, &stack_b, str) == 1)
	{
		if (wach_a_mrtba(stack_a, len))
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
	}
	free_stack(*stack_a);
	free_stack(stack_b);
}
