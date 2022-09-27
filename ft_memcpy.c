/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 21:06:26 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/09/24 18:45:33 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}
/*int	main(void)
{
	const char src[50] = "Sirawich";
	char dest [50];
	
	strcpy(dest,"HelloTiw!!!!!");
	printf("Before Memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, strlen(src) + 1);
	printf("After Memcpy dest = %s\n", dest);
	//memcpy(dest, src, strlen(src) + 1);
	//printf("After Memcpy dest = %s\n", dest);
	
	return (0);
}*/
