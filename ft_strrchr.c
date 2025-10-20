/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrhr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:32:24 by marahhal          #+#    #+#             */
/*   Updated: 2025/08/07 17:39:24 by marahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = ft_strlen(s);
	if ((char)c == '\0')
		return (&str[ft_strlen(s)]);
	if (!s)
		return (0);
	while (i-- >= 0)
	{
		if (str[i] == (char)c)
			return (&str[i]);
	}
	return (NULL);
}
/*
int	main(void)
{
	char	p[] = "mayys";
	int		v;

	v = 'y';
	printf("%s", strrchr(p,v));
}
*/
