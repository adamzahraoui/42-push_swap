/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:15:43 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/10 13:36:44 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	op_swap(t_node **stack_a, t_node **stack_b, char *str)
{
	if (!str_cmp(str, "sa"))
		swap_stack_a(stack_a);
	else if (!str_cmp(str, "sb"))
		swap_stack_b(stack_b);
	else if (!str_cmp(str, "ss"))
		swap_stack_ab(stack_a, stack_b);
	return ;
}

void	op_push(t_node **stack_a, t_node **stack_b, char *str)
{
	if (!str_cmp(str, "pa"))
		push_stack_a(stack_a, stack_b);
	else if (!str_cmp(str, "pb"))
		push_stack_b(stack_a, stack_b);
	return ;
}

void	op_r(t_node **stack_a, t_node **stack_b, char *str)
{
	if (!str_cmp(str, "ra"))
		rotat_stack_a(stack_a);
	else if (!str_cmp(str, "rb"))
		rotat_stack_b(stack_b);
	else if (!str_cmp(str, "rr"))
		rotat_stack_ab(stack_a, stack_b);
	else if (!str_cmp(str, "rra"))
		rr_a(stack_a);
	else if (!str_cmp(str, "rrb"))
		rr_b(stack_b);
	else if (!str_cmp(str, "rrr"))
		rrr_ab(stack_a, stack_b);
	return ;
}
