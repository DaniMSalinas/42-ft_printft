/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:40:53 by dmaldona          #+#    #+#             */
/*   Updated: 2022/11/08 16:07:06 by dmaldona         ###   ########.fr       */
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
		return (char_handler((intptr_t) content, 1));
	else if (type == 's')
		return (str_handler(content, 1));
	else if (type == 'p')
		return (addr_handler(&content));
	else if (type == 'd' || type == 'i')
		return (num_handler((intptr_t)content, 1, "0123456789"));
	else if (type == 'u')
		return (uns_handler((intptr_t)content, 1, "0123456789"));
	else if (type == 'x')
		return (num_handler((intptr_t)content, 1, "0123456789abcdef"));
	else if (type == 'X')
		return (num_handler((intptr_t)content, 1, "0123456789ABCDEF"));
	else if (type == '%')
		return (char_handler('%', 1));
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
		if (fmt[n] == '%' && fmt[n+1] != '%' && fmt[n+1] != '\0')
		{
			size += get_size(va_arg(ap, void *), fmt[n+1]);
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
