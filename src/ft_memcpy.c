/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardurand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 15:15:45 by ardurand          #+#    #+#             */
/*   Updated: 2017/10/16 15:15:47 by ardurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_bis;
	unsigned char	*src_bis;

	dest_bis = dest;
	src_bis = (void*)src;
	while (n--)
		*dest_bis++ = *src_bis++;
	return (dest);
}
