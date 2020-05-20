/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fisantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 21:04:36 by fisantos          #+#    #+#             */
/*   Updated: 2019/12/10 13:16:20 by fisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (i++ < (argc - 1))
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && s1 != '\0')
	{
		s1++;
		s2++;
	}
	return ((unsigned int)*s1 - (unsigned int)*s2);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i++ < (argc - 1))
	{
		if (i + 1 < argc && ft_strcmp(argv[i + 1], argv[i]) < 0)
		{
			argv[argc + 1] = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = argv[argc + 1];
			i = 0;
		}
	}
	ft_display(argc, argv);
}
