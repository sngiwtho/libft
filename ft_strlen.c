/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 22:43:03 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/09/24 03:07:28 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while(*s++)
		i++;
	return(i);
}*/
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*int	main(void)
{
	char	*s;
	char	*b;

	b = "ABCDEFGHIJKLMNOP";
	s = "sirawich";
	printf("%lu\n",strlen(s));
	printf("%lu\n",ft_strlen(s));
	printf("%lu\n",strlen(b));
	printf("%lu\n",ft_strlen(b));
}*/
