/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:24:55 by ggevorgi          #+#    #+#             */
/*   Updated: 2024/10/27 16:01:04 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	int		j;
	int		dst_len;
	int		src_len;

	i = -1;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = dst_len;
	while (src[++i] != '\0' && i < dsize)
		dst[j++] = src[i];
	dst[j] = '\0';
	return (src_len + dst_len);
}
