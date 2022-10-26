/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidouiss <yidouiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:38:08 by yidouiss          #+#    #+#             */
/*   Updated: 2022/10/26 16:16:25 by yidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <unistd.h>
# include <stdarg.h>

int		ft_format(va_list list, char c);
int		ft_printf(const char *desc, ...);
int		fm_str(char *str);
int		fm_point(unsigned long long str);
int		fm_dec(int num);
int		fm_uint(unsigned int num);
int		fm_hex(unsigned int num, char c);

#endif
