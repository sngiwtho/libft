/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:30:55 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/09/26 16:04:41 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;

	len = ft_strlen(s);
	if (!c)
		return (((char *)s) + ft_strlen(s));
	while (len)
		if (s[--len] == (unsigned char)c)
			return (((char *)s) + len);
	return (NULL);
}
/*
char	*ft_strrchr(const char *s, int c)
{
		int	len;

		if (c == '\0')
				return ((char *)(s + ft_strlen(s)));
		len = ft_strlen(s);
		while (len)
			if (s[--len] == (unsigned char)c)
				return ((char *)(s + len));
		return (NULL);
}
*/

/*
int main () 
{
   int len;
   const char str[] = "tripouille";
   const char ch = 0;
   char *ret;
   int len1;
   const char str1[] = "tripouille";
   const char ch1 = 0;
   char *ret1;

   ret = strrchr(str, 't' + 256);
   ret1 = ft_strrchr(str1, 't' + 256);

   printf("String after || is - |%s|\n", ret);
   printf("String after || is - |%s|\n", ret1);
   printf("%c\n", 't' + 256);

   return(0);
}*/
