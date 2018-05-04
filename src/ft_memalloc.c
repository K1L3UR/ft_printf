/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardurand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 15:17:58 by ardurand          #+#    #+#             */
/*   Updated: 2017/10/16 15:18:00 by ardurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(char) * (size))))
		return (NULL);
	ft_memset(str, 0, size);
	return (str);
}
