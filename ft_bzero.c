/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngiwtho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:08:52 by sngiwtho          #+#    #+#             */
/*   Updated: 2022/09/24 02:57:47 by sngiwtho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char *) s;
	i = 0;
	while (i != n)
	{
		a[i] = 0;
		i++;
	}
}
/*int	main(void)
{
	char	s[10] = "Sirawich";
	int i;

	ft_bzero(s,5);
	i = 0;
	while(i < 10)
	{
		write(1, &s[i], 1);
		i++;
	}
}*/
