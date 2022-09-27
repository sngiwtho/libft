/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:41:14 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/09/24 03:01:53 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (len != 0)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		len--;
		i++;
	}
	return (b);
}
/*void	*ft_memset(void *b, int c,size_t len)
{
	size_t i;
	unsigned char *e;
	unsigned char r;
	i = 0;
	e = b;
	r = c;
	while (len != 0)
	{
		e[i] = r;
		len--;
		i++;
	}
	return (e);
}*/
/*int	main(void)
{
	char str[100];
	strcpy(str,"SirawichNgiwthong");
	ft_memset(str,'P',8);
	printf("%s",str);
}*/
