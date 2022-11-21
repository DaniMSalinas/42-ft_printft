/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addr_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:47:14 by dmaldona          #+#    #+#             */
/*   Updated: 2022/11/21 01:35:21 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

int	addr_handler(void *ptr)
{
	if (!ptr)
	{
		ft_putstr_fd("(nil)", 1);
		return (ft_strlen("(nil)"));
	}
	write(1, "0x", 2);
	return (ft_putaddr_fd((unsigned long int)ptr, 1) + 3);
}
