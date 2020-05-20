/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fisantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 04:37:39 by fisantos          #+#    #+#             */
/*   Updated: 2019/12/06 04:37:48 by fisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main() 
{
	char s1[10] = "abcd";
	char s3[10] = "abcd";
	char s2[5] = "efgh";
	char s4[5] = "efgh";
	
	printf("Esperado: %s / Resultado: %s\n", strcat(s1, s2), ft_strcat(s3, s4));
}
