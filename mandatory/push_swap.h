/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:04:37 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/30 18:49:04 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	long			data;
	int				index;
	int				flag;
	struct s_node	*next;
}					t_node;

typedef struct s_push
{
	int				limorah;
	int				max;
	int				mid;
	int				flag;
}					t_push;

ssize_t				ft_ft_atoi(char *str);
int					ft_atoi(char *str);
int					check_repet(char *str, int *arr, int *size);
int					h_error(char **argv, char *args);
void				add_new_node(t_node **list, int value);
void				creat_stack(int *arr, int size);
int					ft___strlen(char *str, int *i, char sep, char a);
void				ft_strcpy(char *src, char *ptr, int start, int end);
int					count_word(char *src, char sep, char a);
void				*ft_free(char **p, int index);
char				**ft_split(const char *str, char c, char a);
int					ft_strlen(const char *s);
int					check_space(char *str);
char				*ft_strjoin(const char *dest, const char *src);
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
t_node				*find_min(t_node **stack_a);
t_node				*find_max(t_node **stack_a);
int					wach_mrtb(t_node **stack_a);
int					wach_a_mrtba(t_node **stack_a, int len);
t_node				*ft_lstlast(t_node *lst);
void				awl_sorting(t_node **stack_a, t_node **stack_b,
						t_push *push, int len);
void				qlb_3la_liwrah(t_node **stack_a, t_node **stack_b,
						t_push *push);
void				quick_b(t_node **stack_a, t_node **stack_b, t_push *push);
void				quick_a(t_node **stack_a, t_node **stack_b, t_push *push);
void				sort_big_stack(t_node **stack_a, t_node **stack_b, int len);
void				sort_5_stack(t_node **stack_a);
void				sort_3_stack(t_node **stack_a);
void				sort_stack(t_node **stack_a);
int					size_node(t_node **stack_a);
void				set_set(t_node *stack_a, t_node **stack, int *tmp, int *i);
void				set_mois_un(t_node **stack);
t_node				*set_index(t_node *stack_a);
void				free_stack(t_node *stack);

#endif