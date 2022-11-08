/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:22:29 by dmaldona          #+#    #+#             */
/*   Updated: 2022/11/08 16:35:20 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunbr_fd_base(unsigned int n, int fd, char *base)
{
	size_t	m;
	size_t	base_size;

	m = (size_t)n;
	base_size = 0;
	base_size = ft_strlen(base);
	if (m > base_size)
		ft_putnbr_fd_base(m / base_size, fd, base);
	m %= base_size;
	write (fd, &base[m], 1);
}
