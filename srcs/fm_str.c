/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fm_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:29:12 by yidouiss          #+#    #+#             */
/*   Updated: 2022/10/26 11:57:31 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

int	fm_str(char *str)
{
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	ft_putstr(str);
	return (ft_strlen(str));
}
