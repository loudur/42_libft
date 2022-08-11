/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurieux <ldurieux@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:11:25 by ldurieux          #+#    #+#             */
/*   Updated: 2022/08/11 12:11:28 by ldurieux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline t_bool	ft_is_digit(const char chr)
{
	return (chr >= '0' && chr <= '9');
}

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (ft_is_whitespace(*str))
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	while (ft_is_digit(*str))
		res = res * 10 + *str++ - '0';
	return (res * sign);
}

/* atol does not seem to have the same behaviour as atoi
 * when int/long overflows
 * need to check the behavious on OSX
 * same for atoll
*/
long	ft_atol(const char *str)
{
	long	res;
	int		sign;

	res = 0;
	sign = 1;
	while (ft_is_whitespace(*str))
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	while (ft_is_digit(*str))
		res = res * 10 + *str++ - '0';
	return (res * sign);
}

long long	ft_atoll(const char *str)
{
	long long	res;
	int			sign;

	res = 0;
	sign = 1;
	while (ft_is_whitespace(*str))
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	while (ft_is_digit(*str))
		res = res * 10 + *str++ - '0';
	return (res * sign);
}
