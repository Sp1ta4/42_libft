/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:24:55 by ggevorgi          #+#    #+#             */
/*   Updated: 2024/11/13 00:28:14 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t		dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);

	if (dsize <= dst_len)
		return (src_len + dsize);
	i = -1;
	while (src[++i] && (i + dst_len) < dsize - 1)
		dst[i + dst_len] = src[i];
	dst[i + dst_len] = '\0';
	return (src_len + dst_len);
}