/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:00:16 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/13 19:09:07 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

int				ft_tolower(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_isalpha(char c);
int				ft_isdigit(char c);
int				ft_strlen(char *str);
void			ft_putnbr(int nb);
int				ft_isalnum(int c);
int				ft_atoi(const char *str);
char			*ft_strdup(const char *s);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strcat(char *dest, char *src);
char			*ft_strcpy(char *dest, char *src);
void			*ft_memset(void *s, int c, size_t n);
char			*ft_strstr(const char *str, const char *to_find);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
char			*ft_strnstr(const char *haystack, const char *needle, size_t n);
void			*ft_bzero(void *s, size_t n);

#endif