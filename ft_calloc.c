/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:17:29 by marahhal          #+#    #+#             */
/*   Updated: 2025/08/09 14:25:16 by marahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	t;

	if (size == 0 || nmemb == 0)
	{
		return (malloc(1));
	}
	t = nmemb * size;
	ptr = malloc(t);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, t);
	return (ptr);
}
/*
int	main(void)
{
	size_t	n;
	size_t	s;

	n = 5;
	s = 1;
	char * s1 = ft_calloc(n ,s);
	printf("%d", (int)s1[0]);
}
*/
