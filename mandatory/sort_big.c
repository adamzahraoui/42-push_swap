/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:54:12 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/25 17:47:10 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	awl_sorting(t_node **stack_a, t_node **stack_b, t_push *push, int len)
{
	int	i;

	i = 0;
	while (i++ < len)
	{
		(*stack_a)->flag = push->flag;
		if ((*stack_a)->index <= push->mid)
			push_stack_b(stack_a, stack_b);
		else
			rotat_stack_a(stack_a);
	}
	push->max = push->mid;
	push->mid = (push->max - push->limorah) / 2 + push->limorah;
	push->flag++;
}

void	qlb_3la_liwrah(t_node **stack_a, t_node **stack_b, t_push *push)
{
	if (size_node(stack_b) > 0 && (*stack_b)->index == push->limorah)
		push_stack_a(stack_a, stack_b);
	else if ((*stack_a)->index == push->limorah)
	{
		(*stack_a)->flag = -1;
		rotat_stack_a(stack_a);
		push->limorah++;
	}
	else if (size_node(stack_b) > 2
		&& ft_lstlast(*stack_b)->index == push->limorah)
		rr_b(stack_b);
	else if ((*stack_a)->next->index == push->limorah)
		swap_stack_a(stack_a);
	else if (size_node(stack_a) > 1 && (*stack_a)->next->index == push->limorah
		&& (*stack_b)->next->index == push->limorah + 1)
		swap_stack_ab(stack_a, stack_b);
	else
		return ;
	qlb_3la_liwrah(stack_a, stack_b, push);
}

void	quick_b(t_node **stack_a, t_node **stack_b, t_push *push)
{
	int	flag_jdid;

	flag_jdid = (*stack_a)->flag;
	if (flag_jdid != 0)
	{
		while ((*stack_a)->flag == flag_jdid)
		{
			if ((*stack_a)->index != push->limorah)
				push_stack_b(stack_a, stack_b);
			qlb_3la_liwrah(stack_a, stack_b, push);
		}
	}
	else if ((*stack_a)->flag == 0)
	{
		while ((*stack_a)->flag != -1)
		{
			if ((*stack_a)->index != push->limorah)
				push_stack_b(stack_a, stack_b);
			qlb_3la_liwrah(stack_a, stack_b, push);
		}
	}
	if (size_node(stack_b))
		push->max = find_max(stack_b)->index;
	push->mid = (push->max - push->limorah) / 2 + push->limorah;
}

void	quick_a(t_node **stack_a, t_node **stack_b, t_push *push)
{
	int	i;
	int	len_b;

	i = 0;
	len_b = size_node(stack_b);
	while (size_node(stack_b) && i++ < len_b)
	{
		if ((*stack_b)->index == push->limorah)
			qlb_3la_liwrah(stack_a, stack_b, push);
		else if ((*stack_b)->index >= push->mid)
		{
			(*stack_b)->flag = push->flag;
			push_stack_a(stack_a, stack_b);
		}
		else if ((*stack_b)->index < push->mid)
			rotat_stack_b(stack_b);
	}
	push->max = push->mid;
	push->mid = (push->max - push->limorah) / 2 + push->limorah;
	push->flag++;
}

void	sort_big_stack(t_node **stack_a, t_node **stack_b, int len)
{
	t_push	push;

	push.limorah = find_min(stack_a)->index;
	push.max = find_max(stack_a)->index;
	push.mid = (push.max / 2) + push.limorah;
	push.flag = 0;
	awl_sorting(stack_a, stack_b, &push, len);
	while (!(wach_a_mrtba(stack_a, len)))
	{
		if (size_node(stack_b) == 0)
			quick_b(stack_a, stack_b, &push);
		else
			quick_a(stack_a, stack_b, &push);
	}
}
