/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelarose <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 19:03:49 by jelarose          #+#    #+#             */
/*   Updated: 2019/12/06 19:03:53 by jelarose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strlen_set(char *str, char set)
{
	unsigned int i;

	i = 0;
	if (str)
		while (str[i] && str[i] != set)
			i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char			*ret;
	unsigned int	i;

	i = 0;
	if (!(ret = malloc(sizeof(char*) * (ft_strlen_set(src, '\0') + 1))))
		return (NULL);
	while (src[i])
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

char	*ft_strchr(const char *s, int c)
{
	if (s)
	{
		while (*s)
		{
			if (*s == c)
				return ((char*)s);
			s++;
		}
		if (*s == c)
			return ((char*)s);
	}
	return (NULL);
}

char	*ft_strcat_mal(char *s1, char *s2, unsigned size)
{
	char		*ret;
	unsigned	i;

	i = 0;
	if (!(ret = malloc(sizeof(char*) * (ft_strlen_set(s1, '\0') + size + 1))))
		return (NULL);
	if (s1)
	{
		while (s1[i])
		{
			ret[i] = s1[i];
			i++;
		}
		free(s1);
		s1 = NULL;
	}
	if (s2)
		while (size-- > 0)
		{
			ret[i] = *s2;
			i++;
			s2++;
		}
	ret[i] = '\0';
	return (ret);
}
