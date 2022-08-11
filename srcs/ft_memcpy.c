/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurieux <ldurieux@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:12:48 by ldurieux          #+#    #+#             */
/*   Updated: 2022/08/11 12:12:49 by ldurieux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, t_size len)
{
	t_size			i;
	t_uint64		*i_dst;
	const t_uint64	*i_src;
	char			*c_dst;
	const char		*c_src;

	i = -1;
	if ((t_uint64)dst % sizeof(t_uint64) == 0
		&& (t_uint64)src % sizeof(t_uint64) == 0
		&& len % sizeof(t_uint64) == 0)
	{
		i_dst = (t_uint64 *)dst;
		i_src = (const t_uint64 *)src;
		while (++i < len / sizeof(t_uint64))
			i_dst[i] = i_src[i];
	}
	else
	{
		c_dst = (char *)dst;
		c_src = (const char *)src;
		while (++i < len)
			c_dst[i] = c_src[i];
	}
	return (dst);
}
