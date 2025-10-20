/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marahhal <marahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 12:41:53 by marahhal          #+#    #+#             */
/*   Updated: 2025/08/18 18:42:54 by marahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **sp)
{
	int	i;

	i = 0;
	if (!sp)
		return ;
	while (sp[i])
	{
		free(sp[i]);
		i++;
	}
	free(sp);
}

static char	*litters(char const *s, char c)
{
	int		count;
	char	*str;
	int		j;

	count = 0;
	j = 0;
	count = 0;
	while (s[count] != c && s[count])
	{
		count++;
	}
	str = malloc(count + 1);
	if (!str)
		return (0);
	while (j < count)
	{
		str[j] = s[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

static int	cw(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s[0])
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	**fun(const char *s, char c, char **sp)
{
	int	j;

	j = 0;
	while (*s)
	{
		if (*s != c)
		{
			sp[j] = litters(s, c);
			if (!sp[j])
			{
				free_split(sp);
				return (0);
			}
			j++;
			s = s + ft_strlen(sp[j - 1]);
		}
		else
			s++;
	}
	sp[j] = 0;
	return (sp);
}

char	**ft_split(char const *s, char c)
{
	char	**sp;
	int		w;
	int		i;

	i = 0;
	if (!s)
		return (0);
	w = cw(s, c);
	sp = malloc((w + 1) * sizeof(char *));
	if (!sp)
		return (0);
	sp = fun(s, c, sp);
	return (sp);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**str;

	str = ft_split("afhiufssfoaihnaksif", 'k');
	printf("%s\n%s\n%s\n", str[0], str[1],str[2]);
	free_split (str);
}*/
