/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:55:18 by yidouiss          #+#    #+#             */
/*   Updated: 2022/10/25 19:03:00 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "../includes/ft_printf.h"
#include "../includes/libft.h"

int	ft_format(va_list list, char c, int size)
{
	if (c == ('c'))
	{
		ft_putchar(va_arg(list, int));
		return(1);
	}
	if (c == ('s'))
	{
		ft_putstr(va_arg(list, int));
		size++;
	}
	return (size);
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
			size += ft_format(list, *desc, size);
				ft_putchar(*desc);
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

int main(void)
{
	printf("%d", - ft_printf(" %c %c %c ", '0', 0, '1'));
	printf("\n");
	printf("%d", - printf(" %c %c %c ", '0', 0, '1'));
	return (0);
}
