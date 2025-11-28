/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yderridj <yderridj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:15:31 by yderridj          #+#    #+#             */
/*   Updated: 2025/10/28 10:57:46 by yderridj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_chosetype(va_list param, char c)
{
	if (c == 'c')
		return (ft_putchar((char)va_arg(param, int)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(param, int)));
	if (c == 's')
		return (ft_putstr(va_arg(param, char *)));
	if (c == 'x')
		return (ft_hexconvlower(va_arg(param, unsigned int)));
	if (c == 'X')
		return (ft_hexconvupper(va_arg(param, unsigned int)));
	if (c == '%')
		return (ft_putchar('%'));
	if (c == 'p')
		return (ft_pointconvhex((unsigned long)va_arg(param, void *)));
	if (c == 'u')
		return (ft_putunsnbr(va_arg(param, unsigned int)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	param;
	int		i;
	int		count;

	va_start (param, format);
	count = 0;
	i = 0;
	if (!format)
		return (0);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			count += ft_chosetype(param, format[i + 1]);
			i = i + 2;
		}
		else
		{
			count += ft_putchar(format[i]);
			i++;
		}
	}
	va_end(param);
	return (count);
}

// int main(void)
// {
//     int test1;
// 	int test2;
//     char c = 'b';
//     char *str = NULL;
//     void *ptr = str;
//     int d = -42;
//     int i = 42000;
//     unsigned int u = 4294967295;
//     int hex = 484;

//     // %c
//     test1 = ft_printf("ft_printf: %%c -> [%c]\n", c);
//     test2 = printf("printf   : %%c -> [%c]\n", c);
//     printf("Counts : ft_printf = %d, printf = %d\n\n", test1, test2);
//     // %s
//     test1 = ft_printf("ft_printf: %%s -> [%s]\n", str);
//     test2 = printf("printf   : %%s -> [%s]\n", str);
//     printf("Counts : ft_printf = %d, printf = %d\n\n", test1, test2);
//     // %p
//     test1 = ft_printf("ft_printf: %%p -> [%p]\n", ptr);
//     test2 = printf("printf   : %%p -> [%p]\n", ptr);
//     printf("Counts : ft_printf = %d, printf = %d\n\n", test1, test2);
//     // %d
//     test1 = ft_printf("ft_printf: %%d -> [%d]\n", d);
//     test2 = printf("printf   : %%d -> [%d]\n", d);
//     printf("Counts : ft_printf = %d, printf = %d\n\n", test1, test2);
//     // %i
//     test1 = ft_printf("ft_printf: %%i -> [%i]\n", i);
//     test2 = printf("printf   : %%i -> [%i]\n", i);
//     printf("Counts : ft_printf = %d, printf = %d\n\n", test1, test2);
//     // %u
//     test1 = ft_printf("ft_printf: %%u -> [%u]\n", u);
//     test2 = printf("printf   : %%u -> [%u]\n", u);
//     printf("Counts : ft_printf = %d, printf = %d\n\n", test1, test2);
//     // %x
//     test1 = ft_printf("ft_printf: %%x -> [%x]\n", hex);
//     test2 = printf("printf   : %%x -> [%x]\n", hex);
//     printf("Counts : ft_printf = %d, printf = %d\n\n", test1, test2);
//     // %X
//     test1 = ft_printf("ft_printf: %%X -> [%X]\n", hex);
//     test2 = printf("printf   : %%X -> [%X]\n", hex);
//     printf("Counts : ft_printf = %d, printf = %d\n\n", test1, test2);
//     // %%
//     test1 = ft_printf("ft_printf: %%%% -> [%%]\n");
//     test2 = printf("printf   : %%%% -> [%%]\n");
//     printf("Counts : ft_printf = %d, printf = %d\n", test1, test2);
//     return 0;
// }