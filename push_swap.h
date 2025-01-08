/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:04:37 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/07 12:29:16 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
    int             data;
    int             index;
    int             above_median;
    int             target;
    int             cost;
    struct s_node   *next;
}                   t_node;

int					ft_strlen(const char *s);
char				*ft_strjoin(const char *dest, const char *src);
int					check_space(char *str);
char				**ft_split(const char *str, char c);
int					count_word(char *src, char sep);
int					h_error(char **argv, char *args);
void				*ft_free(char **p, int index);
void				creat_stack(int *arr, int size);
void				print_stack(t_node *stack);
int					size_node(t_node **stack_a);
t_node				*set_index(t_node *stack_a);
void				push_stack_a(t_node **stack_a, t_node **stack_b);
void				push_stack_b(t_node **stack_a, t_node **stack_b);
void				rotat_stack_a(t_node **stack_a);
void				rotat_stack_b(t_node **stack_b);
void				rotat_stack_ab(t_node **stack_a, t_node **stack_b);
void				rr_a(t_node **stack_a);
void				rr_b(t_node **stack_b);
void				rrr_ab(t_node **stack_a, t_node **stack_b);
void				swap_stack_a(t_node **stack_a);
void				swap_stack_b(t_node **stack_b);
void				swap_stack_ab(t_node **stack_a, t_node **stack_b);
void				sort_stack(t_node **stack_a);
void                sort_big_stack(t_node **stack_a);
void                set_above_median(t_node **stack_a);
void                sort_big_stack_algo(t_node **stack_a, t_node **stack_b);

#endif