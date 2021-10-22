/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mframbou <mframbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:17:42 by mframbou          #+#    #+#             */
/*   Updated: 2021/10/22 17:43:23 by mframbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(va_list *args)
{
	char	*str;

	str = va_arg(*args, char *);
	if (str)
	{
		ft_putstr_fd(str, 1);
		return (ft_strlen(str));
	}	
	else
	{
		ft_putstr_fd("(null)", 1);
		return (ft_strlen("(null)"));
	}
}
