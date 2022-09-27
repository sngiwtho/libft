/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:11:30 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/09/26 16:07:13 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	i1;

	i = 0;
	i1 = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (i < len)
	{
		while (haystack[i + i1] == needle[i1] && i + i1 < len
			&& needle[i1] && haystack[i + i1])
			i1++;
		if (needle[i1] == '\0')
			return ((char *) haystack + i);
		i++;
	}
	return (NULL);
}
/*
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
		size_t	i;
		size_t	j;

		if (!haystack && len == 0)
				return ((char *)haystack);
		if(!*needle)
				return ((char *)haystack);

		i = 0;
		j = 0;
		while (i < len)
		{
				if (haystack[i] == needle[0])
				{
						while(needle[j] && haystack[i + j] == needle[j]
										&& len > i + j)
								j++;
						if (needle[j] == '\0')
								return ((char *)(haystack + i));
				}
				i++;
		}
		return (NULL);
}
*/
/*int	main(void)
{
	char	a[100] = "see FF your FF return FF now FF";
	char	b[20] = "FF";
	size_t	max = ft_strlen(a);

	printf("strnstr = %s\n", strnstr(a, b, max));
	printf("ft_strnstr = %s\n", ft_strnstr(a, b, max));
	printf("%zu\n", max);
	ft_strlcpy(b,"MZIRIBMZE",10);
	ft_strlcpy(a,"MZIRIBMZIRIBMZE123",19);
	max = ft_strlen(b);
	printf("strnstr = %s\n", strnstr(a, b, max));
	printf("ft_strnstr = %s\n", ft_strnstr(a, b, max));
	printf("%zu\n", max);

	char	*s1 = "A";
	max = strlen(s1) + 1;

	printf("strnstr = %s\n", strnstr(s1, s1, max));
	printf("ft_strnstr = %s\n", ft_strnstr(s1, s1, max));

}*/
