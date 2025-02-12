/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:03:43 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/10 11:22:34 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	add_new_node(t_node **list, int value)
{
	t_node	*nwe_node;
	t_node	*last;

	nwe_node = malloc(sizeof(t_node));
	if (!nwe_node)
		return ;
	nwe_node->data = value;
	nwe_node->next = NULL;
	if (*list == NULL)
	{
		*list = nwe_node;
		return ;
	}
	last = *list;
	while (last->next)
		last = last->next;
	last->next = nwe_node;
}

void	creat_stack(int *arr, int size)
{
	t_node	*stack_a;
	int		i;

	stack_a = NULL;
	i = 0;
	while (i < size)
	{
		add_new_node(&stack_a, arr[i]);
		i++;
	}
	set_index(stack_a);
	check_stack_get(&stack_a);
}
