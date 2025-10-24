/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderridj <yderridj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:07:20 by yderridj          #+#    #+#             */
/*   Updated: 2025/10/24 17:35:04 by yderridj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_hexconvlower(int n)
{
	char *base;
	
	base = "0123456789abcdef"; 
	if (n >= 16)
	{
		ft_hexconvlower(n / 16);
	}
	ft_putchar(base[n % 16]);
}
void	ft_hexconvupper(int n)
{
	char *base;
	
	base = "0123456789ABCDEF"; 
	if (n >= 16)
	{
		ft_hexconvupper(n / 16);
	}
	ft_putchar(base[n % 16]);
}
void	ft_putnbr (int n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	if (n < 0 && n != -2147483648)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9 && n != -2147483648)
	{
		ft_putnbr(n / 10);
	}
	if (n != -2147483648)
		ft_putchar(n % 10 + '0');
}
void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
