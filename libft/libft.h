/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphokomp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 14:43:24 by wphokomp          #+#    #+#             */
/*   Updated: 2018/07/03 14:08:11 by wphokomp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <fcntl.h>

# define OP "+^|!"
# define MAX_FD 2560

typedef	struct s_list	t_list;

struct	s_list
{
	char	*str;
	t_list	*next;
};

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int n);
void	ft_putnbrendl(int n);
void	ft_bzero(void *s, size_t n);
void	ft_bzero_point(void **s, size_t n);
void	ft_memdel(void **ap);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putendl(char const *s);
void	ft_strdel(char **as);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memalloc(size_t size);
void	ft_free2d(void **arr);
void	ft_sortarr(char *arr);

int		ft_restart_file(int fd, char *file);
int		ft_list_del_el(char **lisr, char *str);
int		ft_atoi(const char *str);
int		op(char op);
int		ft_isbrac(char ch);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_chrcmp(char a, char b);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strlen_point(char **str);
int		ft_strchr_indx(const char *s, int c);

size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

char	*ft_strcat(char *s1, const char *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *big, const char *little);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoin_nolim(char del, char *s1, ...);
char	*ft_strtrim(char const *s);
char	*ft_itoa(int n);
char	*ft_strnew(size_t size);
char	**ft_strnew_point(size_t size);
char	*ft_strdup(const char *s1);
char	**ft_strsplit(char const *s, char c);
char	*ft_str_chr(char *s, int c);
char	*ft_mem_realloc(char *old, size_t size);
char	**ft_listnew(int size);
char	**ft_listcat(char **lst, char *str);
char	**ft_listdup(char **list);

#endif
