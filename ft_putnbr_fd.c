/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahhal <marahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 17:02:14 by marahhal          #+#    #+#             */
/*   Updated: 2025/08/12 11:20:56 by marahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putstr(char *str, int i, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	char	str[11];
	int		i;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	i = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	while (n > 9)
	{
		str[i] = (n % 10) + 48;
		n /= 10;
		i++;
	}
	str[i] = n + 48;
	ft_putstr(str, i, fd);
}

static void	ft_putstr(char *str, int i, int fd)
{
	while (i >= 0)
	{
		write(fd, &str[i], 1);
		i--;
	}
}
