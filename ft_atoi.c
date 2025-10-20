/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 21:02:21 by marahhal          #+#    #+#             */
/*   Updated: 2025/08/09 21:02:25 by marahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		sign;
	int		res;
	int		i;
	char	*str;

	i = 0;
	sign = 1;
	res = 0;
	str = (char *)nptr;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * sign);
}
/*
int	main(void)
{
printf("%i",ft_atoi("-13515351"));
printf("\n%i",atoi("-13515351"));
}
*/
