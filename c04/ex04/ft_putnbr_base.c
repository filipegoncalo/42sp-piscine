/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fisantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 18:11:31 by fisantos          #+#    #+#             */
/*   Updated: 2019/12/13 05:46:29 by fisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_valid(char *str)
{
	int		i;
	int		j;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] == '-') || (str[i] == '+'))
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void	ft_putnbr(int nbr, char *base, unsigned int baseln)
{
	unsigned int	nb;

	if (nbr < 0)
	{
		ft_putchar('-');
		nb = nbr * -1;
	}
	else
		nb = nbr;
	if (nb >= baseln)
		ft_putnbr((nb / baseln), base, baseln);
	ft_putchar(base[nb % baseln]);
}

void	ft_putnbr_base(int nb, char *str)
{
	unsigned int	baseln;

	baseln = ft_valid(str);
	if (!baseln)
		return ;
	ft_putnbr(nb, str, baseln);
}
