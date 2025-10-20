/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 18:44:28 by marahhal          #+#    #+#             */
/*   Updated: 2025/08/09 18:56:16 by marahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	fill(char const *s, int start, int len, char *str)
{
	int	i;

	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= l)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (len > l - start)
		len = l - start;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[fill(s, start, len, str)] = '\0';
	return (str);
}

/*
int	main(void)
{
	printf("%s",ft_substr("heallo mais",  4444,4));
}
*/
