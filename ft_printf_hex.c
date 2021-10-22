/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mframbou <mframbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:39:37 by mframbou          #+#    #+#             */
/*   Updated: 2021/10/22 18:01:09 by mframbou         ###   ########.fr       */
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

int	ft_printf_hex_min(va_list *args)
{
	unsigned int	nbr;
	char			*nb_str;
	int				hex_len;

	nbr = va_arg(*args, unsigned int);
	nb_str = dec_to_base(nbr, "0123456789abcdef");
	ft_putstr_fd(nb_str, 1);
	hex_len = ft_strlen(nb_str);
	free(nb_str);
	return (hex_len);
}

int	ft_printf_hex_maj(va_list *args)
{
	unsigned int	nbr;
	char			*nb_str;
	int				hex_len;

	nbr = va_arg(*args, unsigned int);
	nb_str = dec_to_base(nbr, "0123456789ABCDEF");
	ft_putstr_fd(nb_str, 1);
	hex_len = ft_strlen(nb_str);
	free(nb_str);
	return (hex_len);
}
