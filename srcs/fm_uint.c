/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fm_uint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:41:19 by yidouiss          #+#    #+#             */
/*   Updated: 2022/10/26 15:59:37 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

void	ft_putuint_fd(unsigned int n, int fd)
{
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + 48, fd);
}

int	ft_uintlen(unsigned int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

int	fm_uint(unsigned int num)
{
	ft_putuint_fd(num, 1);
	return (ft_uintlen(num));
}
