/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:25:25 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/09/24 03:23:05 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	return (c);
}
/*
int	main(void)
{
	int	i;
	char	str[] = "abcdefghijkl";

	i = 0;
	while (str[i])
	{
		putchar (toupper(str[i]));
		i++;
	}
	return (0);
}*/
