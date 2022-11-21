/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:17:19 by dmaldona          #+#    #+#             */
/*   Updated: 2022/11/09 14:09:59 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd_base(int n, int fd, char *base)
{
	long	m;
	char	str;
	int		base_size;

	m = (long)n;
	base_size = 0;
	base_size = ft_strlen(base);
	if (m < 0)
	{
		m *= -1;
		write(fd, "-", 1);
	}
	if (m > base_size - 1)
		ft_putnbr_fd_base(m / base_size, fd, base);
	str = m % base_size + '0';
	write (fd, &str, 1);
}
