/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fisantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 06:54:59 by fisantos          #+#    #+#             */
/*   Updated: 2019/12/06 06:55:57 by fisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
	char str[] = "teacher teach tea";
	char search[] = "ac";
	char *ptr = ft_strstr(str, search);

	if (ptr != NULL) /* Substring found */
	{
		printf("'%s' contains '%s'\n", str, search);
	}
	else /* Substring not found */
	{
		printf("'%s' doesn't contain '%s'\n", str, search);
	}
	return 0;
}
