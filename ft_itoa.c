/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahhal <marahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:16:35 by marahhal          #+#    #+#             */
/*   Updated: 2025/08/12 12:27:25 by marahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	counter(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	n /= 10;
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		x;
	long	num;

	num = (long)n;
	x = counter(num);
	str = malloc(sizeof(char) * (x + 1));
	if (!str)
		return (0);
	i = counter(num) - 1;
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 9)
	{
		str[i] = num % 10 + 48;
		num /= 10;
		i--;
	}
	str[i++] = num % 10 + 48;
	str[x] = '\0';
	return (str);
}

/*
int	main(void)
{
	printf("%s",ft_itoa(-2147483648));
}
*/
