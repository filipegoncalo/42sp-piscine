/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fisantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 06:15:04 by fisantos          #+#    #+#             */
/*   Updated: 2019/12/08 15:58:32 by fisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			while (to_find[i] == str[i])
			{
				i++;
				if (to_find[i] == '\0')
				{
					return (str);
				}
			}
		}
		str++;
	}
	return (0);
}
