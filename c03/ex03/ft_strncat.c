/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fisantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 05:15:25 by fisantos          #+#    #+#             */
/*   Updated: 2019/12/08 15:55:34 by fisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[x] != '\0') && (x < nb))
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
