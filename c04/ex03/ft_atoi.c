/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fisantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 15:47:59 by fisantos          #+#    #+#             */
/*   Updated: 2019/12/10 20:33:54 by fisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
			c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int i;
	int x;
	int num;

	i = 0;
	x = 1;
	num = 0;
	while (ft_isspace(*str))
		str++;
	while (*str == '-' || *str == '+')
		x = (*str++ == '-') ? x * -1 : x * 1;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			num = num * 10 + (*str++ - '0');
		else
			return (num * x);
	}
	return (num * x);
}
