/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libfunctions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mframbou <mframbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:21:25 by mframbou          #+#    #+#             */
/*   Updated: 2021/10/22 17:43:28 by mframbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char const *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
}

char	*ft_strdup(const char *s)
{
	const char	*str;
	char		*res;
	int			size;

	size = 0;
	str = s;
	while (*str++)
		size++;
	str = s;
	res = (char *) malloc(sizeof (char) * (size + 1));
	if (res == NULL)
		return (NULL);
	while (size >= 0)
	{
		res[size] = str[size];
		size--;
	}
	return (res);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
