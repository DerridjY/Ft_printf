/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderridj <yderridj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:15:31 by yderridj          #+#    #+#             */
/*   Updated: 2025/10/24 18:29:07 by yderridj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>

int ft_printf(const char *format, ...)
{
	va_list parametertype;
	int	i;
	
	va_start (parametertype, format);
	i = 0;
	
	if (format == %)
		ft_putchar

	va_end(parametertype);
}
