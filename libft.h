/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 22:31:50 by qhusler           #+#    #+#             */
/*   Updated: 2015/12/14 06:06:10 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>

//L1

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *src, const void *dst, int c, size_t n);
//memmove
//memchr
//memcmp
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

//L2

void	*memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void(*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(const char *s);
char	**ft_strsplit(const char *s, char c);
//ft_itoa
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

//L3

//ft_lstnew
//ft_lstdelone
//ft_lstdel
//ft_lstadd
//ft_lstiter
//ft_lstmap

#endif

/*			--LISTE 1--

XM4	memset
XM4	bzero
	memcpy
	memccpy
	memmove
	memchr
	memcmp
XM4	strlen
XM4	strdup
XM4	strcpy
XM4	strncpy
XM4	strcat
XM4	strncat
XM4	strlcat
XM4	strchr
XM4	strrchr
XM4	strstr
XM4	strnstr
XM4	strcmp
XM4	strncmp
XM4	atoi
XM4	isalpha	
XM4	isdigit	
XM4	isalnum	
XM4	isascii	
XM4	isprint		
XM4	toupper		
XM4	tolower	

*/

/*			--LISTE 2--

~	ft_memalloc
~	ft_memdel
XM	ft_strnew
~	ft_strdel
XM4	ft_strclr
XM4	ft_striter
XM4	ft_striteri
XM	ft_strmap
XM4	ft_strmapi
XM4	ft_strequ
XM4	ft_strnequ
XM	ft_strsub
XM4	ft_strjoin
	ft_strtrim
	ft_strsplit
	ft_itoa
XM4	ft_putchar
XM4	ft_putstr
XM4	ft_putendl
XM4	ft_putnbr
XM4	ft_putchar_fd
XM4	ft_putstr_fd
XM4	ft_putendl_fd
XM4	ft_putnbr_fd

*/
