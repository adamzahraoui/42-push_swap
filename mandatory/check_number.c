/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:03:37 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/11 17:54:52 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ft_atoi(char *str)
{
	int	r;
	int	i;
	int	s;

	i = 0;
	s = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			s *= -1;
	}
	while (str[i] == '0' && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (0);
	r = 0;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * s);
}

int	ft_atoi(char *str)
{
	long	res;
	int		i;
	int		s;

	i = 0;
	s = 1;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			s *= -1;
	while (str[i] == '0' && str[i] != '\0')
		i++;
	if (str[i] == '\0' && str[i - 1] == '0')
		return (1);
	res = 0;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		res = (res * 10) + (str[i] - '0');
		if (!(res >= -2147483648 && res <= 2147483647))
			return (0);
		i++;
	}
	if (!(str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
		return (0);
	res = res * s;
	return (1);
}

int	check_repet(char *str, int *arr, int *size)
{
	int	nb;
	int	a;

	if (!str || !arr || !size)
		return (0);
	nb = ft_ft_atoi(str);
	a = 0;
	while (a < *size)
	{
		if (nb == arr[a])
			return (0);
		a++;
	}
	arr[*size] = nb;
	(*size)++;
	return (1);
}

int	h_error(char **argv, char *args)
{
	int	*arr;
	int	i;
	int	size;

	if (!argv || !args)
		return (0);
	size = 0;
	arr = malloc(count_word(args, ' ', '\t') * sizeof(int));
	if (!arr)
		return (0);
	i = 0;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == 0 || check_repet(argv[i], arr, &size) == 0)
			return (free(arr), 0);
		i++;
	}
	creat_stack(arr, size);
	return (free(arr), 1);
}
