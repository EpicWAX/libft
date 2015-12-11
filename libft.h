#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>

//L1

//memset
//bzero
//memcpy
//memccpy
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
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

//L2

int		ft_atoi(const char *str);
void	*memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
/* print function */
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif

/*			--LISTE 1--

	memset
	bzero
	memcpy
	memccpy
	memmove
	memchr
	memcmp
X	strlen
X	strdup
X	strcpy
X	strncpy
X	strcat
X	strncat
X	strlcat
X	strchr
X	strrchr
X	strstr
	strnstr
X	strcmp
X	strncmp
X	atoi
X	isalpha	
X	isdigit	
X	isalnum	
X	isascii	
X	isprint		
X	toupper		
X	tolower	

*/

/*			--LISTE 2--

~	ft_memalloc
~	ft_memdel
X	ft_strnew
~	ft_strdel
	ft_strclr
	ft_striter
	ft_striteri
	ft_strmap
	ft_strmapi
	ft_strequ
	ft_strnequ
	ft_strsub
	ft_strjoin
	ft_strtrim
	ft_strsplit
	ft_itoa
X	ft_putchar
X	ft_putstr
X	ft_putendl
X	ft_putnbr
X	ft_putchar_fd
X	ft_putstr_fd
X	ft_putendl_fd
X	ft_putnbr_fd

*/
