/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:21:51 by dmaldona          #+#    #+#             */
/*   Updated: 2022/11/08 16:37:07 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRC_H
# define SRC_H
# include "libft/libft.h"

int	char_handler(char c, int fd);
int	str_handler(char *s, int fd);
int	num_handler(int n, int fd, char *base);
int	uns_handler(unsigned int n, int fd, char *base);
int	addr_handler(void *ptr);

#endif