/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 21:22:18 by marahhal          #+#    #+#             */
/*   Updated: 2025/08/09 21:22:28 by marahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	length;
	char	*str;
	size_t	i;
	char	*src;

	src = (char *)s;
	length = ft_strlen(src) + 1;
	str = (char *)malloc((length) * sizeof(char));
	i = 0;
	if (str == NULL)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	*src;

	src = "udtfizrkyr";
	printf("%s", ft_strdup(src));
	//ft_strdup(src);
}
*/
