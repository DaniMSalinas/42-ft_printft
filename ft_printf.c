/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:40:53 by dmaldona          #+#    #+#             */
/*   Updated: 2022/11/07 19:16:31 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//va_start inicializa
//va_end finaliza
//va_arg coge el valor del argumento
//va_copy copia el valor del argumento

int	get_size(void *content, char type)
{
	if (type == 'c')
	{
		ft_putchar_fd((intptr_t) content, 1);
		return (1);
	}
	else if (type == 's')
	{
		ft_putstr_fd(content, 1);
		return (ft_strlen((char *) content));
	}
	else if (type == 'p')
		return ('p');
	else if (type == 'd')
		return ('d');
	else if (type == 'i')
		return ('i');
	else if (type == 'u')
		return ('u');
	else if (type == 'x')
		return ('x');
	else if (type == 'X')
		return ('X');
	else if (type == '%')
		return ('%');
	else
		return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		n;
	int		size;

	va_start(ap, fmt);
	n = 0;
	size = 0;
	while (fmt[n])
	{
		if (fmt[n] == '%' && fmt[n +1] != '\0')
		{
			size += get_size(va_arg(ap, void *), fmt[n +1]);
			n++;
		}
		else
		{
			write(1, &fmt[n], 1);
			size++;
		}
		n++;
	}
	va_end(ap);
	return (size);
}
