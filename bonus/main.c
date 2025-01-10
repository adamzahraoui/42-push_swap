/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:03:15 by adzahrao          #+#    #+#             */
/*   Updated: 2025/01/10 12:24:53 by adzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int argc, char **argv)
{
	char	**all_args;
	char	*args;
	char	*tmp;
	int		i;

	if (argc == 1)
		return (1);
	i = 1;
	args = NULL;
	while (argv[i])
	{
		tmp = args;
		args = ft_ft_strjoin(args, argv[i]);
		if (!args)
			return (write(2, "Error\n", 6), free(tmp), free(args), 1);
		i++;
		free(tmp);
	}
	all_args = ft_split(args, ' ', '\t');
	if (!all_args || h_error(all_args, args) == 0)
		return (write(2, "Error\n", 6), ft_free(all_args, count_word(args, ' ',
					'\t')), free(args), 1);
	return (ft_free(all_args, count_word(args, ' ', '\t')), free(args), 0);
}
