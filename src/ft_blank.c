/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blank.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardurand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 12:24:20 by ardurand          #+#    #+#             */
/*   Updated: 2017/01/18 14:24:52 by ardurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_blank(char c)
{
	if (c == ' ')
		return (c);
	else if (c == '\t')
		return (c);
	else if (c == '\n')
		return (c);
	return (-1);
}
