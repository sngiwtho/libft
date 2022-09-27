/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:34:58 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/09/24 03:01:40 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	i = 0;
	if (a == 0 && b == 0)
		return (NULL);
	if (a < b)
	{
		while (i < len)
		{
			a[i] = b[i];
			i++;
		}
	}
	else
	{
		while (len--)
			a[len] = b[len];
	}
	return (a);
}

/*int	main(void)
{
	char s[] = {65, 66, 67, 68, 69, 0, 45};
	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
	char s1[] = { 0,  0,  0,  0,  0,  0, 0};

	printf("%s\n", ft_memmove(s0, s, 7));
	printf("%s\n", memmove(s1, s, 7));
	printf("%s\n", ft_memmove(s + 1, s + 2, 7));
}*/
