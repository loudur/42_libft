/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurieux <ldurieux@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:13:23 by ldurieux          #+#    #+#             */
/*   Updated: 2022/08/14 22:54:21 by ldurieux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

# define ULLONG_MAX	0xffffffffffffffff
# define LLONG_MAX	0x7fffffffffffffff
# define LLONG_MIN	0x8000000000000000
# define ULONG_MAX	0xffffffffffffffff
# define LONG_MAX	0x7fffffffffffffff
# define LONG_MIN	0x8000000000000000
# define UINT_MAX	0xffffffff
# define INT_MAX	0x7fffffff
# define INT_MIN	0x80000000
# define USHORT_MAX	0xffff
# define SHORT_MAX	0x7fff
# define SHORT_MIN	0x8000
# define UBYTE_MAX	0xff
# define BYTE_MAX	0x7f
# define BYTE_MIN	0x80

typedef unsigned long long	t_size;
typedef unsigned char		t_bool;

typedef unsigned long long	t_uint64;
typedef unsigned int		t_uint32;
typedef unsigned short		t_uint16;
typedef unsigned char		t_uint8;

typedef long long			t_int64;
typedef int					t_int32;
typedef short				t_int16;
typedef char				t_int8;

/*PRINT*/
void		ft_putstr(char *str);
void		ft_putnbr(int value);

/*STRING*/
t_size		ft_strlen(const char *str);
t_size		ft_strnlen(const char *str, t_size n);

int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, t_size n);
int			ft_stricmp(const char *s1, const char *s2);
int			ft_strnicmp(const char *s1, const char *s2, t_size n);

char		*ft_strchr(char *str, char chr);
char		*ft_strrchr(char *str, char chr);

char		*ft_strstr(char *haystack, const char *needle);
char		*ft_strrstr(char *haystack, const char *needle);

char		*ft_strcpy(char	*dest, const char *src);
char		*ft_strncpy(char *dest, const char *src, t_size n);
t_size		ft_strlcpy(char *dest, const char *src, t_size size);
char		*ft_strdup(const char *src);
char		*ft_strndup(const char *src, t_size n);

char		*ft_strcat(char *dest, const char *src);
char		*ft_strncat(char *dest, const char *src, t_size n);
t_size		ft_strlcat(char *dest, const char *src, t_size size);

char		*ft_strlwr(char *str);
char		*ft_strupr(char *str);
char		*ft_strcap(char *str);
char		*ft_strrev(char *str);

t_bool		ft_str_iswhitespace(const char *str);
t_bool		ft_str_isalphanum(const char *str);
t_bool		ft_str_isalpha(const char *str);
t_bool		ft_str_isdigit(const char *str);
t_bool		ft_str_isprintable(const char *str);

char		*ft_strtrm_lead(char *str);
char		*ft_strtrm_trail(char *str);
char		*ft_strtrm(char *str);
char		*ft_strsmp(char *str);

t_size		ft_strspn(const char *str, const char *chrs);
char		*ft_strpbrk(char *str, const char *chrs);
char		*ft_strtok_r(char *str, const char *delims, char **save_ptr);

char		*ft_strjoin(char **strs, const char *delim);
char		**ft_strsplit(char *str, const char *delims);

/*MEM*/
void		ft_swap(void *a, void *b, t_size size);
void		*ft_memcpy(void *dst, const void *src, t_size len);
void		*ft_memset(void *dst, t_uint8 value, t_size len);
void		*ft_calloc(t_size count, t_size size);

/*INT STRING CONVERSION*/
int			ft_atoi(const char *str);
long		ft_atol(const char *str);
long long	ft_atoll(const char *str);
int			ft_strtoi(char *str, char **end_ptr);
long		ft_strtol(char *str, char **end_ptr);
long long	ft_strtoll(char *str, char **end_ptr);
char		*ft_itoa(int value);
char		*ft_ltoa(long value);
char		*ft_lltoa(long long value);
char		*ft_convert_base(const char *str,
				const char *from, const char *to);

/*MATH*/
t_uint64	ft_factorial(t_int64 value);
t_int64		ft_power(t_int64 value, t_int64 power);

/*INLINES*/
/*CHARACTER TYPE*/
static inline t_bool	ft_is_whitespace(const char chr)
{
	return (chr == ' ' || chr == '\f' || chr == '\n'
		|| chr == '\r' || chr == '\t' || chr == '\v');
}

/*SIMPLE MATH*/
static inline t_uint64	ft_abs(t_int64 value)
{
	return (
		value * ((value > 0) * 2 - 1)
	);
}

#endif
