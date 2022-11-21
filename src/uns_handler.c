/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uns_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:26:40 by dmaldona          #+#    #+#             */
/*   Updated: 2022/11/21 01:26:51 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

int	uns_handler(unsigned int n, int fd, char *base)
{
	return (ft_putunbr_fd_base(n, fd, base) + 1);
}
