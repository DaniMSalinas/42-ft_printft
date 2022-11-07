/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:17:19 by dmaldona          #+#    #+#             */
/*   Updated: 2022/11/07 19:20:22 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	m;
	char	str;

	m = (long)n;
	if (m < 0)
	{
		m *= -1;
		write(fd, "-", 1);
	}
	if (m > 9)
		ft_putnbr_fd(m / 10, fd);
	str = m % 10 + '0';
	write (fd, &str, 1);
}
