/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:04:18 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/09 16:57:00 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rotat_stack_a(t_node **stack_a)
{
	t_node	*lwlani;
	t_node	*lkhrani;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	lwlani = *stack_a;
	lkhrani = *stack_a;
	*stack_a = lwlani->next;
	while (lkhrani->next)
		lkhrani = lkhrani->next;
	lkhrani->next = lwlani;
	lwlani->next = NULL;
}

void	rotat_stack_b(t_node **stack_b)
{
	t_node	*lwlani;
	t_node	*lkhrani;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	lwlani = *stack_b;
	lkhrani = *stack_b;
	*stack_b = lwlani->next;
	while (lkhrani->next)
		lkhrani = lkhrani->next;
	lkhrani->next = lwlani;
	lwlani->next = NULL;
}

void	rotat_stack_ab(t_node **stack_a, t_node **stack_b)
{
	t_node	*lwlania;
	t_node	*lkhrania;
	t_node	*lwlanib;
	t_node	*lkhranib;

	if (!*stack_a || !(*stack_a)->next || !*stack_b || !(*stack_b)->next)
		return ;
	lwlania = *stack_a;
	lkhrania = *stack_a;
	*stack_a = lwlania->next;
	while (lkhrania->next)
		lkhrania = lkhrania->next;
	lkhrania->next = lwlania;
	lwlania->next = NULL;
	lwlanib = *stack_b;
	lkhranib = *stack_b;
	*stack_b = lwlanib->next;
	while (lkhranib->next)
		lkhranib = lkhranib->next;
	lkhranib->next = lwlanib;
	lwlanib->next = NULL;
}
