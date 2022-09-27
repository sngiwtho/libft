/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:12:29 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/09/26 16:31:44 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{	
		result = malloc(sizeof(char) * 1);
		result[0] = '\0';
		return ("\0");
	}
	if ((start + len) >= s_len)
		result = malloc(sizeof(char) * s_len - (start + 1));
	else
		result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
		result[i++] = s[start++];
	result[i] = '\0';
	return (result);
}
/*int	main(void)
{
	char	*s1 = "Sirawich Ngiwthong";

	printf("%s", ft_substr(s1, 20, 9));
}*/
