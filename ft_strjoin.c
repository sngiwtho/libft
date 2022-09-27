/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:53:50 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/09/26 14:46:51 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	i1;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = malloc(sizeof(char) * (s1_len + s2_len) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		result[i] = s1[i];
		i++;
	}
	i1 = 0;
	while (i1 < s2_len)
		result[i++] = s2[i1++];
	result[i] = '\0';
	return (result);
}
/*int	main(void)
{
	char	*s1 = "Sirawich";
	char	*result;
	char	*s2 = "Ngiwthong";

	result = ft_strjoin(s1, s2);
	printf("%s", result);
}*/
