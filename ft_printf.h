/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mframbou <mframbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:38:54 by mframbou          #+#    #+#             */
/*   Updated: 2021/10/22 17:51:54 by mframbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_conversions
{
	char	type;
	int		(*print_data)(va_list *);
}	t_conversions;

int		ft_printf(const char *str, ...);
int		ft_printf_char(va_list *args);
int		ft_printf_hex_min(va_list *args);
int		ft_printf_hex_maj(va_list *args);
int		ft_printf_integer(va_list *args);
int		ft_printf_percent(va_list *args);
int		ft_printf_pointer(va_list *args);
int		ft_printf_str(va_list *args);
int		ft_printf_unsigned_int(va_list *args);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);

#endif