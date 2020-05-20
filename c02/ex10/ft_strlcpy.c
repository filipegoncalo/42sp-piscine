/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fisantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:57:02 by fisantos          #+#    #+#             */
/*   Updated: 2019/12/06 00:09:14 by fisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < (size - 1) && size != 0)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}
