/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardurand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 15:14:57 by ardurand          #+#    #+#             */
/*   Updated: 2017/10/16 15:15:01 by ardurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (void*)s1;
	str2 = (void*)s2;
	while (n && (*str1 == *str2))
	{
		str1++;
		str2++;
		n--;
	}
	if (!n)
		return (0);
	return (*str1 - *str2);
}
