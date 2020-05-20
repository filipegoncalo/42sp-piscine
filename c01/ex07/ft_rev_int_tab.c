/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fisantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 01:42:03 by fisantos          #+#    #+#             */
/*   Updated: 2019/12/02 19:41:26 by fisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux[size];
	int	i;
	int j;

	i = 0;
	while (i++ < size)
	{
		aux[i - 1] = *(tab + size - i);
	}
	j = 0;
	while (j < size)
	{
		tab[j] = aux[j];
		j++;
	}
}
