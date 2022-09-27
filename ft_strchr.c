/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 21:09:37 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/09/24 18:47:25 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	b;

	b = (char)c;
	while (*s && *s != b)
		s++;
	if (*s == b)
		return ((char *)s);
	return (NULL);
}

/*int main () 
{
   const char str[30] = "sirawich";
   int ch = 'r';
   char *ret;
   const char a[30] = "sirawich";
   int b = 'r';
   char *tiw;
	
	ret = strchr(str, ch);
	tiw = ft_strchr(a, b);

   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("String after |%c| is - |%s|\n", b, tiw);
}*/
