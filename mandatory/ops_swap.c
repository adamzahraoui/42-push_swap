/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:04:32 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/04 23:04:33 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack_a(t_node **stack_a)
{
	t_node	*lwl;
	t_node	*tani;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	lwl = *stack_a;
	tani = (*stack_a)->next;
	lwl->next = tani->next;
	tani->next = lwl;
	*stack_a = tani;
	write(1, "sa\n", 3);
}

void	swap_stack_b(t_node **stack_b)
{
	t_node	*lwl;
	t_node	*tani;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	lwl = *stack_b;
	tani = (*stack_b)->next;
	lwl->next = tani->next;
	tani->next = lwl;
	*stack_b = tani;
	write(1, "sb\n", 3);
}

void	swap_stack_ab(t_node **stack_a, t_node **stack_b)
{
	t_node	*lwl;
	t_node	*tani;
	t_node	*lwl_1;
	t_node	*tani_2;

	if (!*stack_a || !*stack_b || !(*stack_a)->next || !(*stack_b)->next)
		return ;
	lwl = *stack_a;
	tani = (*stack_a)->next;
	lwl->next = tani->next;
	tani->next = lwl;
	*stack_a = tani;
	lwl_1 = *stack_b;
	tani_2 = (*stack_b)->next;
	lwl_1->next = tani_2->next;
	tani_2->next = lwl_1;
	*stack_b = tani_2;
	write(1, "ss\n", 3);
}
