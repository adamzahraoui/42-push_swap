/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:54:12 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/07 15:05:34 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     find_min(t_node **stack_a)
{
    t_node *stack;
    int min;

    min = 2147483647;
    stack = *stack_a;
    while(stack)
    {
        if(stack->data < min)
            min = stack->data;
        stack = stack->next;
    }
    return (min);
}

int     find_max(t_node **stack_a)
{
    t_node *stack;
    int max;

    max = -2147483648;
    stack = *stack_a;
    while(stack)
    {
        if(stack->data > max)
            max = stack->data;
        stack = stack->next;
    }
    return (max);
}

void    sort_big_stack(t_node **stack_a)
{
    t_node *stack_b;
    int mid_average;

    stack_b = NULL;
    mid_average = (find_max(stack_a) + find_min(stack_a)) / 2;
    while(size_node(stack_a) > 3)
    {
        if((*stack_a)->data > mid_average)   
        {
            push_stack_b(stack_a, &stack_b);
            rotat_stack_b(&stack_b);
        }
        else
            push_stack_b(stack_a, &stack_b);
    }
    set_index(*stack_a);
    set_index(stack_b);
    set_above_median(stack_a);
    set_above_median(&stack_b);
    sort_stack(stack_a);
    sort_big_stack_algo(stack_a, &stack_b);
}
