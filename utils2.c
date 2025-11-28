/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderridj <yderridj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:35:29 by yderridj          #+#    #+#             */
/*   Updated: 2025/10/27 17:07:09 by yderridj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointconvhex(unsigned long n)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (n == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	count += ft_putstr("0x");
	count += ft_hexconvlowerlong(n);
	return (count);
}

int	ft_putunsnbr(unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n > 9)
	{
		count += ft_putunsnbr(n / 10);
	}
	count += ft_putchar(n % 10 + '0');
	return (count);
}

int	ft_hexconvlowerlong(unsigned long n)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
	{
		count += ft_hexconvlowerlong(n / 16);
	}
	count += ft_putchar(base[n % 16]);
	return (count);
}
