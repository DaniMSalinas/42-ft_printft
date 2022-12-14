/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:24:45 by dmaldona          #+#    #+#             */
/*   Updated: 2022/11/21 12:49:55 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

int	str_handler(char *s, int fd)
{
	if (!s)
		s = "(null)";
	ft_putstr_fd(s, fd);
	return (ft_strlen(s));
}
