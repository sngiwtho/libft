/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:13:15 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/09/26 16:48:06 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	result;
	size_t	check;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len < dstsize)
		check = dst_len;
	else
		check = dstsize;
	result = src_len + check;
	if (dstsize == 0)
		return (result);
	while (src[i] && dst_len + i < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (result);
}
/*int	main(void)
{		
	char	dst[20] = "Miw"; 
	char	src[20] = "Panoma";
	char	dst1[20] = "Miw"; 
	char	src1[20] = "Panoma";

	printf("%lu\n", strlcat(dst, src, 0));
	printf("%s\n", (dst));
	printf("%lu\n", ft_strlcat(dst1, src1, 0));
	printf("%s\n", (dst1));
}*/
