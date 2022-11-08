/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uns_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:26:40 by dmaldona          #+#    #+#             */
/*   Updated: 2022/11/08 15:39:31 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

int	uns_handler(unsigned int n, int fd, char *base)
{
	ft_putunbr_fd_base(n, fd, base);
	return (ft_numlen(n, base));
}
