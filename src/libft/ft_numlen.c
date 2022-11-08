/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:31:56 by dmaldona          #+#    #+#             */
/*   Updated: 2022/11/08 16:36:19 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numlen(size_t n, char *base)
{
	size_t	m;
	int		base_size;

	m = 0;
	base_size = ft_strlen(base);
	while (n > 0)
	{
		n /= base_size;
		m++;
	}
	if (m)
		return (m);
	else
		return (1);
}
