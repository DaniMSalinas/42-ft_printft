/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:26:40 by dmaldona          #+#    #+#             */
/*   Updated: 2022/11/09 14:28:19 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

int	num_handler(int n, int fd, char *base)
{
	ft_putnbr_fd_base(n, fd, base);
	return (ft_numlen(n, base));
}
