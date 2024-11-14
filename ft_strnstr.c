/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 23:29:27 by ggevorgi          #+#    #+#             */
/*   Updated: 2024/11/14 15:15:37 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return ((char *)haystack);
	i = -1;
	while (haystack[++i] != '\0' && i < n)
	{
		j = 0;
		while (needle[j] != '\0' && (j + i) < n)
		{
			if (haystack[i + j] != needle[j])
				break ;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
	}
	return (NULL);
}
//  char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	n_len;

// 	i = 0;
// 	n_len = ft_strlen(needle);
// 	if (n_len == 0)
// 		return ((char *)haystack);
// 	while (i < len && haystack[i])
// 	{
// 		if (haystack[i] == needle[0])
// 		{
// 			j = 0;
// 			while (j < n_len && i + j < len && haystack[i + j] == needle[j])
// 				j++;
// 		}
// 		if (j == n_len)
// 			return ((char *)&haystack[i]);
// 		i++;
// 	}
// 	return (NULL);
// }


