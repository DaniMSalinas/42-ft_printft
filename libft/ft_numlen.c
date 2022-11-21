/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:31:56 by dmaldona          #+#    #+#             */
/*   Updated: 2022/11/09 14:27:48 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n, char *base)
{
	int		number_size;
	int		base_size;
	long	m;

	number_size = 0;
	base_size = ft_strlen(base);
	m = (long)n;
	if (m < 0)
	{
		m *= -1;
		number_size++;
	}
	while (m > 0)
	{
		m /= base_size;
		number_size++;
	}
	if (number_size)
		return (number_size);
	else
		return (1);
}
