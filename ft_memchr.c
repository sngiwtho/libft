/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 22:46:59 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/09/24 03:00:56 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	b;

	a = (unsigned char *)s;
	b = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (a[i] == b)
		{
			return (a + i);
		}
	i++;
	}
	return (0);
}
/*int	main(void)
{
	const char a[] = "MiloDekpred";
	const char b = 'i';
	char *c;

	c = ft_memchr(a, b, strlen(a));
	printf("After use memchr =  %s", c);
	return (0);
}*/
