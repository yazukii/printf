/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fm_dec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:27:37 by yidouiss          #+#    #+#             */
/*   Updated: 2022/10/26 15:48:25 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

int	fm_dec(int num)
{
	ft_putnbr_fd(num, 1);
	return (ft_intlen(num));
}
