/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 21:19:56 by marahhal          #+#    #+#             */
/*   Updated: 2025/08/09 21:20:02 by marahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}
/*
int	main(void)
{
	char	p[] = "teste";
	int		v;

	v = 1024;
	// printf("%s",strchr(p,v));
	printf("%c",(char)v);
	printf("%s", ft_strchr(p, '\0'));
	// printf("%s",strchr(p,v));
}
*/
