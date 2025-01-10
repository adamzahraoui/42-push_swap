/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:03:58 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/10 18:07:49 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static int	check_space(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_ft_strjoin(const char *dest, const char *src)
{
	char	*p;
	int		i;
	int		j;

	if (!dest)
		dest = "";
	p = malloc(ft_strlen((char *)dest) + ft_strlen((char *)src) + 3);
	if (!p)
		return (NULL);
	if (check_space((char *)src) == 0)
		return (free(p), NULL);
	i = 0;
	while (dest[i])
	{
		p[i] = dest[i];
		i++;
	}
	p[i++] = ' ';
	j = 0;
	while (src[j])
		p[i++] = src[j++];
	return (p[i++] = ' ', p[i] = '\0', p);
}
