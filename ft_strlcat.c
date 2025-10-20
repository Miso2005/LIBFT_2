/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:09:24 by marahhal          #+#    #+#             */
/*   Updated: 2025/08/09 15:56:28 by marahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;

	s = ft_strlen(src);
	d = ft_strlen(dst);
	i = 0;
	if (d >= size)
		return (size + s);
	while (i + d < size - 1 && src[i])
	{
		dst[i + d] = src[i];
		i++;
	}
	dst[i + d] = '\0';
	return (d + s);
}
/*
int	main(void)
{
	char	dest[11] = "a";

	printf("%zu", ft_strlcat(dest, "lorem ipsum", 15));
}
*/
