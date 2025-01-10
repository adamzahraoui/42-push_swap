/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:04:37 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/10 17:17:38 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFFER_SIZE 42

typedef struct s_node
{
	int				data;
	int				index;
	int				flag;
	struct s_node	*next;
}					t_node;

int					ft_ft_atoi(char *str);
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
char				*ft_ft_strjoin(const char *dest, const char *src);
char				*ft_strjoin(const char *dest, const char *src);
size_t				ft_strlen_get(const char *str);
char				*ft_strchr(const char *s, int c);
char				*get_next_line(int fd);
char				*line_n9i(char *last);
char				*line_buffer(int fd, char *last);
char				*chyata(char *last);
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
int					wach_mrtb(t_node **stack_a);
int					wach_a_mrtba(t_node **stack_a, int len);
int					str_cmp(char *str, char *dest);
void				free_stack(t_node *stack);
void				check_stack_get(t_node **stack_a);
int					size_node(t_node **stack_a);
void				set_set(t_node *stack_a, t_node **stack, int *tmp, int *i);
void				set_mois_un(t_node **stack);
t_node				*set_index(t_node *stack_a);
void				op_swap(t_node **stack_a, t_node **stack_b, char *str);
void				op_push(t_node **stack_a, t_node **stack_b, char *str);
void				op_r(t_node **stack_a, t_node **stack_b, char *str);
int					sort_stack_bonus(t_node **stack_a, t_node **stack_b,
						char *str);
#endif