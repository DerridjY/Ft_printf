/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderridj <yderridj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:07:20 by yderridj          #+#    #+#             */
/*   Updated: 2025/10/27 17:07:44 by yderridj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_hexconvlower(unsigned int n)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
	{
		count += ft_hexconvlower(n / 16);
	}
	count += ft_putchar(base[n % 16]);
	return (count);
}

int	ft_hexconvupper(unsigned int n)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789ABCDEF";
	if (n >= 16)
	{
		count += ft_hexconvupper(n / 16);
	}
	count += ft_putchar(base[n % 16]);
	return (count);
}

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		count += write(1, "-2147483648", 11);
	if (n < 0 && n != -2147483648)
	{
		count += write(1, "-", 1);
		n = -n;
	}
	if (n > 9 && n != -2147483648)
	{
		count += ft_putnbr(n / 10);
	}
	if (n != -2147483648)
		count += ft_putchar(n % 10 + '0');
	return (count);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (ft_putstr("(null)"));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
