/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:11:24 by dmaldona          #+#    #+#             */
/*   Updated: 2022/11/09 14:27:30 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdint.h>

// AUX FUNCTIONS FROM LIBFT
size_t	ft_strlen(const char *s);
int     ft_numlen(int n, char *base);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd_base(int n, int fd, char *base);
void	ft_putunbr_fd_base(unsigned int n, int fd, char *base);

#endif