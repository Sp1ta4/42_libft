/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 23:29:27 by ggevorgi          #+#    #+#             */
/*   Updated: 2024/11/01 23:16:46 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	int		is_contain;

	i = -1;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[++i] != '\0' && i < n)
	{
		j = 0;
		is_contain = 1;
		while (needle[j] != '\0' && (j + i) < n)
		{
			if (haystack[i + j] != needle[j])
			{
				is_contain = 0;
				break ;
			}
			j++;
		}
		if (is_contain && needle[j] == '\0')
			return ((char *)&haystack[i]);
	}
	return (NULL);
}
