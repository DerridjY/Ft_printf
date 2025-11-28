/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderridj <yderridj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:15:53 by yderridj          #+#    #+#             */
/*   Updated: 2025/10/27 17:04:12 by yderridj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_hexconvupper(unsigned int n);
int	ft_hexconvlower(unsigned int n);
int	ft_putchar(char c);
int	ft_putunsnbr(unsigned int n);
int	ft_pointconvhex(unsigned long n);
int	ft_hexconvlowerlong(unsigned long n);
#endif