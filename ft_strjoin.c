/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 12:23:30 by marahhal          #+#    #+#             */
/*   Updated: 2025/08/09 12:40:55 by marahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	length;
	size_t	i;
	size_t	j;
	char	*str_join;

	i = 0;
	j = 0;
	length = ft_strlen(s1) + ft_strlen(s2);
	str_join = malloc(length + 1);
	if (str_join == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		str_join[i++] = s1[j++];
	}
	j = 0;
	while (i < length)
	{
		str_join[i++] = s2[j++];
	}
	str_join[i] = 0;
	return (str_join);
}
/*
int	main(void)
{
	printf("%s",ft_strjoin("mais","rahhal"));
}
*/
