/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:50:00 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/09/24 03:06:47 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (src[i] && i < dstsize - 1)
	{	
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*int	main(void)
{
	char	a[20] = "SirawichJerryBoy";
	char	b[20] = "NGIWTHONGLOL";

	//printf("%lu\n", strlcpy(a, b, 1));
	printf("%lu\n", ft_strlcpy(a, b, 1));
	printf("%s\n", a);
	printf("%s\n", b);
}*/
