/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_rrotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:04:27 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/09 16:57:03 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rr_a(t_node **stack_a)
{
	t_node	*lwlani;
	t_node	*lkhrani;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	lwlani = *stack_a;
	lkhrani = *stack_a;
	while (lwlani->next->next)
		lwlani = lwlani->next;
	lkhrani = lwlani->next;
	lkhrani->next = *stack_a;
	*stack_a = lkhrani;
	lwlani->next = NULL;
}

void	rr_b(t_node **stack_b)
{
	t_node	*lwlani;
	t_node	*lkhrani;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	lwlani = *stack_b;
	lkhrani = *stack_b;
	while (lwlani->next->next)
		lwlani = lwlani->next;
	lkhrani = lwlani->next;
	lkhrani->next = *stack_b;
	*stack_b = lkhrani;
	lwlani->next = NULL;
}

void	rrr_ab(t_node **stack_a, t_node **stack_b)
{
	t_node	*lwlani;
	t_node	*lkhrani;
	t_node	*lwlani_b;
	t_node	*lkhrani_b;

	if (!*stack_a || !(*stack_a)->next || !*stack_b || !(*stack_b)->next)
		return ;
	lwlani = *stack_a;
	lkhrani = *stack_a;
	while (lwlani->next->next)
		lwlani = lwlani->next;
	lkhrani = lwlani->next;
	lkhrani->next = *stack_a;
	*stack_a = lkhrani;
	lwlani->next = NULL;
	lwlani_b = *stack_b;
	lkhrani_b = *stack_b;
	while (lwlani_b->next->next)
		lwlani_b = lwlani_b->next;
	lkhrani_b = lwlani_b->next;
	lkhrani_b->next = *stack_b;
	*stack_b = lkhrani_b;
	lwlani_b->next = NULL;
}
