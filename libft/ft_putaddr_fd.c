/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:54:50 by dmaldona          #+#    #+#             */
/*   Updated: 2022/11/21 14:07:30 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putaddr_fd(unsigned long int n, int fd)
{
	static int	i;
    char		*base;

    base = "0123456789abcdef";
	i = 0;
	if (n >= 16)
		ft_putaddr_fd(n / 16, fd);
	n %= 16;
	write (fd, &base[n], 1);
	return (i++);
}