/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fm_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:03:13 by yidouiss          #+#    #+#             */
/*   Updated: 2022/10/26 15:34:59 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

int	ft_puthex(unsigned long long num, int size)
{
	int		mod;
	int		i;
	char	hex[50];

	i = 0;
	while (num != 0)
	{
		mod = num % 16;
		if (mod < 10)
		{
			hex[i] = 48 + mod;
			i++;
		}
		else
		{
			hex[i] = 87 + mod;
			i++;
		}
		num = num / 16;
	}
	hex[i] = '\0';
	ft_putstr(ft_strrev(hex));
	size = i;
	return (size);
}

int	fm_point(unsigned long long str)
{
	int	size;

	size = 2;
	ft_putstr("0x");
	if (!str)
	{
		ft_putchar('0');
		return (size + 1);
	}
	size += ft_puthex(str, size);
	return (size);
}
