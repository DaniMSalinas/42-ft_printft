/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 13:52:29 by dmaldona          #+#    #+#             */
/*   Updated: 2022/09/21 21:46:13 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size && count && (count > SIZE_MAX / size))
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}
