/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardurand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 15:32:27 by ardurand          #+#    #+#             */
/*   Updated: 2017/10/16 15:32:28 by ardurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*dest;

	dest = (unsigned char*)s;
	while (n--)
	{
		if (*dest == (unsigned char)c)
			return (dest);
		dest++;
	}
	return (NULL);
}
