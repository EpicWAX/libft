/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 22:31:50 by qhusler           #+#    #+#             */
/*   Updated: 2016/08/08 19:35:49 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>

/*
** Define of color for ft_putstr_color
*/

# define CEND		"\x1b[0m"
# define CCYAN		"\x1b[38;5;39m"
# define CRED		"\x1b[38;5;160m"
# define CYELL		"\x1b[38;5;11m"
# define CGREEN		"\x1b[38;5;82m"
# define CBLUE		"\x1b[38;5;19m"
# define CORANGE	"\x1b[38;5;202m"
# define CPURPLE	"\x1b[38;5;62m"

/*
** The White Rabbit (define for debug more simply)
**
**		PUTSCx is a define to call the function ft_putstr_color more simply.
**		TROIS is a simple color terner for TRUE and FALSE but for mystic reason
**			the return value is the same.
**		WESH is a simple segfault tracker but in blue! "Wesh" is the slang in
**			french for "Hello my friends how are you? Me i'm realy fine today!".
*/

# define PUTSCG(X)		ft_putstr_color(CGREEN, X, CEND)
# define PUTSCR(X)		ft_putstr_color(CRED, X, CEND)
# define PUTSCB(X)		ft_putstr_color(CBLUE, X, CEND)

# define TROIS			? PUTSCG("1\n") : PUTSCR("1\n");
# define WESH			PUTSCB("\nWESH\n");

/*
** Get_next_line parts
*/

# define BUFF_SIZE	42

typedef	struct		s_mfd
{
	int				fd;
	char			*s;
	void			*next;
	void			*bgn_lst;
}					t_mfd;

int					get_next_line(const int fd, char **line);

/*
** Lft parts
*/

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *src, const void *dst, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

size_t				ft_strlen(const char *s);
char				*ft_strnew(size_t size);
void				ft_strclr(char *s);
void				ft_strdel(char **as);
char				*ft_strdup(const char *s);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(const char *s);
char				**ft_strsplit(const char *s, char c);
int					ft_atoi(const char *s);
char				*ft_itoa(int n);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void(*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putstr_color(char *color, char *printable, char *end);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

int					ft_pgcd(int a, int b);

int					ft_isblank(int c);
int					ft_isspace(int c);
int					ft_isprime(int n);

size_t				ft_strnlen(const char *s, size_t maxlen);

void				ft_swap_char(char *a, char *b);
void				ft_swap_str(char **s1, char **s2);
char				*ft_strrev(char *str);

void				ft_epur_str(char *s);
void				ft_putnbrendl(int n);
char				*ft_xrotn(char *s, int n);
char				*ft_xntor(char *s, int n);

#endif
