/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:00:16 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/12 19:53:06 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
char			*ft_strstr(char *str, char *to_find);
char			*ft_strcat(char *dest, char *src);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);