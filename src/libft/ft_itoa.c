/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:05:56 by dmaldona          #+#    #+#             */
/*   Updated: 2022/09/23 18:32:12 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	number_size(long n, int signo)
{
	int	size;

	size = 1;
	while (n / 10)
	{
		size++;
		n /= 10;
	}
	if (signo < 0)
		return (size + 1);
	return (size);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	m;
	int		signo;
	int		size;

	m = (long)n;
	if (n < 0)
		signo = -1;
	else
		signo = 1;
	m *= signo;
	size = number_size(m, signo);
	s = (char *)ft_calloc(size + 1, sizeof(char));
	if (!s)
		return (NULL);
	while (size > 0)
	{
		s[size - 1] = m % 10 + '0';
		m /= 10;
		size--;
	}
	if (signo == -1)
		s[0] = '-';
	return (s);
}
