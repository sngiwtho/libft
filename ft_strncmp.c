/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 20:02:50 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/09/24 22:35:30 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int main () 
{
	const char a[20] = "OP";
	const char b[20] = "OP";
	
	
	//printf("%d\n", strcmp(a, b));
	//printf("%d\n", strcmp("T", "U"));
	printf("%d\n", strncmp("t", "", 0));
	printf("%d\n", ft_strncmp("t", "", 0));
	/printf("%d\n", strncmp("Tiw", "TiW", 3));
	printf("%d\n", strncmp("Hellow", "Hello", 5));
}*/
