/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:03:15 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/05 00:41:53 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**all_args;
	char	*args;
	int		i;

	if (argc == 1)
		return (1);
	i = 1;
	args = NULL;
	while (argv[i])
	{
		args = ft_strjoin(args, argv[i]);
		if (!args)
			return (write(2, "Error\n", 6), free(args), 1);
		i++;
	}
	all_args = ft_split(args, ' ');
	if (!all_args || h_error(all_args, args) == 0)
	{
		ft_free(all_args, count_word(args, ' '));
		return (write(2, "Error\n", 6), free(args), 1);
	}
	free(args);
}
