/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_big.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:23:09 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/07 16:06:59 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     find_target(t_node **stack_a, int value)
{
    int closest_bigger;
    int current_min;
    t_node *stack;

    closest_bigger = 2147483647;
    current_min = 2147483647;
    stack = *stack_a;
    while(stack_a)
    {
        if((*stack_a)->data > value && (*stack_a)->data < closest_bigger)
            closest_bigger = (*stack_a)->data;
        *stack_a = (*stack_a)->next;
    }
    if(closest_bigger == 2147483647)
    {
        while(stack)
        {
            if(stack->data < current_min)
                current_min = stack->data;
            stack = stack->next;
        }
        closest_bigger = current_min;
    }
    return (closest_bigger);
}

void    sort_big_stack_algo(t_node **stack_a, t_node **stack_b)
{
    t_node *stack;

    stack = *stack_a;
    while(stack)
    {
        stack->target = find_target(stack_a, stack->data);
        stack = stack->next;
    }
    
}