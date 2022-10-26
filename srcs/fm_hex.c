/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fm_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:01:04 by yidouiss          #+#    #+#             */
/*   Updated: 2022/10/26 16:25:18 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

int	puthex(unsigned int num, char c)
{
	int		i;
	int		mod;
	char	str[50];

	i = 0;
	while (num != 0)
	{
		mod = num % 16;
		if (mod < 10)
		{
			str[i++] = mod + 48;
		}
		else if (c == 'X')
		{
			str[i++] = mod + 55;
		}
		else
		{
			str[i++] = mod + 87;
		}
		num /= 16;
	}
	str[i] = '\0';
	ft_putstr(ft_strrev(str));
	return (i);
}

int	fm_hex(unsigned int num, char c)
{
	if (num == 0)
	{
		ft_putchar('0');
		return (1);
	}
	return (puthex(num, c));
}
