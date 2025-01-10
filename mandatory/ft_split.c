/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:03:52 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/10 17:45:11 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft___strlen(char *str, int *i, char sep, char a)
{
	int	start;

	start = *i;
	while (str[*i] && str[*i] != sep && str[*i] != a)
		(*i)++;
	return (*i - start);
}

void	ft_strcpy(char *src, char *ptr, int start, int end)
{
	int	i;

	i = 0;
	while (start < end)
	{
		ptr[i] = src[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
}

int	count_word(char *src, char sep, char a)
{
	int	i;
	int	cw;

	i = 0;
	cw = 0;
	while (src[i])
	{
		while (src[i] && (src[i] == sep || src[i] == a))
			i++;
		if (src[i] && src[i] != sep && src[i] != a)
		{
			cw++;
			while (src[i] && src[i] != sep && src[i] != a)
				i++;
		}
	}
	return (cw);
}

void	*ft_free(char **p, int index)
{
	while (index--)
		free(p[index]);
	free(p);
	return (NULL);
}

char	**ft_split(const char *str, char c, char a)
{
	char	**p;
	int		index;
	int		i;
	int		start;

	p = malloc((count_word((char *)str, c, a) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	i = 0;
	index = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == c || str[i] == a))
			i++;
		if (str[i] != '\0')
		{
			start = i;
			p[index] = malloc((ft___strlen((char *)str, &i, c, a) + 1));
			if (!p[index])
				return (ft_free(p, index));
			ft_strcpy((char *)str, p[index++], start, i);
		}
	}
	p[index] = NULL;
	return (p);
}
