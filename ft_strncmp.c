/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <sp1tak.gg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:56:20 by ggevorgi          #+#    #+#             */
/*   Updated: 2024/11/01 23:16:31 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_asciisum(const char *str, size_t n)
{
	size_t	i;
	int		sum;

	i = -1;
	sum = 0;
	while (str[++i] != '\0' && i < n)
		sum += str[i];
	return (sum);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	s1_sum;
	int	s2_sum;

	s1_sum = ft_asciisum(s1, n);
	s2_sum = ft_asciisum(s2, n);
	return (s1_sum - s2_sum);
}
