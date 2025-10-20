/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:16:03 by marahhal          #+#    #+#             */
/*   Updated: 2025/08/13 19:20:10 by marahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	back(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	x;

	i = (int)ft_strlen(s1) - 1;
	j = (int)ft_strlen(set) - 1;
	x = 0;
	while (i >= 0)
	{
		if (is(s1[i], set) == 0)
			return (i);
		i--;
	}
	return (0);
}

static int	front(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != 0)
	{
		if (is(s1[i], set) == 0)
			return (i);
		i++;
	}
	return (i);
}

static void	fill(char *str, int c, int i, char *s1)
{
	int	x;

	x = 0;
	while (i <= c)
	{
		str[x++] = s1[i++];
	}
	str[x] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		c;
	int		i;
	int		x;

	if (!set || !s1)
		return (NULL);
	x = 0;
	c = back(s1, set);
	i = front(s1, set);
	if (i - c - (int)ft_strlen(s1) == 0)
	{
		str = malloc(1);
		if (!str)
			return (0);
		str[0] = 0;
		return (str);
	}
	str = malloc(c - i + 2);
	if (!str)
		return (0);
	if (str == NULL)
		return (NULL);
	fill(str, c, i, (char *)s1);
	return (str);
}
/*
int	main(void)
{
	char	*s;

	s = ft_strtrim(" \t \t \n   \n\n\n\t"," \n\t");
	free (s);
	//printf("%s",ft_strtrim(" \t \t \n   \n\n\n\t"," \n\t"));
}
*/
