/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 16:27:06 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/06 04:08:40 by fisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char	*s1;
	char	*s2;
	int		i;

	s1 = "Look Here";
	s2 = "Look HerE";
	i = ft_strncmp(s1, s2, 8);
	printf("%d\n", i);
}
