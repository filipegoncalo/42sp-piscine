/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fisantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 00:12:09 by fisantos          #+#    #+#             */
/*   Updated: 2019/12/08 15:28:25 by fisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_printable(unsigned char c)
{
	if ((c >= 0 && c < 32) || c >= 127)
		return (0);
	return (1);
}

void	ft_hexa(unsigned char c)
{
	char	*hexadecimal;

	hexadecimal = "0123456789abcdef";
	write(1, "\\", 1);
	if (c >= 16)
	{
		ft_putchar(hexadecimal[c / 16]);
	}
	else
	{
		ft_putchar('0');
	}
	ft_putchar(hexadecimal[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (ft_printable(c))
			ft_putchar(c);
		else
			ft_hexa(c);
		i++;
	}
}
