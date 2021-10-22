/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_int.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mframbou <mframbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:34:55 by mframbou          #+#    #+#             */
/*   Updated: 2021/10/22 18:01:00 by mframbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*dec_to_base(unsigned int nbr, char *base)
{
	size_t			i;
	size_t			j;
	char			*result;
	char			*temp_result;

	temp_result = malloc (sizeof (char) * 40);
	j = -1 ;
	while (++j < 40)
		temp_result[j] = '\0';
	j -= 2;
	i = 0;
	if (nbr == 0)
		temp_result[--j] = base[0];
	while (nbr > 0)
	{
		temp_result[--j] = base[nbr % ft_strlen(base)];
		nbr /= ft_strlen(base);
	}
	result = ft_strdup(&(temp_result[j]));
	free(temp_result);
	return (result);
}

int	ft_printf_unsigned_int(va_list *args)
{
	char	*unbr_str;
	int		unbr_len;

	unbr_str = dec_to_base(va_arg(*args, unsigned int), "0123456789");
	ft_putstr_fd(unbr_str, 1);
	unbr_len = ft_strlen(unbr_str);
	free(unbr_str);
	return (unbr_len);
}
