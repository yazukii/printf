/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:55:18 by yidouiss          #+#    #+#             */
/*   Updated: 2022/10/26 16:18:16 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "../includes/ft_printf.h"
#include "../includes/libft.h"

int	ft_format(va_list list, char c)
{
	if (c == 'c')
	{
		ft_putchar(va_arg(list, int));
		return (1);
	}
	if (c == '%')
	{
		ft_putchar('%');
		return (1);
	}
	if (c == 's')
		return (fm_str(va_arg(list, char *)));
	if (c == 'p')
		return (fm_point(va_arg(list, unsigned long long)));
	if (c == 'd' || c == 'i')
		return (fm_dec(va_arg(list, int)));
	if (c == 'u')
		return (fm_uint(va_arg(list, unsigned int)));
	if (c == 'x' || c == 'X')
		return (fm_hex(va_arg(list, unsigned int), c));
	return (0);
}

int	ft_printf(const char *desc, ...)
{
	va_list	list;
	int		size;

	size = 0;
	va_start(list, desc);
	while (*desc)
	{
		if (*desc == '%')
		{
			desc++;
			size += ft_format(list, *desc);
		}
		else
		{
			size++;
			ft_putchar(*desc);
		}
		desc++;
	}
	va_end(list);
	return (size);
}
/*
int main(void)
{
	//char *test = "yes";
	printf("%d", ft_printf("%x - ", 123425428));
	printf("\n");
	printf("%d", printf("%x - ", 123425428));
	return (0);
}*/