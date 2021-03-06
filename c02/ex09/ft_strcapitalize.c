/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fisantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 13:11:30 by fisantos          #+#    #+#             */
/*   Updated: 2019/12/08 18:14:15 by fisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i - 1] < 48) || ((str[i - 1] > 57) && (str[i - 1] < 65)) ||
		((str[i - 1] > 90) && (str[i - 1] < 97)) || (str[i - 1] > 122))
		&& ((str[i] >= 97) && (str[i] <= 122)))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
