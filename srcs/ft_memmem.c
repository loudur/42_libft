/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurieux <ldurieux@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:31:06 by ldurieux          #+#    #+#             */
/*   Updated: 2022/08/19 12:31:07 by ldurieux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmem(const void *haystack, t_size haystack_len,
			const void *needle, t_size needle_len)
{
	t_size		i;
	const void	*haystack_end;

	if (!needle_len)
		return ((void *)haystack);
	haystack_end = haystack + haystack_len;
	while (haystack < haystack_end)
	{
		i = 0;
		while ((haystack + i) < haystack_end
			&& ((const char *)haystack)[i] == ((const char *)needle)[i])
			i++;
		if (i == needle_len)
			return ((void *)haystack);
		haystack++;
	}
	return (NULL);
}