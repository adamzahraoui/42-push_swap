/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:36:39 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/05 23:17:48 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_node **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->index;
	second = (*stack_a)->next->index;
	third = (*stack_a)->next->next->index;
    if(first > second && first < third)
        swap_stack_a(stack_a);
    else if(first > second && first > third && second < third)
        rotat_stack_a(stack_a);
    else if(first > second && first > third && second > third)
    {
        swap_stack_a(stack_a);
        rr_a(stack_a);
    }
    else if(second > first && second > third && first > third)
        rr_a(stack_a);
    else if(second > first && third > first && second > third)
    {
        swap_stack_a(stack_a);
        rotat_stack_a(stack_a);
    }
}
