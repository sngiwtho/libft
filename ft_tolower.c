/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:48:14 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/09/24 03:22:14 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32 ;
	return (c);
}
/*int	main(void)
{
	int	i;
	char	str[] = "QWERTYUIOP";

	i = 0;
	while (str[i])
	{
		putchar (ft_tolower(str[i]));
		i++;
	}
	return (0);
}*/
